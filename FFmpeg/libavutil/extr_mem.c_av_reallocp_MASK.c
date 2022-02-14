
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (void*,size_t) ;
 int FUNC_3 (void*,void**,int) ;

int FUNC_4(void *VAR_1, size_t VAR_2)
{
    void *VAR_3;

    if (!VAR_2) {
        FUNC_1(VAR_1);
        return 0;
    }

    FUNC_3(&VAR_3, VAR_1, sizeof(VAR_3));
    VAR_3 = FUNC_2(VAR_3, VAR_2);

    if (!VAR_3) {
        FUNC_1(VAR_1);
        return FUNC_0(VAR_0);
    }

    FUNC_3(VAR_1, &VAR_3, sizeof(VAR_3));
    return 0;
}
