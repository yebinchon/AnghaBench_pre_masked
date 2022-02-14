
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long,unsigned long*) ;

__attribute__((used)) static void FUNC_1(unsigned long *VAR_0, unsigned long *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4 = 0;
 unsigned long VAR_5;


 for (VAR_3 = 0; VAR_3 < VAR_2 / 4; VAR_3++) {
  VAR_5 = VAR_1[VAR_3] >> 1;
  FUNC_0(VAR_5, VAR_0 + VAR_4++);
 }


 for (VAR_3 = 0; VAR_3 < VAR_2 / 4; VAR_3++) {
  VAR_5 = VAR_1[VAR_3];
  FUNC_0(VAR_5, VAR_0 + VAR_4++);
 }
}
