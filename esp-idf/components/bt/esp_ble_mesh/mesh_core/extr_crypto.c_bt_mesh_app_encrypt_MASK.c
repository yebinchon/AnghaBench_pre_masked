
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8_t ;
typedef int u32_t ;
typedef int u16_t ;
struct net_buf_simple {int len; int const* data; } ;


 int FUNC_0 (int const) ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (int const*,int) ;
 int FUNC_3 (int const*,int const*,int const*,int,int const*,int,int const*,int ) ;
 int FUNC_4 (int const*,int,int const,int ,int ,int ,int ) ;
 int FUNC_5 (struct net_buf_simple*,int ) ;

int FUNC_6(const u8_t VAR_0[16], bool VAR_1, u8_t VAR_2,
                        struct net_buf_simple *VAR_3, const u8_t *VAR_4,
                        u16_t VAR_5, u16_t VAR_6, u32_t VAR_7, u32_t VAR_8)
{
    u8_t VAR_9[13];
    int VAR_10;

    FUNC_1("AppKey %s", FUNC_2(VAR_0, 16));
    FUNC_1("dev_key %u src 0x%04x dst 0x%04x", VAR_1, VAR_5, VAR_6);
    FUNC_1("seq_num 0x%08x iv_index 0x%08x", VAR_7, VAR_8);
    FUNC_1("Clear: %s", FUNC_2(VAR_3->data, VAR_3->len));

    FUNC_4(VAR_9, VAR_1, VAR_2, VAR_5, VAR_6, VAR_7, VAR_8);

    FUNC_1("Nonce  %s", FUNC_2(VAR_9, 13));

    VAR_10 = FUNC_3(VAR_0, VAR_9, VAR_3->data, VAR_3->len, VAR_4,
                              VAR_4 ? 16 : 0, VAR_3->data, FUNC_0(VAR_2));
    if (!VAR_10) {
        FUNC_5(VAR_3, FUNC_0(VAR_2));
        FUNC_1("Encr: %s", FUNC_2(VAR_3->data, VAR_3->len));
    }

    return VAR_10;
}
