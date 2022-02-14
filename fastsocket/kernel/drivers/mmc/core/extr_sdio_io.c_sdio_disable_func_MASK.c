
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {int num; int card; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int,int ,int ,unsigned char,unsigned char*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct sdio_func*) ;

int FUNC_4(struct sdio_func *VAR_2)
{
 int VAR_3;
 unsigned char VAR_4;

 FUNC_0(!VAR_2);
 FUNC_0(!VAR_2->card);

 FUNC_2("SDIO: Disabling device %s...\n", FUNC_3(VAR_2));

 VAR_3 = FUNC_1(VAR_2->card, 0, 0, VAR_1, 0, &VAR_4);
 if (VAR_3)
  goto err;

 VAR_4 &= ~(1 << VAR_2->num);

 VAR_3 = FUNC_1(VAR_2->card, 1, 0, VAR_1, VAR_4, ((void*)0));
 if (VAR_3)
  goto err;

 FUNC_2("SDIO: Disabled device %s\n", FUNC_3(VAR_2));

 return 0;

err:
 FUNC_2("SDIO: Failed to disable device %s\n", FUNC_3(VAR_2));
 return -VAR_0;
}
