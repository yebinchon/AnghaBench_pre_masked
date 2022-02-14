
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int *,int) ;

__attribute__((used)) static void FUNC_4(unsigned int VAR_6)
{
 if (VAR_6 < 1)
  return;

 if (!VAR_1)
  FUNC_0("SMTC Kernel requires Vectored Interrupt support");

 FUNC_2(VAR_0, VAR_4);

 FUNC_3(VAR_2, &VAR_5, (0x100 << VAR_0));

 FUNC_1(VAR_2, VAR_3);
}
