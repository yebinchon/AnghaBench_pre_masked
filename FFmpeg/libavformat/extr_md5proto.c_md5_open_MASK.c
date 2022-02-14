
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct MD5Context {int md5; } ;
struct TYPE_3__ {struct MD5Context* priv_data; } ;
typedef TYPE_1__ URLContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(URLContext *VAR_3, const char *VAR_4, int VAR_5)
{
    struct MD5Context *VAR_6 = VAR_3->priv_data;

    if (!(VAR_5 & VAR_0))
        return FUNC_0(VAR_1);

    VAR_6->md5 = FUNC_1();
    if (!VAR_6->md5)
        return FUNC_0(VAR_2);
    FUNC_2(VAR_6->md5);

    return 0;
}
