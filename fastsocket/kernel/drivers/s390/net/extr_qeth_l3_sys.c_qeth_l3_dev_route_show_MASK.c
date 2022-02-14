
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qeth_routing_info {int type; } ;
struct TYPE_2__ {int broadcast_capable; } ;
struct qeth_card {TYPE_1__ info; } ;
typedef int ssize_t ;





 int VAR_0 ;


 int FUNC_0 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_1(struct qeth_card *VAR_1,
   struct qeth_routing_info *VAR_2, char *VAR_3)
{
 switch (VAR_2->type) {
 case 130:
  return FUNC_0(VAR_3, "%s\n", "primary router");
 case 128:
  return FUNC_0(VAR_3, "%s\n", "secondary router");
 case 132:
  if (VAR_1->info.broadcast_capable == VAR_0)
   return FUNC_0(VAR_3, "%s\n", "multicast router+");
  else
   return FUNC_0(VAR_3, "%s\n", "multicast router");
 case 131:
  if (VAR_1->info.broadcast_capable == VAR_0)
   return FUNC_0(VAR_3, "%s\n", "primary connector+");
  else
   return FUNC_0(VAR_3, "%s\n", "primary connector");
 case 129:
  if (VAR_1->info.broadcast_capable == VAR_0)
   return FUNC_0(VAR_3, "%s\n", "secondary connector+");
  else
   return FUNC_0(VAR_3, "%s\n", "secondary connector");
 default:
  return FUNC_0(VAR_3, "%s\n", "no");
 }
}
