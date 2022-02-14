
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;


 size_t FUNC_0 (size_t,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (size_t) ;
 void* FUNC_4 (size_t) ;
 int FUNC_5 (void*,void**,int) ;

__attribute__((used)) static inline int FUNC_6(void *VAR_0, unsigned int *VAR_1, size_t VAR_2, int VAR_3)
{
    void *VAR_4;

    FUNC_5(&VAR_4, VAR_0, sizeof(VAR_4));
    if (VAR_2 <= *VAR_1) {
        FUNC_1(VAR_4 || !VAR_2);
        return 0;
    }
    VAR_2 = FUNC_0(VAR_2 + VAR_2 / 16 + 32, VAR_2);
    FUNC_2(VAR_0);
    VAR_4 = VAR_3 ? FUNC_4(VAR_2) : FUNC_3(VAR_2);
    FUNC_5(VAR_0, &VAR_4, sizeof(VAR_4));
    if (!VAR_4)
        VAR_2 = 0;
    *VAR_1 = VAR_2;
    return 1;
}
