
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int buf ;
struct TYPE_3__ {int priv_key_pw; } ;
typedef TYPE_1__ TLSContext ;


 scalar_t__ FUNC_0 (char*,int,char*,char const*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*,char) ;

__attribute__((used)) static void FUNC_3(TLSContext *VAR_0, const char *VAR_1)
{
    char VAR_2[1024];
    const char *VAR_3 = FUNC_2(VAR_1, '?');
    if (!VAR_3)
        return;

    if (!VAR_0->priv_key_pw && FUNC_0(VAR_2, sizeof(VAR_2), "key_password", VAR_3))
        VAR_0->priv_key_pw = FUNC_1(VAR_2);
}
