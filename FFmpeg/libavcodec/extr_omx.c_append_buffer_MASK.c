
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_mutex_t ;
typedef int pthread_cond_t ;
typedef int OMX_BUFFERHEADERTYPE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(pthread_mutex_t *VAR_0, pthread_cond_t *VAR_1,
                          int* VAR_2, OMX_BUFFERHEADERTYPE **VAR_3,
                          OMX_BUFFERHEADERTYPE *VAR_4)
{
    FUNC_1(VAR_0);
    VAR_3[(*VAR_2)++] = VAR_4;
    FUNC_0(VAR_1);
    FUNC_2(VAR_0);
}
