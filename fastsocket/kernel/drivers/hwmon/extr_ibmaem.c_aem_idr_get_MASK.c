
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int *,int*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(int *VAR_6)
{
 int VAR_7, VAR_8;

again:
 if (FUNC_4(!FUNC_1(&VAR_4, VAR_2)))
  return -VAR_1;

 FUNC_2(&VAR_5);
 VAR_8 = FUNC_0(&VAR_4, ((void*)0), &VAR_7);
 FUNC_3(&VAR_5);

 if (FUNC_4(VAR_8 == -VAR_0))
  goto again;
 else if (FUNC_4(VAR_8))
  return VAR_8;

 *VAR_6 = VAR_7 & VAR_3;
 return 0;
}
