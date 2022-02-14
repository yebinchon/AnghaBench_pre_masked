
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct SRTPContext {int rtcp_hmac_size; int rtp_hmac_size; int seq_largest; int roc; int hmac; int rtp_auth; int rtcp_auth; int aes; int rtp_key; int rtcp_key; int rtp_salt; int rtcp_salt; int rtcp_index; } ;
typedef int hmac ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int const) ;
 int FUNC_4 (int ,int ,int,int ) ;
 int FUNC_5 (int ,int*,int) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int*,int) ;
 int FUNC_8 (int*,int ,int,int ) ;
 int FUNC_9 (int ,int*,int*,int) ;
 int FUNC_10 (int*,int const*,int) ;

int FUNC_11(struct SRTPContext *VAR_1, const uint8_t *VAR_2, int VAR_3,
                    uint8_t *VAR_4, int VAR_5)
{
    uint8_t VAR_6[16] = { 0 }, VAR_7[20];
    uint64_t VAR_8;
    uint32_t VAR_9;
    int VAR_10, VAR_11, VAR_12;
    uint8_t *VAR_13;

    if (VAR_3 < 8)
        return VAR_0;

    VAR_10 = FUNC_3(VAR_2[1]);
    VAR_11 = VAR_10 ? VAR_1->rtcp_hmac_size : VAR_1->rtp_hmac_size;
    VAR_12 = VAR_11;
    if (VAR_10)
        VAR_12 += 4;

    if (VAR_3 + VAR_12 > VAR_5)
        return 0;

    FUNC_10(VAR_4, VAR_2, VAR_3);
    VAR_13 = VAR_4;

    if (VAR_10) {
        VAR_9 = FUNC_1(VAR_13 + 4);
        VAR_8 = VAR_1->rtcp_index++;

        VAR_13 += 8;
        VAR_3 -= 8;
    } else {
        int VAR_14, VAR_15;
        int VAR_16 = FUNC_0(VAR_13 + 2);

        if (VAR_3 < 12)
            return VAR_0;

        VAR_9 = FUNC_1(VAR_13 + 8);

        if (VAR_16 < VAR_1->seq_largest)
            VAR_1->roc++;
        VAR_1->seq_largest = VAR_16;
        VAR_8 = VAR_16 + (((uint64_t)VAR_1->roc) << 16);

        VAR_15 = VAR_13[0] & 0x0f;
        VAR_14 = VAR_13[0] & 0x10;

        VAR_13 += 12;
        VAR_3 -= 12;

        VAR_13 += 4 * VAR_15;
        VAR_3 -= 4 * VAR_15;
        if (VAR_3 < 0)
            return VAR_0;

        if (VAR_14) {
            if (VAR_3 < 4)
                return VAR_0;
            VAR_14 = (FUNC_0(VAR_13 + 2) + 1) * 4;
            if (VAR_3 < VAR_14)
                return VAR_0;
            VAR_3 -= VAR_14;
            VAR_13 += VAR_14;
        }
    }

    FUNC_8(VAR_6, VAR_10 ? VAR_1->rtcp_salt : VAR_1->rtp_salt, VAR_8, VAR_9);
    FUNC_4(VAR_1->aes, VAR_10 ? VAR_1->rtcp_key : VAR_1->rtp_key, 128, 0);
    FUNC_9(VAR_1->aes, VAR_6, VAR_13, VAR_3);

    if (VAR_10) {
        FUNC_2(VAR_13 + VAR_3, 0x80000000 | VAR_8);
        VAR_3 += 4;
    }

    FUNC_6(VAR_1->hmac, VAR_10 ? VAR_1->rtcp_auth : VAR_1->rtp_auth, sizeof(VAR_1->rtp_auth));
    FUNC_7(VAR_1->hmac, VAR_4, VAR_13 + VAR_3 - VAR_4);
    if (!VAR_10) {
        uint8_t VAR_17[4];
        FUNC_2(VAR_17, VAR_1->roc);
        FUNC_7(VAR_1->hmac, VAR_17, 4);
    }
    FUNC_5(VAR_1->hmac, VAR_7, sizeof(VAR_7));

    FUNC_10(VAR_13 + VAR_3, VAR_7, VAR_11);
    VAR_3 += VAR_11;
    return VAR_13 + VAR_3 - VAR_4;
}
