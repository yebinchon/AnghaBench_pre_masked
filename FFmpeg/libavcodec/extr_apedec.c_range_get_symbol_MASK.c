
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int error; } ;
typedef TYPE_1__ APEContext ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int const,int const) ;

__attribute__((used)) static inline int FUNC_2(APEContext *VAR_0,
                                   const uint16_t VAR_1[],
                                   const uint16_t VAR_2[])
{
    int VAR_3, VAR_4;

    VAR_4 = FUNC_0(VAR_0, 16);

    if(VAR_4 > 65492){
        VAR_3= VAR_4 - 65535 + 63;
        FUNC_1(VAR_0, 1, VAR_4);
        if(VAR_4 > 65535)
            VAR_0->error=1;
        return VAR_3;
    }

    for (VAR_3 = 0; VAR_1[VAR_3 + 1] <= VAR_4; VAR_3++);

    FUNC_1(VAR_0, VAR_2[VAR_3], VAR_1[VAR_3]);

    return VAR_3;
}
