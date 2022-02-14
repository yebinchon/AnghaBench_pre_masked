
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_6__ {int packet_size; int length_recovery; int bitstring_size; } ;
typedef TYPE_2__ PrompegContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,int ,char*) ;
 int* FUNC_3 (int ) ;
 int FUNC_4 (int*,int const*,int ) ;

__attribute__((used)) static int FUNC_5(URLContext *VAR_3, const uint8_t *VAR_4, int VAR_5,
        uint8_t **VAR_6) {
    PrompegContext *VAR_7 = VAR_3->priv_data;
    uint8_t *VAR_8;

    if (VAR_5 < 12 || (VAR_4[0] & 0xc0) != 0x80 || (VAR_4[1] & 0x7f) != 0x21) {
        FUNC_2(VAR_3, VAR_0, "Unsupported stream format (expected MPEG-TS over RTP)\n");
        return FUNC_0(VAR_1);
    }
    if (VAR_5 != VAR_7->packet_size) {
        FUNC_2(VAR_3, VAR_0, "The RTP packet size must be constant (set pkt_size)\n");
        return FUNC_0(VAR_1);
    }

    *VAR_6 = FUNC_3(VAR_7->bitstring_size);
    if (!*VAR_6) {
        FUNC_2(VAR_3, VAR_0, "Failed to allocate the bitstring buffer\n");
        return FUNC_0(VAR_2);
    }
    VAR_8 = *VAR_6;


    VAR_8[0] = VAR_4[0] & 0x3f;

    VAR_8[1] = VAR_4[1];

    VAR_8[2] = VAR_4[4];
    VAR_8[3] = VAR_4[5];
    VAR_8[4] = VAR_4[6];
    VAR_8[5] = VAR_4[7];




    FUNC_1(VAR_8 + 6, VAR_7->length_recovery);

    FUNC_4(VAR_8 + 8, VAR_4 + 12, VAR_7->length_recovery);

    return 0;
}
