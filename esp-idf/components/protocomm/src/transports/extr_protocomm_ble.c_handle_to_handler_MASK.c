
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {int g_nu_lookup_count; TYPE_1__* g_nu_lookup; } ;
struct TYPE_3__ {char const* name; int const* uuid128; } ;


 TYPE_2__* VAR_0 ;
 int * FUNC_0 (int ) ;
 scalar_t__* FUNC_1 (int const*) ;

__attribute__((used)) static const char *FUNC_2(uint16_t VAR_1)
{
    const uint8_t *VAR_2 = FUNC_0(VAR_1);
    if (!VAR_2) {
        return ((void*)0);
    }
    for (int VAR_3 = 0; VAR_3 < VAR_0->g_nu_lookup_count; VAR_3++) {
        if (*FUNC_1(VAR_0->g_nu_lookup[VAR_3].uuid128) == *FUNC_1(VAR_2)) {
            return VAR_0->g_nu_lookup[VAR_3].name;
        }
    }
    return ((void*)0);
}
