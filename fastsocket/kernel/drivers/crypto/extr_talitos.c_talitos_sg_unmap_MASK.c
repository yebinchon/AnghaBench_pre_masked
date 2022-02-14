
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct talitos_edesc {int src_nents; int dst_nents; scalar_t__ src_is_chained; scalar_t__ dst_is_chained; } ;
struct scatterlist {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,struct scatterlist*,unsigned int,int ) ;
 int FUNC_1 (struct device*,struct scatterlist*,int ) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_3,
        struct talitos_edesc *VAR_4,
        struct scatterlist *VAR_5,
        struct scatterlist *VAR_6)
{
 unsigned int VAR_7 = VAR_4->src_nents ? : 1;
 unsigned int VAR_8 = VAR_4->dst_nents ? : 1;

 if (VAR_5 != VAR_6) {
  if (VAR_4->src_is_chained)
   FUNC_1(VAR_3, VAR_5, VAR_2);
  else
   FUNC_0(VAR_3, VAR_5, VAR_7, VAR_2);

  if (VAR_4->dst_is_chained)
   FUNC_1(VAR_3, VAR_6, VAR_1);
  else
   FUNC_0(VAR_3, VAR_6, VAR_8, VAR_1);
 } else
  if (VAR_4->src_is_chained)
   FUNC_1(VAR_3, VAR_5, VAR_0);
  else
   FUNC_0(VAR_3, VAR_5, VAR_7, VAR_0);
}
