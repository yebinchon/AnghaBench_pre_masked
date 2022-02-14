
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_3__ {char* host; char* service; char* proto; char* domain; int type; scalar_t__ unicast; } ;
typedef TYPE_1__ mdns_out_question_t ;


 scalar_t__ FUNC_0 (scalar_t__*,scalar_t__*,char const**,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__*,scalar_t__*,int) ;

__attribute__((used)) static uint16_t FUNC_2(uint8_t * VAR_0, uint16_t * VAR_1, mdns_out_question_t * VAR_2)
{
    const char * VAR_3[4];
    uint8_t VAR_4 = 0;
    uint8_t VAR_5;
    if (VAR_2->host) {
        VAR_3[VAR_4++] = VAR_2->host;
    }
    if (VAR_2->service) {
        VAR_3[VAR_4++] = VAR_2->service;
    }
    if (VAR_2->proto) {
        VAR_3[VAR_4++] = VAR_2->proto;
    }
    if (VAR_2->domain) {
        VAR_3[VAR_4++] = VAR_2->domain;
    }

    VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_3, VAR_4);
    if (!VAR_5) {
        return 0;
    }

    VAR_5 += FUNC_1(VAR_0, VAR_1, VAR_2->type);
    VAR_5 += FUNC_1(VAR_0, VAR_1, VAR_2->unicast?0x8001:0x0001);
    return VAR_5;
}
