
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (struct parport*) ;
 int FUNC_1 (struct parport*,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct parport *VAR_5, unsigned int VAR_6)
{
 unsigned int VAR_7;

 VAR_6 &= VAR_0;
 VAR_7 = FUNC_0(VAR_5) & VAR_0;

 if (!(VAR_6 == VAR_2 || VAR_6 == VAR_1
       || VAR_7 == VAR_2 || VAR_7 == VAR_1)) {

  unsigned int VAR_8 = VAR_1 | VAR_4 | VAR_3;
  FUNC_1(VAR_5, VAR_8);
 }
 FUNC_1(VAR_5, VAR_6 | VAR_4 | VAR_3);
}
