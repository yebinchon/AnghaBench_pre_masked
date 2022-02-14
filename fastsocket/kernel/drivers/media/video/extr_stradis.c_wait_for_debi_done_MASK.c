
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7146 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct saa7146 *VAR_5)
{
 int VAR_6;


 for (VAR_6 = 0; VAR_6 < 100000 &&
      !(FUNC_1(VAR_0) & VAR_1); VAR_6++)
  FUNC_1(VAR_0);

 for (VAR_6 = 0; VAR_6 < 500000 &&
      (FUNC_1(VAR_2) & VAR_3); VAR_6++)
  FUNC_1(VAR_0);

 if (VAR_6 > VAR_4)
  FUNC_0("wait-for-debi-done maxwait: %d\n",
   VAR_4 = VAR_6);

 if (VAR_6 == 500000)
  return -1;

 return 0;
}
