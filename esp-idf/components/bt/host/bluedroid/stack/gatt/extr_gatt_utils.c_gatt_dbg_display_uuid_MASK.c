
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int uuid16; int* uuid128; scalar_t__ uuid32; } ;
struct TYPE_5__ {scalar_t__ len; TYPE_1__ uu; } ;
typedef TYPE_2__ tBT_UUID ;
typedef int str_buf ;


 int FUNC_0 (char*,int,char*,int) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (char*,char*,int,...) ;

void FUNC_3(tBT_UUID VAR_3)
{
    char VAR_4[50];
    int VAR_5 = 0;

    if (VAR_3.len == VAR_1) {
        FUNC_2(VAR_4, "0x%04x", VAR_3.uu.uuid16);
    } else if (VAR_3.len == VAR_2) {
        FUNC_2(VAR_4, "0x%08x", (unsigned int)VAR_3.uu.uuid32);
    } else if (VAR_3.len == VAR_0) {
        VAR_5 += FUNC_2(&VAR_4[VAR_5], "0x%02x%02x%02x%02x%02x%02x%02x%02x",
                     VAR_3.uu.uuid128[15], VAR_3.uu.uuid128[14],
                     VAR_3.uu.uuid128[13], VAR_3.uu.uuid128[12],
                     VAR_3.uu.uuid128[11], VAR_3.uu.uuid128[10],
                     VAR_3.uu.uuid128[9], VAR_3.uu.uuid128[8]);
        FUNC_2(&VAR_4[VAR_5], "%02x%02x%02x%02x%02x%02x%02x%02x",
                VAR_3.uu.uuid128[7], VAR_3.uu.uuid128[6],
                VAR_3.uu.uuid128[5], VAR_3.uu.uuid128[4],
                VAR_3.uu.uuid128[3], VAR_3.uu.uuid128[2],
                VAR_3.uu.uuid128[1], VAR_3.uu.uuid128[0]);
    } else {
        FUNC_0(VAR_4, sizeof(VAR_4), "Unknown UUID 0", 15);
    }

    FUNC_1 ("UUID=[%s]", VAR_4);

}
