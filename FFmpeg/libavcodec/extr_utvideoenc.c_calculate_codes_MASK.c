
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int len; int code; } ;
typedef TYPE_1__ HuffEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int,int,int ) ;

__attribute__((used)) static void FUNC_1(HuffEntry *VAR_2)
{
    int VAR_3, VAR_4;
    uint32_t VAR_5;

    FUNC_0(VAR_2, 256, sizeof(*VAR_2), VAR_0);

    VAR_3 = 255;
    while (VAR_2[VAR_3].len == 255 && VAR_3)
        VAR_3--;

    VAR_5 = 1;
    for (VAR_4 = VAR_3; VAR_4 >= 0; VAR_4--) {
        VAR_2[VAR_4].code = VAR_5 >> (32 - VAR_2[VAR_4].len);
        VAR_5 += 0x80000000u >> (VAR_2[VAR_4].len - 1);
    }

    FUNC_0(VAR_2, 256, sizeof(*VAR_2), VAR_1);
}
