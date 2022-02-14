
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int *,int*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(int VAR_7)
{
 int VAR_8;
 int VAR_9;



 FUNC_3(&VAR_2);

 FUNC_0(&VAR_5, 2);

 VAR_9 = FUNC_1(&VAR_4,
    &VAR_3,
    &VAR_8);
 if (VAR_9) {
  FUNC_4(&VAR_2);
  goto out;
 }

 FUNC_5(&VAR_6);

 FUNC_4(&VAR_2);

 if ((VAR_7 == VAR_0)
     || ((VAR_8)
  && (VAR_7 == VAR_1)))
  VAR_9 = FUNC_2();

out:
 return VAR_9;
}
