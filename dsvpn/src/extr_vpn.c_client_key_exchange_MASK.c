
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_3__ {int is_server; int * uc_st; int client_fd; int * uc_kx_st; } ;
typedef TYPE_1__ Context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int*,int *,int) ;
 int FUNC_3 (int ,int*,int,int ) ;
 int FUNC_4 (int ,int*,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int*,int*,int*,int) ;
 int FUNC_7 (int*,int) ;
 int FUNC_8 (int ,int*,int*) ;

__attribute__((used)) static int FUNC_9(Context *VAR_3)
{
    uint32_t VAR_4[12];
    uint8_t VAR_5[32 + 8 + 32], VAR_6[32 + 32];
    uint8_t VAR_7[32];
    uint8_t VAR_8[32];
    uint8_t VAR_9[16] = { 0 };
    uint64_t VAR_10;

    FUNC_2(VAR_4, VAR_3->uc_kx_st, sizeof VAR_4);
    FUNC_7(VAR_5, 32);
    VAR_10 = FUNC_0(FUNC_5(((void*)0)));
    FUNC_2(VAR_5 + 32, &VAR_10, 8);
    FUNC_6(VAR_4, VAR_5 + 32 + 8, VAR_5, 32 + 8);
    if (FUNC_4(VAR_3->client_fd, VAR_5, sizeof VAR_5, VAR_1) != sizeof VAR_5) {
        return -1;
    }
    VAR_2 = VAR_0;
    if (FUNC_3(VAR_3->client_fd, VAR_6, sizeof VAR_6, VAR_1) != sizeof VAR_6) {
        return -1;
    }
    FUNC_6(VAR_4, VAR_7, VAR_6, 32);
    if (FUNC_1(VAR_7, VAR_6 + 32, 32) != 0) {
        return -1;
    }
    FUNC_6(VAR_4, VAR_8, ((void*)0), 0);
    VAR_9[0] = VAR_3->is_server;
    FUNC_8(VAR_3->uc_st[0], VAR_8, VAR_9);
    VAR_9[0] ^= 1;
    FUNC_8(VAR_3->uc_st[1], VAR_8, VAR_9);

    return 0;
}
