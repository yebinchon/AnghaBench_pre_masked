
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wbsd_host {char* dma_buffer; } ;
struct scatterlist {int length; } ;
struct mmc_data {unsigned int sg_len; struct scatterlist* sg; } ;


 int FUNC_0 (char*,char*,int ) ;
 char* FUNC_1 (struct scatterlist*) ;

__attribute__((used)) static inline void FUNC_2(struct wbsd_host *VAR_0, struct mmc_data *VAR_1)
{
 unsigned int VAR_2, VAR_3;
 struct scatterlist *VAR_4;
 char *VAR_5 = VAR_0->dma_buffer;
 char *VAR_6;

 VAR_4 = VAR_1->sg;
 VAR_2 = VAR_1->sg_len;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_6 = FUNC_1(&VAR_4[VAR_3]);
  FUNC_0(VAR_5, VAR_6, VAR_4[VAR_3].length);
  VAR_5 += VAR_4[VAR_3].length;
 }
}
