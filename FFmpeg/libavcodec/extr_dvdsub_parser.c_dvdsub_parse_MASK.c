
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {int packet_index; int packet_len; int * packet; } ;
typedef TYPE_1__ DVDSubParseContext ;
typedef TYPE_2__ AVCodecParserContext ;
typedef int AVCodecContext ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 unsigned int VAR_3 ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int *,int ,char*,int) ;
 int * FUNC_4 (unsigned int) ;
 int FUNC_5 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_6(AVCodecParserContext *VAR_4,
                        AVCodecContext *VAR_5,
                        const uint8_t **VAR_6, int *VAR_7,
                        const uint8_t *VAR_8, int VAR_9)
{
    DVDSubParseContext *VAR_10 = VAR_4->priv_data;

    *VAR_6 = VAR_8;
    *VAR_7 = VAR_9;

    if (VAR_10->packet_index == 0) {
        if (VAR_9 < 2 || FUNC_0(VAR_8) && VAR_9 < 6) {
            if (VAR_9)
                FUNC_3(VAR_5, VAR_1, "Parser input %d too small\n", VAR_9);
            return VAR_9;
        }
        VAR_10->packet_len = FUNC_0(VAR_8);
        if (VAR_10->packet_len == 0)
            VAR_10->packet_len = FUNC_1(VAR_8+2);
        FUNC_2(&VAR_10->packet);
        if ((unsigned)VAR_10->packet_len > VAR_3 - VAR_0) {
            FUNC_3(VAR_5, VAR_2, "packet length %d is invalid\n", VAR_10->packet_len);
            return VAR_9;
        }
        VAR_10->packet = FUNC_4(VAR_10->packet_len + VAR_0);
    }
    if (VAR_10->packet) {
        if (VAR_10->packet_index + VAR_9 <= VAR_10->packet_len) {
            FUNC_5(VAR_10->packet + VAR_10->packet_index, VAR_8, VAR_9);
            VAR_10->packet_index += VAR_9;
            if (VAR_10->packet_index >= VAR_10->packet_len) {
                *VAR_6 = VAR_10->packet;
                *VAR_7 = VAR_10->packet_len;
                VAR_10->packet_index = 0;
                return VAR_9;
            }
        } else {

            VAR_10->packet_index = 0;
        }
    }
    *VAR_6 = ((void*)0);
    *VAR_7 = 0;
    return VAR_9;
}
