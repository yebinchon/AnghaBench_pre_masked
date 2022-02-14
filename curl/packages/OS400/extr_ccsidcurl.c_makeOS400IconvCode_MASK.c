
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (char*,char*,unsigned int) ;
 int FUNC_1 (char*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(char VAR_3[VAR_1], unsigned int VAR_4)

{
  VAR_4 &= 0xFFFF;

  if(VAR_4 == VAR_2)
    VAR_4 = VAR_0;

  FUNC_1(VAR_3, 0, VAR_1);
  FUNC_0(VAR_3, "IBMCCSID%05u0000000", VAR_4);
}
