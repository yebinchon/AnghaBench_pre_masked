
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mz_zip_file ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (void**) ;
 int FUNC_1 (void**) ;
 scalar_t__ FUNC_2 (void*,int *,int ) ;
 int VAR_3 ;
 int FUNC_3 (void*,void*,scalar_t__) ;
 scalar_t__ FUNC_4 (void*,void*,int ,int *) ;
 scalar_t__ FUNC_5 (void*) ;

int32_t FUNC_6(void *VAR_4, void *VAR_5, int32_t VAR_6, mz_zip_file *VAR_7)
{
    void *VAR_8 = ((void*)0);
    int32_t VAR_9 = VAR_0;

    if (FUNC_5(VAR_4) != VAR_0)
        return VAR_2;
    if (VAR_5 == ((void*)0))
        return VAR_2;


    FUNC_0(&VAR_8);
    FUNC_3(VAR_8, VAR_5, VAR_6);

    VAR_9 = FUNC_2(VAR_8, ((void*)0), VAR_1);
    if (VAR_9 == VAR_0)
        VAR_9 = FUNC_4(VAR_4, VAR_8, VAR_3, VAR_7);

    FUNC_1(&VAR_8);
    return VAR_9;
}
