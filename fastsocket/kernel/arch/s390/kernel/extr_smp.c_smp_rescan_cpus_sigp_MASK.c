
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cpumask_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int *) ;
 int VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;

__attribute__((used)) static int FUNC_5(cpumask_t VAR_8)
{
 int VAR_9, VAR_10;

 VAR_10 = FUNC_3(&VAR_8);
 if (VAR_10 >= VAR_5)
  return 0;
 for (VAR_9 = 0; VAR_9 <= VAR_1; VAR_9++) {
  if (FUNC_0(VAR_9))
   continue;
  VAR_3[VAR_10] = VAR_9;
  VAR_6[VAR_10] = VAR_2;
  if (!FUNC_2(VAR_10))
   continue;
  FUNC_1(VAR_10, VAR_4);
  VAR_7[VAR_10] = VAR_0;
  VAR_10 = FUNC_4(VAR_10, &VAR_8);
  if (VAR_10 >= VAR_5)
   break;
 }
 return 0;
}
