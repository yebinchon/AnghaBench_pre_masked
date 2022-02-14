
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(void)
{
 int VAR_5;

 FUNC_7(VAR_2, ((void*)0));
 FUNC_4(VAR_2);
 VAR_5 = FUNC_6(VAR_2);
 if (!VAR_5)
  return -VAR_0;

 if (FUNC_8() != 0)
  return -VAR_0;

 FUNC_3((FUNC_2(VAR_4) & ~0xc000) | 0x8000, VAR_4);
 FUNC_7(VAR_1, ((void*)0));
 FUNC_7(VAR_3, ((void*)0));
 FUNC_5(VAR_3, 1);
 FUNC_9(20);
 FUNC_0(FUNC_1(((void*)0), "usb0"));
 FUNC_3(0x0600, 0xa40501d4);

 return 0;
}
