
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(void)
{
 unsigned long VAR_3;
 int VAR_4;

 FUNC_0(&VAR_2, VAR_3);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_1[VAR_4] == 0) {
   VAR_1[VAR_4] = 1;
   FUNC_1(&VAR_2, VAR_3);
   return VAR_4;
  }
 }
 FUNC_1(&VAR_2, VAR_3);
 return -1;
}
