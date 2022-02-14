
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_3__ {char* service; char* proto; } ;
typedef TYPE_1__ mdns_service_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__*,scalar_t__*,char const**,int) ;
 scalar_t__ FUNC_1 (scalar_t__*,scalar_t__*,int ,int,int ) ;
 int FUNC_2 (scalar_t__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static uint16_t FUNC_3(uint8_t * VAR_3, uint16_t * VAR_4, mdns_service_t * VAR_5, bool VAR_6, bool VAR_7)
{
    const char * VAR_8[3];
    const char * VAR_9[4];
    uint16_t VAR_10 = 0;
    uint8_t VAR_11;

    if (VAR_5 == ((void*)0)) {
        return 0;
    }

    VAR_9[0] = (char*)"_services";
    VAR_9[1] = (char*)"_dns-sd";
    VAR_9[2] = (char*)"_udp";
    VAR_9[3] = VAR_2;

    VAR_8[0] = VAR_5->service;
    VAR_8[1] = VAR_5->proto;
    VAR_8[2] = VAR_2;

    VAR_11 = FUNC_0(VAR_3, VAR_4, VAR_9, 4);

    VAR_10 += VAR_11;

    VAR_11 = FUNC_1(VAR_3, VAR_4, VAR_0, VAR_6, VAR_1);
    if (!VAR_11) {
        return 0;
    }
    VAR_10 += VAR_11;

    uint16_t VAR_12 = *VAR_4 - 2;
    VAR_11 = FUNC_0(VAR_3, VAR_4, VAR_8, 3);
    if (!VAR_11) {
        return 0;
    }
    FUNC_2(VAR_3, VAR_12, VAR_11);
    VAR_10 += VAR_11;
    return VAR_10;
}
