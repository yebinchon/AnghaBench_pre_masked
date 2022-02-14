
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct talitos_ptr {int dummy; } ;
struct talitos_edesc {int src_nents; int dst_nents; int src_is_chained; int dst_is_chained; int dma_len; int * link_tbl; int dma_link_tbl; } ;
struct scatterlist {int dummy; } ;
struct device {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct talitos_edesc* FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,int *,int,int ) ;
 struct talitos_edesc* FUNC_3 (int,int) ;
 int FUNC_4 (struct scatterlist*,unsigned int,int*) ;

__attribute__((used)) static struct talitos_edesc *FUNC_5(struct device *VAR_8,
       struct scatterlist *VAR_9,
       struct scatterlist *VAR_10,
       unsigned int VAR_11,
       unsigned int VAR_12,
       int VAR_13,
       u32 VAR_14)
{
 struct talitos_edesc *VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19;
 int VAR_20, VAR_21 = 0;
 gfp_t VAR_22 = VAR_14 & VAR_0 ? VAR_6 :
        VAR_4;

 if (VAR_11 + VAR_12 > VAR_7) {
  FUNC_1(VAR_8, "length exceeds h/w max limit\n");
  return FUNC_0(-VAR_2);
 }

 VAR_16 = FUNC_4(VAR_9, VAR_11 + VAR_12, &VAR_20);
 VAR_16 = (VAR_16 == 1) ? 0 : VAR_16;

 if (VAR_10 == VAR_9) {
  VAR_17 = VAR_16;
 } else {
  VAR_17 = FUNC_4(VAR_10, VAR_11 + VAR_12, &VAR_21);
  VAR_17 = (VAR_17 == 1) ? 0 : VAR_17;
 }






 VAR_18 = sizeof(struct talitos_edesc);
 if (VAR_16 || VAR_17) {
  VAR_19 = (VAR_16 + VAR_17 + 2) *
     sizeof(struct talitos_ptr) + VAR_12;
  VAR_18 += VAR_19;
 } else {
  VAR_19 = 0;
  VAR_18 += VAR_13 ? VAR_12 : 0;
 }

 VAR_15 = FUNC_3(VAR_18, VAR_5 | VAR_22);
 if (!VAR_15) {
  FUNC_1(VAR_8, "could not allocate edescriptor\n");
  return FUNC_0(-VAR_3);
 }

 VAR_15->src_nents = VAR_16;
 VAR_15->dst_nents = VAR_17;
 VAR_15->src_is_chained = VAR_20;
 VAR_15->dst_is_chained = VAR_21;
 VAR_15->dma_len = VAR_19;
 VAR_15->dma_link_tbl = FUNC_2(VAR_8, &VAR_15->link_tbl[0],
          VAR_15->dma_len, VAR_1);

 return VAR_15;
}
