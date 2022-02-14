
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int uc_kx_st; } ;
typedef TYPE_1__ Context ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (int,unsigned char*,int,int) ;
 int FUNC_3 (unsigned char*,int) ;
 int FUNC_4 (int ,unsigned char*,unsigned char const*) ;

__attribute__((used)) static int FUNC_5(Context *VAR_1, const char *VAR_2)
{
    unsigned char VAR_3[32];
    int VAR_4;

    if ((VAR_4 = FUNC_1(VAR_2, VAR_0)) == -1) {
        return -1;
    }
    if (FUNC_2(VAR_4, VAR_3, sizeof VAR_3, -1) != sizeof VAR_3) {
        (void) FUNC_0(VAR_4);
        return -1;
    }
    FUNC_4(VAR_1->uc_kx_st, VAR_3, (const unsigned char *) "VPN Key Exchange");
    FUNC_3(VAR_3, sizeof VAR_3);

    return FUNC_0(VAR_4);
}
