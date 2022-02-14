
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8_t ;
struct tc_aes_key_sched_struct {int dummy; } ;


 int FUNC_0 (char*,int ,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int const*,int) ;
 int FUNC_2 (int const*,int const*,int const*,int *) ;
 int FUNC_3 (int const*,int) ;
 int FUNC_4 (int const*,int const*,int) ;
 scalar_t__ FUNC_5 (struct tc_aes_key_sched_struct*,int const*) ;
 scalar_t__ FUNC_6 (int const*,int const*,struct tc_aes_key_sched_struct*) ;

int FUNC_7(const u8_t VAR_2[16], const u8_t VAR_3[16],
                       u8_t VAR_4[16])
{
    struct tc_aes_key_sched_struct VAR_5;
    u8_t VAR_6[16];

    FUNC_0("key %s plaintext %s", FUNC_1(VAR_2, 16), FUNC_1(VAR_3, 16));

    FUNC_4(VAR_6, VAR_2, 16);

    if (FUNC_5(&VAR_5, VAR_6) == VAR_1) {
        return -VAR_0;
    }

    FUNC_4(VAR_6, VAR_3, 16);

    if (FUNC_6(VAR_4, VAR_6, &VAR_5) == VAR_1) {
        return -VAR_0;
    }

    FUNC_3(VAR_4, 16);

    FUNC_0("enc_data %s", FUNC_1(VAR_4, 16));

    return 0;

}
