
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct SRTPContext {int rtp_hmac_size; int rtcp_hmac_size; int rtcp_auth; int master_salt; int aes; int rtcp_salt; int rtcp_key; int rtp_auth; int rtp_salt; int rtp_key; int master_key; int hmac; } ;
typedef int buf ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (int *,char const*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,char*,...) ;
 int FUNC_6 (int ,int ,int,int ,int) ;
 int FUNC_7 (struct SRTPContext*) ;
 int FUNC_8 (int ,int *,int) ;
 int FUNC_9 (char const*,char*) ;

int FUNC_10(struct SRTPContext *VAR_4, const char *VAR_5,
                       const char *VAR_6)
{
    uint8_t VAR_7[30];

    FUNC_7(VAR_4);


    if (!FUNC_9(VAR_5, "AES_CM_128_HMAC_SHA1_80") ||
        !FUNC_9(VAR_5, "SRTP_AES128_CM_HMAC_SHA1_80")) {
        VAR_4->rtp_hmac_size = VAR_4->rtcp_hmac_size = 10;
    } else if (!FUNC_9(VAR_5, "AES_CM_128_HMAC_SHA1_32")) {
        VAR_4->rtp_hmac_size = VAR_4->rtcp_hmac_size = 4;
    } else if (!FUNC_9(VAR_5, "SRTP_AES128_CM_HMAC_SHA1_32")) {

        VAR_4->rtp_hmac_size = 4;
        VAR_4->rtcp_hmac_size = 10;
    } else {
        FUNC_5(((void*)0), VAR_1, "SRTP Crypto suite %s not supported\n",
                                     VAR_5);
        return FUNC_0(VAR_2);
    }
    if (FUNC_3(VAR_7, VAR_6, sizeof(VAR_7)) != sizeof(VAR_7)) {
        FUNC_5(((void*)0), VAR_1, "Incorrect amount of SRTP params\n");
        return FUNC_0(VAR_2);
    }

    VAR_4->aes = FUNC_1();
    VAR_4->hmac = FUNC_4(VAR_0);
    if (!VAR_4->aes || !VAR_4->hmac)
        return FUNC_0(VAR_3);
    FUNC_8(VAR_4->master_key, VAR_7, 16);
    FUNC_8(VAR_4->master_salt, VAR_7 + 16, 14);


    FUNC_2(VAR_4->aes, VAR_4->master_key, 128, 0);

    FUNC_6(VAR_4->aes, VAR_4->master_salt, 0x00, VAR_4->rtp_key, sizeof(VAR_4->rtp_key));
    FUNC_6(VAR_4->aes, VAR_4->master_salt, 0x02, VAR_4->rtp_salt, sizeof(VAR_4->rtp_salt));
    FUNC_6(VAR_4->aes, VAR_4->master_salt, 0x01, VAR_4->rtp_auth, sizeof(VAR_4->rtp_auth));

    FUNC_6(VAR_4->aes, VAR_4->master_salt, 0x03, VAR_4->rtcp_key, sizeof(VAR_4->rtcp_key));
    FUNC_6(VAR_4->aes, VAR_4->master_salt, 0x05, VAR_4->rtcp_salt, sizeof(VAR_4->rtcp_salt));
    FUNC_6(VAR_4->aes, VAR_4->master_salt, 0x04, VAR_4->rtcp_auth, sizeof(VAR_4->rtcp_auth));
    return 0;
}
