
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m25p {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 unsigned long VAR_2 ;
 int FUNC_1 (struct m25p*) ;
 int FUNC_2 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct m25p *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;

 VAR_4 = VAR_2 + VAR_0;

 do {
  if ((VAR_5 = FUNC_1(VAR_3)) < 0)
   break;
  else if (!(VAR_5 & VAR_1))
   return 0;

  FUNC_0();

 } while (!FUNC_2(VAR_2, VAR_4));

 return 1;
}
