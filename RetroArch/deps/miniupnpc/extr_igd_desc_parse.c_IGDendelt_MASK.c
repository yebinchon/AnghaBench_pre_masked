
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct IGDdatas_service {int dummy; } ;
struct TYPE_4__ {int servicetype; } ;
struct TYPE_3__ {char* servicetype; } ;
struct IGDdatas {TYPE_2__ tmp; TYPE_1__ second; TYPE_1__ first; TYPE_1__ IPv6FC; TYPE_1__ CIF; int level; } ;


 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (char const*,char*,int) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,int) ;

void FUNC_3(void * VAR_0, const char * VAR_1, int VAR_2)
{
 struct IGDdatas * VAR_3 = (struct IGDdatas *)VAR_0;
 VAR_3->level--;

 if( (VAR_2==7) && !FUNC_1(VAR_1, "service", VAR_2) )
 {
  if(FUNC_0(VAR_3->tmp.servicetype,
             "urn:schemas-upnp-org:service:WANCommonInterfaceConfig:")) {
   FUNC_2(&VAR_3->CIF, &VAR_3->tmp, sizeof(struct IGDdatas_service));
  } else if(FUNC_0(VAR_3->tmp.servicetype,
                   "urn:schemas-upnp-org:service:WANIPv6FirewallControl:")) {
   FUNC_2(&VAR_3->IPv6FC, &VAR_3->tmp, sizeof(struct IGDdatas_service));
  } else if(FUNC_0(VAR_3->tmp.servicetype,
                    "urn:schemas-upnp-org:service:WANIPConnection:")
           || FUNC_0(VAR_3->tmp.servicetype,
                      "urn:schemas-upnp-org:service:WANPPPConnection:") ) {
   if(VAR_3->first.servicetype[0] == '\0') {
    FUNC_2(&VAR_3->first, &VAR_3->tmp, sizeof(struct IGDdatas_service));
   } else {
    FUNC_2(&VAR_3->second, &VAR_3->tmp, sizeof(struct IGDdatas_service));
   }
  }
 }
}
