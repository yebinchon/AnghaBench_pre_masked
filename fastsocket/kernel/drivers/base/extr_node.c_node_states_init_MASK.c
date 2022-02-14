
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int FUNC_1(void)
{
 int VAR_3;
 int VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  int VAR_5;
  VAR_5 = FUNC_0(&VAR_1, VAR_2[VAR_3]);
  if (!VAR_4)
   VAR_4 = VAR_5;
 }
 return VAR_4;
}
