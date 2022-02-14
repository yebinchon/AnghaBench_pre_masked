
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int port; int hostname; int user; } ;
typedef TYPE_1__ MultiConnection ;


 int FUNC_0 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int ,int ,int ) ;
 int FUNC_3 (char*,int ) ;

void
FUNC_4(MultiConnection *VAR_2, const char *VAR_3)
{
 if (!VAR_1)
 {
  return;
 }

 FUNC_1(VAR_0, (FUNC_3("issuing %s", FUNC_0(VAR_3)),
      FUNC_2("on server %s@%s:%d", VAR_2->user, VAR_2->hostname,
       VAR_2->port)));
}
