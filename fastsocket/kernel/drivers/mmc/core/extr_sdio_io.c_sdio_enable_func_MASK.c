
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {int num; int card; int enable_timeout; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_1 (int ,int,int ,int ,unsigned char,unsigned char*) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (struct sdio_func*) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;

int FUNC_6(struct sdio_func *VAR_4)
{
 int VAR_5;
 unsigned char VAR_6;
 unsigned long VAR_7;

 FUNC_0(!VAR_4);
 FUNC_0(!VAR_4->card);

 FUNC_3("SDIO: Enabling device %s...\n", FUNC_4(VAR_4));

 VAR_5 = FUNC_1(VAR_4->card, 0, 0, VAR_1, 0, &VAR_6);
 if (VAR_5)
  goto err;

 VAR_6 |= 1 << VAR_4->num;

 VAR_5 = FUNC_1(VAR_4->card, 1, 0, VAR_1, VAR_6, ((void*)0));
 if (VAR_5)
  goto err;

 VAR_7 = VAR_3 + FUNC_2(VAR_4->enable_timeout);

 while (1) {
  VAR_5 = FUNC_1(VAR_4->card, 0, 0, VAR_2, 0, &VAR_6);
  if (VAR_5)
   goto err;
  if (VAR_6 & (1 << VAR_4->num))
   break;
  VAR_5 = -VAR_0;
  if (FUNC_5(VAR_3, VAR_7))
   goto err;
 }

 FUNC_3("SDIO: Enabled device %s\n", FUNC_4(VAR_4));

 return 0;

err:
 FUNC_3("SDIO: Failed to enable device %s\n", FUNC_4(VAR_4));
 return VAR_5;
}
