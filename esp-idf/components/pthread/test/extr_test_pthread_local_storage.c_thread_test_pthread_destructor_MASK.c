
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_key_t ;


 int * VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void *FUNC_2(void *VAR_1)
{
    FUNC_0("Local storage thread running...\n");
    pthread_key_t VAR_2 = (pthread_key_t) VAR_1;
    VAR_0 = &VAR_2;
    FUNC_1(VAR_2, VAR_0);
    FUNC_0("Local storage thread done.\n");
    return ((void*)0);
}
