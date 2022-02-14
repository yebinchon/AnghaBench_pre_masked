
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IniContext ;


 int FUNC_0 (int *,int *,int*,int,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int *,int) ;

__attribute__((used)) static int FUNC_4(bool *VAR_1)
{
    IniContext VAR_2;
 int VAR_3;
 bool VAR_4;

 VAR_4 = 0;
 if ((VAR_3=FUNC_0(&VAR_0,
  &VAR_2, &VAR_4, 0, ((void*)0))) != 0)
    {
        return VAR_3;
    }

 *VAR_1 = FUNC_3(((void*)0), "use_storage_id",
            &VAR_2, 0);
    FUNC_2(&VAR_2);

 if (*VAR_1)
 {
  VAR_3 = FUNC_1(
    &VAR_0);
 }

    return VAR_3;
}
