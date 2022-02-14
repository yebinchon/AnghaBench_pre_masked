
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arcfb_par {int dummy; } ;


 int FUNC_0 (struct arcfb_par*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_4(struct arcfb_par *VAR_0, unsigned int VAR_1,
   unsigned int VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5, VAR_6, VAR_7;

 VAR_5 = VAR_4;
 VAR_6 = FUNC_2(VAR_3);
 VAR_7 = FUNC_3(VAR_6 + VAR_5 - 1, FUNC_1(VAR_6));

 while (VAR_5 > 0) {
  VAR_5 -= ((VAR_7 - VAR_6) + 1 );
  FUNC_0(VAR_0, VAR_6, VAR_7, VAR_1, VAR_2);
  VAR_6 = VAR_7 + 1;
  VAR_7 = FUNC_3(VAR_6 + VAR_5 - 1, FUNC_1(VAR_6));
 }
}
