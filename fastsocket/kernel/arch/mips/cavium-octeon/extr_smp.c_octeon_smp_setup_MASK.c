
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(void)
{
 const int VAR_4 = FUNC_2();
 int VAR_5;
 int VAR_6;

 int VAR_7 = FUNC_3();

 FUNC_1(VAR_2);
 VAR_1[VAR_4] = 0;
 VAR_0[0] = VAR_4;
 FUNC_0(0, VAR_2);

 VAR_5 = 1;
 for (VAR_6 = 0; VAR_6 < 16; VAR_6++) {
  if ((VAR_6 != VAR_4) && (VAR_7 & (1 << VAR_6))) {
   FUNC_0(VAR_5, VAR_2);
   VAR_1[VAR_6] = VAR_5;
   VAR_0[VAR_5] = VAR_6;
   VAR_5++;
  }
 }
 VAR_3 = VAR_2;

 FUNC_4();
}
