
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int,int ,int ,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void)
{
 int VAR_1;

 VAR_1 = FUNC_0();
 if (VAR_1 < 0)
  goto failed;

 if (!FUNC_2(VAR_1, 0, VAR_0, 0))
  return;
failed:
 FUNC_1("oprofile: IBS APIC setup failed on cpu #%d\n",
  FUNC_3());
}
