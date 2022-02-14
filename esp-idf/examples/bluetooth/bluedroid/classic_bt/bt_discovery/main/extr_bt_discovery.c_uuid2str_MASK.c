
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int uuid16; int uuid32; int* uuid128; } ;
struct TYPE_5__ {int len; TYPE_1__ uuid; } ;
typedef TYPE_2__ esp_bt_uuid_t ;


 int FUNC_0 (char*,char*,int,...) ;

__attribute__((used)) static char *FUNC_1(esp_bt_uuid_t *VAR_0, char *VAR_1, size_t VAR_2)
{
    if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0)) {
        return ((void*)0);
    }

    if (VAR_0->len == 2 && VAR_2 >= 5) {
        FUNC_0(VAR_1, "%04x", VAR_0->uuid.uuid16);
    } else if (VAR_0->len == 4 && VAR_2 >= 9) {
        FUNC_0(VAR_1, "%08x", VAR_0->uuid.uuid32);
    } else if (VAR_0->len == 16 && VAR_2 >= 37) {
        uint8_t *VAR_3 = VAR_0->uuid.uuid128;
        FUNC_0(VAR_1, "%02x%02x%02x%02x-%02x%02x-%02x%02x-%02x%02x-%02x%02x%02x%02x%02x%02x",
                VAR_3[15], VAR_3[14], VAR_3[13], VAR_3[12], VAR_3[11], VAR_3[10], VAR_3[9], VAR_3[8],
                VAR_3[7], VAR_3[6], VAR_3[5], VAR_3[4], VAR_3[3], VAR_3[2], VAR_3[1], VAR_3[0]);
    } else {
        return ((void*)0);
    }

    return VAR_1;
}
