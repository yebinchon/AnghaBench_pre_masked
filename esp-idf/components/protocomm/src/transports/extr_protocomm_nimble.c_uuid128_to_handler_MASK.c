
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_4__ {int g_nu_lookup_count; TYPE_1__* g_nu_lookup; } ;
struct TYPE_3__ {scalar_t__ uuid; char const* name; } ;


 int FUNC_0 (int ,char*,int ,...) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static const char *FUNC_1(uint8_t *VAR_2)
{

    uint8_t *VAR_3 = VAR_2 + 12;
    for (int VAR_4 = 0; VAR_4 < VAR_1->g_nu_lookup_count; VAR_4++) {
        if (VAR_1->g_nu_lookup[VAR_4].uuid == *(uint16_t *)VAR_3 ) {
            FUNC_0(VAR_0, "UUID (0x%x) matched with proto-name = %s", *VAR_3, VAR_1->g_nu_lookup[VAR_4].name);
            return VAR_1->g_nu_lookup[VAR_4].name;
        } else {
            FUNC_0(VAR_0, "UUID did not match... %x", *VAR_3);
        }
    }
    return ((void*)0);
}
