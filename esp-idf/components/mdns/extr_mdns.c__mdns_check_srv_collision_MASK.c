
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {int priority; int weight; int port; } ;
typedef TYPE_1__ mdns_service_t ;
struct TYPE_5__ {char const* hostname; } ;


 char const* VAR_0 ;
 int FUNC_0 (int*,int*,int) ;
 TYPE_2__* VAR_1 ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (int*,int*,size_t) ;
 int FUNC_3 (int*,char const*,size_t) ;
 size_t FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(mdns_service_t * VAR_2, uint16_t VAR_3, uint16_t VAR_4, uint16_t VAR_5, const char * VAR_6, const char * VAR_7)
{
    if (FUNC_1(VAR_1->hostname)) {
        return 0;
    }

    size_t VAR_8 = FUNC_4(VAR_1->hostname);
    size_t VAR_9 = 14 + VAR_8;

    size_t VAR_10 = FUNC_4(VAR_6);
    size_t VAR_11 = FUNC_4(VAR_7);
    size_t VAR_12 = 9 + VAR_10 + VAR_11;

    if (VAR_12 > VAR_9) {
        return 1;
    } else if (VAR_12 < VAR_9) {
        return -1;
    }

    uint16_t VAR_13 = 0;
    uint8_t VAR_14[VAR_9];
    FUNC_0(VAR_14, &VAR_13, VAR_2->priority);
    FUNC_0(VAR_14, &VAR_13, VAR_2->weight);
    FUNC_0(VAR_14, &VAR_13, VAR_2->port);
    VAR_14[VAR_13++] = VAR_8;
    FUNC_3(VAR_14 + VAR_13, VAR_1->hostname, VAR_8);
    VAR_13 += VAR_8;
    VAR_14[VAR_13++] = 5;
    FUNC_3(VAR_14 + VAR_13, VAR_0, 5);
    VAR_13 += 5;
    VAR_14[VAR_13++] = 0;

    uint16_t VAR_15 = 0;
    uint8_t VAR_16[VAR_12];
    FUNC_0(VAR_16, &VAR_15, VAR_3);
    FUNC_0(VAR_16, &VAR_15, VAR_4);
    FUNC_0(VAR_16, &VAR_15, VAR_5);
    VAR_16[VAR_15++] = VAR_10;
    FUNC_3(VAR_16 + VAR_15, VAR_6, VAR_10);
    VAR_15 += VAR_10;
    VAR_16[VAR_15++] = VAR_11;
    FUNC_3(VAR_16 + VAR_15, VAR_7, VAR_11);
    VAR_15 += VAR_11;
    VAR_16[VAR_15++] = 0;

    int VAR_17 = FUNC_2(VAR_14, VAR_16, VAR_9);
    if (VAR_17 > 0) {
        return -1;
    } else if (VAR_17 < 0) {
        return 1;
    }
    return 0;
}
