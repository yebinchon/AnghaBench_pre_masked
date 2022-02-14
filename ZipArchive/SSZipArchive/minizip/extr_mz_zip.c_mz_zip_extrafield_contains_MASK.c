
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void**) ;
 int FUNC_1 (void**) ;
 int FUNC_2 (void*,void*,int ) ;
 int FUNC_3 (void*,int ,int *) ;

int32_t FUNC_4(const uint8_t *VAR_2, int32_t VAR_3,
    uint16_t VAR_4, uint16_t *VAR_5)
{
    void *VAR_6 = ((void*)0);
    int32_t VAR_7 = VAR_0;

    if (VAR_2 == ((void*)0) || VAR_3 == 0)
        return VAR_1;

    FUNC_0(&VAR_6);
    FUNC_2(VAR_6, (void *)VAR_2, VAR_3);

    VAR_7 = FUNC_3(VAR_6, VAR_4, VAR_5);

    FUNC_1(&VAR_6);

    return VAR_7;
}
