
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct concap_proto {TYPE_1__* net_dev; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(struct concap_proto *VAR_0)
{
 FUNC_0( "isdn_concap_dl_disconn_req: %s \n", VAR_0 -> net_dev -> name);

 FUNC_1( VAR_0 -> net_dev );
 return 0;
}
