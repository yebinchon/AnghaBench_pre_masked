
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;
typedef int pthread_attr_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (char*) ;
 int VAR_6 ;

int FUNC_7()
{
    FUNC_4(&VAR_4);

    if (VAR_2 > VAR_3 && VAR_5 == 0) {
        VAR_5 = 1;

        FUNC_6("===============  open new note  ==================");
        pthread_t VAR_7;
        pthread_attr_t VAR_8;
        FUNC_1(&VAR_8);
        FUNC_2(&VAR_8, VAR_0);

        FUNC_3(&VAR_7, &VAR_8, VAR_6, ((void*)0));
        FUNC_0(&VAR_8);
    }

    FUNC_5(&VAR_4);

    return VAR_1;
}
