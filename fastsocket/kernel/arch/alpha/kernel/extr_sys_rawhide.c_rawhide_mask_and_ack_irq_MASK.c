
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int* vuip ;


 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned int* VAR_0 ;
 int FUNC_2 (unsigned int) ;
 unsigned int* VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (unsigned int,unsigned int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(unsigned int VAR_3)
{
 unsigned int VAR_4, VAR_5, VAR_6;

 VAR_3 -= 16;
 VAR_6 = VAR_3 / 24;
 if (!FUNC_2(VAR_6))
  return;

 VAR_3 -= VAR_6 * 24;
 VAR_5 = 1 << VAR_3;
 VAR_4 = ~VAR_5 | VAR_1[VAR_6];

 FUNC_4(&VAR_2);

 VAR_4 &= VAR_0[VAR_6];
 VAR_0[VAR_6] = VAR_4;
 FUNC_3(VAR_6, VAR_4);


 *(vuip)FUNC_1(FUNC_0(VAR_6)) = VAR_5;

 FUNC_5(&VAR_2);
}
