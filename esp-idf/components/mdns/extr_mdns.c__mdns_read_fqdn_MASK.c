
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {int parts; int invalid; char* host; int sub; char* service; char* proto; char* domain; } ;
typedef TYPE_1__ mdns_name_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char*,char*,int) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static const uint8_t * FUNC_3(const uint8_t * VAR_2, const uint8_t * VAR_3, mdns_name_t * VAR_4, char * VAR_5)
{
    size_t VAR_6 = 0;
    while (VAR_3[VAR_6]) {
        if (VAR_4->parts == 4) {
            VAR_4->invalid = 1;
        }
        uint8_t VAR_7 = VAR_3[VAR_6++];
        if (VAR_7 < 0xC0) {
            if (VAR_7 > 63) {

                return ((void*)0);
            }
            uint8_t VAR_8;
            for (VAR_8=0; VAR_8<VAR_7; VAR_8++) {
                VAR_5[VAR_8] = VAR_3[VAR_6++];
            }
            VAR_5[VAR_7] = '\0';
            if (VAR_4->parts == 1 && VAR_5[0] != '_'
                    && (FUNC_1(VAR_5, VAR_0) != 0)
                    && (FUNC_1(VAR_5, "ip6") != 0)
                    && (FUNC_1(VAR_5, "in-addr") != 0)) {
                FUNC_2(VAR_4->host, ".", sizeof(VAR_4->host));
                FUNC_2(VAR_4->host, VAR_5, sizeof(VAR_4->host));
            } else if (FUNC_1(VAR_5, VAR_1) == 0) {
                VAR_4->sub = 1;
            } else if (!VAR_4->invalid) {
                char* VAR_9[]={VAR_4->host, VAR_4->service, VAR_4->proto, VAR_4->domain};
                FUNC_0(VAR_9[VAR_4->parts++], VAR_5, VAR_7+1);
            }
        } else {
            size_t VAR_10 = (((uint16_t)VAR_7 & 0x3F) << 8) | VAR_3[VAR_6++];
            if ((VAR_2 + VAR_10) >= VAR_3) {

                return ((void*)0);
            }
            if (FUNC_3(VAR_2, VAR_2 + VAR_10, VAR_4, VAR_5)) {
                return VAR_3 + VAR_6;
            }
            return ((void*)0);
        }
    }
    return VAR_3 + VAR_6 + 1;
}
