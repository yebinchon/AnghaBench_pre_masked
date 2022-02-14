
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_mutex_t ;
typedef int pthread_cond_t ;
typedef int OMX_BUFFERHEADERTYPE ;


 int FUNC_0 (int **,int **,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static OMX_BUFFERHEADERTYPE *FUNC_4(pthread_mutex_t *VAR_0, pthread_cond_t *VAR_1,
                                        int* VAR_2, OMX_BUFFERHEADERTYPE **VAR_3,
                                        int VAR_4)
{
    OMX_BUFFERHEADERTYPE *VAR_5;
    FUNC_2(VAR_0);
    if (VAR_4) {
        while (!*VAR_2)
           FUNC_1(VAR_1, VAR_0);
    }
    if (*VAR_2 > 0) {
        VAR_5 = VAR_3[0];
        (*VAR_2)--;
        FUNC_0(&VAR_3[0], &VAR_3[1], (*VAR_2) * sizeof(OMX_BUFFERHEADERTYPE*));
    } else {
        VAR_5 = ((void*)0);
    }
    FUNC_3(VAR_0);
    return VAR_5;
}
