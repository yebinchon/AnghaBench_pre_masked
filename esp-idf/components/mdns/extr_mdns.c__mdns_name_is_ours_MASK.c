
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int service; } ;
typedef TYPE_1__ mdns_srv_item_t ;
struct TYPE_7__ {char const* domain; char const* service; char const* proto; char const* host; } ;
typedef TYPE_2__ mdns_name_t ;
struct TYPE_8__ {char const* hostname; } ;


 char const* VAR_0 ;
 char* FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (char const*,char const*) ;
 TYPE_3__* VAR_1 ;
 scalar_t__ FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;

__attribute__((used)) static bool FUNC_4(mdns_name_t * VAR_2)
{

    if (FUNC_2(VAR_2->domain) || FUNC_3(VAR_2->domain, VAR_0)) {
        return 0;
    }


    if (FUNC_2(VAR_2->service) && FUNC_2(VAR_2->proto)) {
        if (!FUNC_2(VAR_2->host)
          && !FUNC_2(VAR_1->hostname)
          && FUNC_3(VAR_2->host, VAR_1->hostname) == 0)
        {
            return 1;
        }
        return 0;
    }


    if (FUNC_2(VAR_2->service) || FUNC_2(VAR_2->proto)) {
        return 0;
    }


    mdns_srv_item_t * VAR_3 = FUNC_1(VAR_2->service, VAR_2->proto);
    if (!VAR_3) {
        return 0;
    }


    if (FUNC_2(VAR_2->host)) {
        return 1;
    }


    const char * VAR_4 = FUNC_0(VAR_3->service);
    if (VAR_4 == ((void*)0)) {
        return 0;
    }


    if (FUNC_3(VAR_2->host, VAR_4) == 0) {
        return 1;
    }

    return 0;
}
