
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int* address; } ;
typedef TYPE_1__ bt_bdaddr_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int const,int const,int const,int const,int const,int const) ;

const char *FUNC_2(const bt_bdaddr_t *VAR_0, char *VAR_1, size_t VAR_2)
{
    FUNC_0(VAR_0 != ((void*)0));
    FUNC_0(VAR_1 != ((void*)0));

    if (VAR_2 < 18) {
        return ((void*)0);
    }

    const uint8_t *VAR_3 = VAR_0->address;
    FUNC_1(VAR_1, "%02x:%02x:%02x:%02x:%02x:%02x",
            VAR_3[0], VAR_3[1], VAR_3[2],
            VAR_3[3], VAR_3[4], VAR_3[5]);
    return VAR_1;
}
