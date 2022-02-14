
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sdio_func {int num; int card; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int ,unsigned int,int ,int *) ;

void FUNC_2(struct sdio_func *VAR_0, u8 VAR_1, unsigned int VAR_2, int *VAR_3)
{
 int VAR_4;

 FUNC_0(!VAR_0);

 VAR_4 = FUNC_1(VAR_0->card, 1, VAR_0->num, VAR_2, VAR_1, ((void*)0));
 if (VAR_3)
  *VAR_3 = VAR_4;
}
