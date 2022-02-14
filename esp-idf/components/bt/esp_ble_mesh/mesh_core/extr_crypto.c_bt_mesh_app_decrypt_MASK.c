
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
 int FUNC_5 (struct net_buf_simple*,int) ;

int FUNC_6(const u8_t VAR_0[16], bool VAR_1, u8_t VAR_2,
                        struct net_buf_simple *VAR_3, struct net_buf_simple *VAR_4,
                        const u8_t *VAR_5, u16_t VAR_6, u16_t VAR_7, u32_t VAR_8,
                        u32_t VAR_9)
{
    u8_t VAR_10[13];
    int VAR_11;

    FUNC_1("EncData (len %u) %s", VAR_3->len, FUNC_2(VAR_3->data, VAR_3->len));

    FUNC_4(VAR_10, VAR_1, VAR_2, VAR_6, VAR_7, VAR_8, VAR_9);

    FUNC_1("AppKey %s", FUNC_2(VAR_0, 16));
    FUNC_1("Nonce  %s", FUNC_2(VAR_10, 13));

    VAR_11 = FUNC_3(VAR_0, VAR_10, VAR_3->data, VAR_3->len, VAR_5,
                              VAR_5 ? 16 : 0, VAR_4->data, FUNC_0(VAR_2));
    if (!VAR_11) {
        FUNC_5(VAR_4, VAR_3->len);
    }

    return VAR_11;
}
