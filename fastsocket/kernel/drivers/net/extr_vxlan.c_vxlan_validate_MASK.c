
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct ifla_vxlan_port_range {int high; int low; } ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct ifla_vxlan_port_range*) ;
 struct ifla_vxlan_port_range* FUNC_1 (struct nlattr*) ;
 scalar_t__ FUNC_2 (struct nlattr*) ;
 scalar_t__ FUNC_3 (struct nlattr*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static int FUNC_6(struct nlattr *VAR_8[], struct nlattr *VAR_9[])
{
 if (VAR_8[VAR_4]) {
  if (FUNC_3(VAR_8[VAR_4]) != VAR_3) {
   FUNC_5("invalid link address (not ethernet)\n");
   return -VAR_1;
  }

  if (!FUNC_0(FUNC_1(VAR_8[VAR_4]))) {
   FUNC_5("invalid all zero ethernet address\n");
   return -VAR_0;
  }
 }

 if (!VAR_9)
  return -VAR_1;

 if (VAR_9[VAR_5]) {
  __u32 VAR_10 = FUNC_2(VAR_9[VAR_5]);
  if (VAR_10 >= VAR_7)
   return -VAR_2;
 }

 if (VAR_9[VAR_6]) {
  const struct ifla_vxlan_port_range *VAR_11
   = FUNC_1(VAR_9[VAR_6]);

  if (FUNC_4(VAR_11->high) < FUNC_4(VAR_11->low)) {
   FUNC_5("port range %u .. %u not valid\n",
     FUNC_4(VAR_11->low), FUNC_4(VAR_11->high));
   return -VAR_1;
  }
 }

 return 0;
}
