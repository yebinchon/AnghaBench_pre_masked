
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned long,int ,int) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5;

 if (VAR_3 & (VAR_0 - 1)) {
  VAR_3 &= ~(VAR_0 - 1);
  FUNC_1(VAR_3, VAR_1, 1);
  VAR_3 += VAR_0;
 }

 if (VAR_4 & (VAR_0 - 1)) {
  VAR_4 &= ~(VAR_0 - 1);
  FUNC_1(VAR_4, VAR_1, 1);
 }

 for (VAR_5 = VAR_3; VAR_5 < VAR_4; VAR_5 += VAR_0)
  FUNC_1(VAR_5, VAR_2, 1);
 FUNC_0();
}
