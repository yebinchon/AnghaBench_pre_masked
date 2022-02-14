
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * VAR_0 ;

__attribute__((used)) static bool FUNC_2(void)
{
 bool VAR_1 = 1;
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); ++VAR_2)
  VAR_1 = VAR_1 && FUNC_1(&VAR_0[VAR_2]);

 return VAR_1;
}
