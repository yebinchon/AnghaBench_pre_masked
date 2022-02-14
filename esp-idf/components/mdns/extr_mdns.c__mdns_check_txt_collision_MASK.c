
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {char* key; char* value; struct TYPE_4__* next; } ;
typedef TYPE_1__ mdns_txt_linked_item_t ;
struct TYPE_5__ {TYPE_1__* txt; } ;
typedef TYPE_2__ mdns_service_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int const*,size_t) ;
 int FUNC_4 (char*,char*,char*,char*) ;
 scalar_t__ FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(mdns_service_t * VAR_1, const uint8_t * VAR_2, size_t VAR_3)
{
    size_t VAR_4 = 1;
    if (VAR_3 == 1 && VAR_1->txt) {
        return -1;
    } else if (VAR_3 > 1 && !VAR_1->txt) {
        return 1;
    } else if (VAR_3 == 1 && !VAR_1->txt) {
        return 0;
    }

    mdns_txt_linked_item_t * VAR_5 = VAR_1->txt;
    while (VAR_5) {
        VAR_4 += 2 + FUNC_5(VAR_1->txt->key) + FUNC_5(VAR_1->txt->value);
        VAR_5 = VAR_5->next;
    }

    if (VAR_3 > VAR_4) {
        return 1;
    } else if (VAR_3 < VAR_4) {
        return -1;
    }

    uint8_t VAR_6[VAR_3];
    uint16_t VAR_7 = 0;
    char * VAR_8;

    VAR_5 = VAR_1->txt;
    while (VAR_5) {
        VAR_8 = (char *)FUNC_2(2 + FUNC_5(VAR_5->key) + FUNC_5(VAR_5->value));
        if (VAR_8) {
            FUNC_4(VAR_8, "%s=%s", VAR_5->key, VAR_5->value);
            FUNC_0(VAR_6, &VAR_7, VAR_8);
            FUNC_1(VAR_8);
        } else {
            VAR_0;

        }
        VAR_5 = VAR_5->next;
    }

    int VAR_9 = FUNC_3(VAR_6, VAR_2, VAR_3);
    if (VAR_9 > 0) {
        return -1;
    } else if (VAR_9 < 0) {
        return 1;
    }
    return 0;
}
