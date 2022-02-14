
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(char *VAR_7, int VAR_8)
{
 if (VAR_1)
  return;


 if (VAR_4 > 0) {
  while (VAR_8-- && VAR_3 < VAR_0 && *VAR_7) {
   VAR_2[(VAR_6 + VAR_3++) %
          VAR_0] = *VAR_7++;
  }
  FUNC_0(&VAR_5);
 }
}
