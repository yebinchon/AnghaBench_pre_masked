
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

__attribute__((used)) static unsigned int
FUNC_6(unsigned long VAR_4)
{
 unsigned long VAR_5, VAR_6, VAR_7;
 unsigned int VAR_8;

 FUNC_2(VAR_5);


 VAR_7 = *(vulp)VAR_0;
 *(vulp)VAR_0 = VAR_7;
 FUNC_3();


 VAR_8 = *(vuip)VAR_4;
 FUNC_0();

 VAR_7 = *(vulp)VAR_0;
 if (VAR_7 & VAR_3) {
  VAR_6 = ((VAR_7 >> VAR_2)
   & VAR_1);
  if (VAR_6 != 1) {
   FUNC_4("lca.c:conf_read: got stat0=%lx\n", VAR_7);
  }


  *(vulp)VAR_0 = VAR_7;
  FUNC_3();


  FUNC_5(0x7);

  VAR_8 = 0xffffffff;
 }
 FUNC_1(VAR_5);
 return VAR_8;
}
