
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_4__* priv_data; } ;
typedef TYPE_3__ URLContext ;
struct TYPE_8__ {scalar_t__ auth_type; } ;
struct TYPE_7__ {scalar_t__ auth_type; } ;
struct TYPE_10__ {TYPE_2__ proxy_auth_state; TYPE_1__ auth_state; } ;
typedef TYPE_4__ HTTPContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*,int ,char*,int,char const*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (char const*,int ) ;

__attribute__((used)) static int FUNC_4(URLContext *VAR_4, int VAR_5, const char *VAR_6)
{
    HTTPContext *VAR_7 = VAR_4->priv_data;


    if (VAR_5 >= 400 && VAR_5 < 600 &&
        (VAR_5 != 401 || VAR_7->auth_state.auth_type != VAR_2) &&
        (VAR_5 != 407 || VAR_7->proxy_auth_state.auth_type != VAR_2)) {
        VAR_6 += FUNC_3(VAR_6, VAR_3);
        FUNC_1(VAR_4, VAR_0, "HTTP error %d %s\n", VAR_5, VAR_6);
        return FUNC_2(VAR_5, FUNC_0(VAR_1));
    }
    return 0;
}
