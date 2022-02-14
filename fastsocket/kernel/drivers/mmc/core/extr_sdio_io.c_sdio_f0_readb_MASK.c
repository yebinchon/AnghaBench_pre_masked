
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {int card; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,unsigned int,int ,unsigned char*) ;

unsigned char FUNC_2(struct sdio_func *VAR_0, unsigned int VAR_1,
 int *VAR_2)
{
 int VAR_3;
 unsigned char VAR_4;

 FUNC_0(!VAR_0);

 if (VAR_2)
  *VAR_2 = 0;

 VAR_3 = FUNC_1(VAR_0->card, 0, 0, VAR_1, 0, &VAR_4);
 if (VAR_3) {
  if (VAR_2)
   *VAR_2 = VAR_3;
  return 0xFF;
 }

 return VAR_4;
}
