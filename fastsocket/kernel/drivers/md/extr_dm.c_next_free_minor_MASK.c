
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
 int VAR_6 ;
 int FUNC_0 (int *,int ,int*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(int *VAR_7)
{
 int VAR_8, VAR_9;

 VAR_8 = FUNC_1(&VAR_5, VAR_2);
 if (!VAR_8)
  return -VAR_0;

 FUNC_3(&VAR_6);

 VAR_8 = FUNC_0(&VAR_5, VAR_4, &VAR_9);
 if (VAR_8)
  goto out;

 if (VAR_9 >= (1 << VAR_3)) {
  FUNC_2(&VAR_5, VAR_9);
  VAR_8 = -VAR_1;
  goto out;
 }

 *VAR_7 = VAR_9;

out:
 FUNC_4(&VAR_6);
 return VAR_8;
}
