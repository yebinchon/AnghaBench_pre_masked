
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_5__ {char* service; char* proto; int port; int weight; int priority; } ;
typedef TYPE_1__ mdns_service_t ;
struct TYPE_6__ {char* hostname; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int*,int*,char const**,int) ;
 int FUNC_1 (int*,int*,int ,int,int ) ;
 scalar_t__ FUNC_2 (int*,int*,int ) ;
 char* FUNC_3 (TYPE_1__*) ;
 TYPE_2__* VAR_3 ;
 int FUNC_4 (int*,int,int) ;
 scalar_t__ FUNC_5 (char const*) ;

__attribute__((used)) static uint16_t FUNC_6(uint8_t * VAR_4, uint16_t * VAR_5, mdns_service_t * VAR_6, bool VAR_7, bool VAR_8)
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
    VAR_9[3] = VAR_2;

    if (!VAR_9[0]) {
        return 0;
    }

    VAR_11 = FUNC_0(VAR_4, VAR_5, VAR_9, 4);
    if (!VAR_11) {
        return 0;
    }
    VAR_10 += VAR_11;

    VAR_11 = FUNC_1(VAR_4, VAR_5, VAR_0, VAR_7, VAR_8?0:VAR_1);
    if (!VAR_11) {
        return 0;
    }
    VAR_10 += VAR_11;

    uint16_t VAR_12 = *VAR_5 - 2;

    VAR_11 = 0;
    VAR_11 += FUNC_2(VAR_4, VAR_5, VAR_6->priority);
    VAR_11 += FUNC_2(VAR_4, VAR_5, VAR_6->weight);
    VAR_11 += FUNC_2(VAR_4, VAR_5, VAR_6->port);
    if (VAR_11 != 6) {
        return 0;
    }

    VAR_9[0] = VAR_3->hostname;
    VAR_9[1] = VAR_2;

    if (FUNC_5(VAR_9[0])) {
        return 0;
    }

    VAR_11 = FUNC_0(VAR_4, VAR_5, VAR_9, 2);
    if (!VAR_11) {
        return 0;
    }
    FUNC_4(VAR_4, VAR_12, VAR_11 + 6);

    VAR_10 += VAR_11 + 6;
    return VAR_10;
}
