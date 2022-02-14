
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8_t ;
typedef int u32_t ;
struct net_buf_simple {int const* data; int len; } ;


 int FUNC_0 (char*,int,...) ;
 int const FUNC_1 (int const*) ;
 int FUNC_2 (int const*,int) ;
 int FUNC_3 (int const*,int const*,int const*,int const,int *,int ,int const*,int const) ;
 int FUNC_4 (int const*,int const*,int ) ;
 int FUNC_5 (int const*,int const*,int ) ;

int FUNC_6(const u8_t VAR_0[16], struct net_buf_simple *VAR_1,
                        u32_t VAR_2, bool VAR_3)
{
    u8_t VAR_4 = FUNC_1(VAR_1->data);
    u8_t VAR_5[13];

    FUNC_0("PDU (%u bytes) %s", VAR_1->len, FUNC_2(VAR_1->data, VAR_1->len));
    FUNC_0("iv_index %u, key %s mic_len %u", VAR_2, FUNC_2(VAR_0, 16),
           VAR_4);
    FUNC_4(VAR_5, VAR_1->data, VAR_2);


    FUNC_0("Nonce %s", FUNC_2(VAR_5, 13));

    VAR_1->len -= VAR_4;

    return FUNC_3(VAR_0, VAR_5, &VAR_1->data[7], VAR_1->len - 7,
                               ((void*)0), 0, &VAR_1->data[7], VAR_4);
}
