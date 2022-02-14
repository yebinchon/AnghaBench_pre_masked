
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UWORD ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*,int) ;
 scalar_t__ VAR_1 ;

int FUNC_3(UWORD VAR_2)
{
 int VAR_3 = VAR_0;
 if (VAR_1 && VAR_2 == 0xd114) {

  VAR_3 = (int)FUNC_1();
  FUNC_0(FUNC_2("d114: disk read byte:%2x\n",VAR_3));
 }
 return VAR_3;
}
