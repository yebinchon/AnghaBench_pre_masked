
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long* vulp ;
typedef unsigned int* vuip ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,unsigned long) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(unsigned long VAR_4, unsigned int VAR_5)
{
 unsigned long VAR_6, VAR_7, VAR_8;

 FUNC_2(VAR_6);


 VAR_8 = *(vulp)VAR_0;
 *(vulp)VAR_0 = VAR_8;
 FUNC_3();


 *(vuip)VAR_4 = VAR_5;
 FUNC_0();

 VAR_8 = *(vulp)VAR_0;
 if (VAR_8 & VAR_3) {
  VAR_7 = ((VAR_8 >> VAR_2)
   & VAR_1);
  if (VAR_7 != 1) {
   FUNC_4("lca.c:conf_write: got stat0=%lx\n", VAR_8);
  }


  *(vulp)VAR_0 = VAR_8;
  FUNC_3();


  FUNC_5(0x7);
 }
 FUNC_1(VAR_6);
}
