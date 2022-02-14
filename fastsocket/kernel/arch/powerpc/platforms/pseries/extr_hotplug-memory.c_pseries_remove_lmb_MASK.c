
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct zone*,unsigned long,unsigned int) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long,unsigned int) ;
 struct zone* FUNC_3 (int ) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long,unsigned long) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(unsigned long VAR_1, unsigned int VAR_2)
{
 unsigned long VAR_3, VAR_4;
 struct zone *VAR_5;
 int VAR_6;

 VAR_4 = VAR_1 >> VAR_0;

 if (!FUNC_5(VAR_4)) {
  FUNC_2(VAR_1, VAR_2);
  return 0;
 }

 VAR_5 = FUNC_3(FUNC_4(VAR_4));
 VAR_6 = FUNC_0(VAR_5, VAR_4, VAR_2 >> VAR_0);
 if (VAR_6)
  return VAR_6;




 FUNC_2(VAR_1, VAR_2);




 VAR_3 = (unsigned long)FUNC_1(VAR_1);
 VAR_6 = FUNC_6(VAR_3, VAR_3 + VAR_2);




 FUNC_7();

 return VAR_6;
}
