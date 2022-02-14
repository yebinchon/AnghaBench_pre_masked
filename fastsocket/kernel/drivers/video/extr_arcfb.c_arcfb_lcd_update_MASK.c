
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arcfb_par {int dummy; } ;


 int FUNC_0 (struct arcfb_par*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_5(struct arcfb_par *VAR_0, unsigned int VAR_1,
   unsigned int VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5, VAR_6, VAR_7, VAR_8;


 VAR_8 = FUNC_2(VAR_2);
 VAR_4 += VAR_2 - VAR_8;
 VAR_4 = FUNC_3(VAR_4);

 VAR_7 = VAR_3;
 VAR_5 = VAR_1;
 VAR_6 = FUNC_4(VAR_5 + VAR_3 - 1, FUNC_1(VAR_5));

 while (VAR_7 > 0) {
  FUNC_0(VAR_0, VAR_5, VAR_6, VAR_8, VAR_4);
  VAR_7 -= ((VAR_6 - VAR_5) + 1);
  VAR_5 = VAR_6 + 1;
  VAR_6 = FUNC_4(VAR_5 + VAR_7 - 1, FUNC_1(VAR_5));
 }
}
