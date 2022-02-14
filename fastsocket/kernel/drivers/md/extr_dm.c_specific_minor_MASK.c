
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
 int VAR_7 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,int,int*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(int VAR_8)
{
 int VAR_9, VAR_10;

 if (VAR_8 >= (1 << VAR_4))
  return -VAR_1;

 VAR_9 = FUNC_2(&VAR_6, VAR_3);
 if (!VAR_9)
  return -VAR_2;

 FUNC_4(&VAR_7);

 if (FUNC_0(&VAR_6, VAR_8)) {
  VAR_9 = -VAR_0;
  goto out;
 }

 VAR_9 = FUNC_1(&VAR_6, VAR_5, VAR_8, &VAR_10);
 if (VAR_9)
  goto out;

 if (VAR_10 != VAR_8) {
  FUNC_3(&VAR_6, VAR_10);
  VAR_9 = -VAR_0;
  goto out;
 }

out:
 FUNC_5(&VAR_7);
 return VAR_9;
}
