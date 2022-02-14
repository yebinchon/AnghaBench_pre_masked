
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_3__ {scalar_t__* domain; scalar_t__* proto; scalar_t__* service; scalar_t__* host; } ;
typedef TYPE_1__ mdns_name_t ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__*,char*) ;

__attribute__((used)) static bool FUNC_1(mdns_name_t * VAR_2, uint16_t VAR_3)
{
    return (
               (VAR_2->host && VAR_2->host[0] && !FUNC_0(VAR_2->host, "_services"))
               && (VAR_2->service && VAR_2->service[0] && !FUNC_0(VAR_2->service, "_dns-sd"))
               && (VAR_2->proto && VAR_2->proto[0] && !FUNC_0(VAR_2->proto, "_udp"))
               && (VAR_2->domain && VAR_2->domain[0] && !FUNC_0(VAR_2->domain, VAR_0))
               && VAR_3 == VAR_1
           );
}
