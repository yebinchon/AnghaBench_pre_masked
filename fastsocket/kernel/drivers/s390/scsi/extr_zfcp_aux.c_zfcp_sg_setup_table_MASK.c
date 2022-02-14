
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct scatterlist*,int) ;
 int FUNC_2 (struct scatterlist*,void*,int ) ;
 int FUNC_3 (struct scatterlist*,int) ;

int FUNC_4(struct scatterlist *VAR_3, int VAR_4)
{
 void *VAR_5;
 int VAR_6;

 FUNC_1(VAR_3, VAR_4);
 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++, VAR_3++) {
  VAR_5 = (void *) FUNC_0(VAR_1);
  if (!VAR_5) {
   FUNC_3(VAR_3, VAR_6);
   return -VAR_0;
  }
  FUNC_2(VAR_3, VAR_5, VAR_2);
 }
 return 0;
}
