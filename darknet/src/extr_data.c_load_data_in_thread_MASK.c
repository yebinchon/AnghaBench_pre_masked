
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct load_args {int dummy; } ;
typedef int pthread_t ;
typedef struct load_args load_args ;


 struct load_args* FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *,int ,int ,struct load_args*) ;

pthread_t FUNC_3(load_args VAR_1)
{
    pthread_t VAR_2;
    struct load_args *VAR_3 = FUNC_0(1, sizeof(struct load_args));
    *VAR_3 = VAR_1;
    if(FUNC_2(&VAR_2, 0, VAR_0, VAR_3)) FUNC_1("Thread creation failed");
    return VAR_2;
}
