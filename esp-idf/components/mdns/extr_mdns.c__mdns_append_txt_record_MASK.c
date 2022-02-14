
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct TYPE_5__ {char* key; char* value; struct TYPE_5__* next; } ;
typedef TYPE_1__ mdns_txt_linked_item_t ;
struct TYPE_6__ {char* service; char* proto; TYPE_1__* txt; } ;
typedef TYPE_2__ mdns_service_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__*,int*,char const**,int) ;
 scalar_t__ FUNC_1 (scalar_t__*,int*,char*) ;
 scalar_t__ FUNC_2 (scalar_t__*,int*,int ,int,int ) ;
 char* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (scalar_t__*,int,int) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (char*,char*,char*,char*) ;
 scalar_t__ FUNC_8 (char*) ;

__attribute__((used)) static uint16_t FUNC_9(uint8_t * VAR_4, uint16_t * VAR_5, mdns_service_t * VAR_6, bool VAR_7, bool VAR_8)
{
    const char * VAR_9[4];
    uint16_t VAR_10 = 0;
    uint8_t VAR_11;

    if (VAR_6 == ((void*)0)) {
        return 0;
    }

    VAR_9[0] = FUNC_3(VAR_6);
    VAR_9[1] = VAR_6->service;
    VAR_9[2] = VAR_6->proto;
    VAR_9[3] = VAR_3;

    if (!VAR_9[0]) {
        return 0;
    }

    VAR_11 = FUNC_0(VAR_4, VAR_5, VAR_9, 4);
    if (!VAR_11) {
        return 0;
    }
    VAR_10 += VAR_11;

    VAR_11 = FUNC_2(VAR_4, VAR_5, VAR_1, VAR_7, VAR_8?0:VAR_2);
    if (!VAR_11) {
        return 0;
    }
    VAR_10 += VAR_11;

    uint16_t VAR_12 = *VAR_5 - 2;
    uint16_t VAR_13 = 0;

    char * VAR_14;
    mdns_txt_linked_item_t * VAR_15 = VAR_6->txt;
    while (VAR_15) {
        VAR_14 = (char *)FUNC_6(2 + FUNC_8(VAR_15->key) + FUNC_8(VAR_15->value));
        if (VAR_14) {
            FUNC_7(VAR_14, "%s=%s", VAR_15->key, VAR_15->value);
            uint8_t VAR_16 = FUNC_1(VAR_4, VAR_5, VAR_14);
            FUNC_5(VAR_14);
            if (!VAR_16) {
                return 0;
            }
            VAR_13 += VAR_16;
        } else {
            VAR_0;

        }
        VAR_15 = VAR_15->next;
    }
    if (!VAR_13) {
        VAR_13 = 1;
        VAR_4[*VAR_5] = 0;
        *VAR_5 = *VAR_5 + 1;
    }
    FUNC_4(VAR_4, VAR_12, VAR_13);
    VAR_10 += VAR_13;
    return VAR_10;
}
