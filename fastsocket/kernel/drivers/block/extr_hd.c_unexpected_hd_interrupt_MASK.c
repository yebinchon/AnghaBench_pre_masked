
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,unsigned int) ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void)
{
 unsigned int VAR_6 = FUNC_1(VAR_4);

 if (VAR_6 & (VAR_0|VAR_1|VAR_2|VAR_3)) {
  FUNC_0("unexpected interrupt", VAR_6);
  VAR_5;
 }
}
