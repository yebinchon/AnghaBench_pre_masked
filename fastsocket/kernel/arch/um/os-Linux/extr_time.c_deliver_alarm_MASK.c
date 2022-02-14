
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 unsigned long long VAR_3 ;
 unsigned long long FUNC_1 () ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2(void)
{
 unsigned long long VAR_5 = FUNC_1();
 int VAR_6 = VAR_2 / VAR_1;


 if ((VAR_3 != 0) && (VAR_5 < VAR_3))
  VAR_5 = VAR_3;

 if (VAR_3 == 0)
  VAR_3 = VAR_5 - VAR_6;

 VAR_4 += VAR_5 - VAR_3;

 while (VAR_4 >= VAR_6) {
  FUNC_0(VAR_0, ((void*)0));
  VAR_4 -= VAR_6;
 }

 VAR_3 = VAR_5;
}
