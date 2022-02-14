
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int AVBufferRef ;


 int * FUNC_0 (int *,int,int ,int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int **) ;
 int * FUNC_2 (int) ;

AVBufferRef *FUNC_3(int VAR_1)
{
    AVBufferRef *VAR_2 = ((void*)0);
    uint8_t *VAR_3 = ((void*)0);

    VAR_3 = FUNC_2(VAR_1);
    if (!VAR_3)
        return ((void*)0);

    VAR_2 = FUNC_0(VAR_3, VAR_1, VAR_0, ((void*)0), 0);
    if (!VAR_2)
        FUNC_1(&VAR_3);

    return VAR_2;
}
