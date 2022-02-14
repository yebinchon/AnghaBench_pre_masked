
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_routing_info {int type; } ;
struct qeth_card {scalar_t__ state; int conf_mutex; } ;
typedef int ssize_t ;
typedef enum qeth_routing_types { ____Placeholder_qeth_routing_types } qeth_routing_types ;
typedef enum qeth_prot_versions { ____Placeholder_qeth_prot_versions } qeth_prot_versions ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct qeth_card*) ;
 int FUNC_3 (struct qeth_card*) ;
 int FUNC_4 (char*,char*) ;
 char* FUNC_5 (char**,char*) ;

__attribute__((used)) static ssize_t FUNC_6(struct qeth_card *VAR_11,
  struct qeth_routing_info *VAR_12, enum qeth_prot_versions VAR_13,
  const char *VAR_14, size_t VAR_15)
{
 enum qeth_routing_types VAR_16 = VAR_12->type;
 char *VAR_17;
 int VAR_18 = 0;

 VAR_17 = FUNC_5((char **) &VAR_14, "\n");
 FUNC_0(&VAR_11->conf_mutex);
 if (!FUNC_4(VAR_17, "no_router")) {
  VAR_12->type = VAR_4;
 } else if (!FUNC_4(VAR_17, "primary_connector")) {
  VAR_12->type = VAR_5;
 } else if (!FUNC_4(VAR_17, "secondary_connector")) {
  VAR_12->type = VAR_9;
 } else if (!FUNC_4(VAR_17, "primary_router")) {
  VAR_12->type = VAR_6;
 } else if (!FUNC_4(VAR_17, "secondary_router")) {
  VAR_12->type = VAR_10;
 } else if (!FUNC_4(VAR_17, "multicast_router")) {
  VAR_12->type = VAR_3;
 } else {
  VAR_18 = -VAR_2;
  goto out;
 }
 if (((VAR_11->state == VAR_0) ||
      (VAR_11->state == VAR_1)) &&
     (VAR_16 != VAR_12->type)) {
  if (VAR_13 == VAR_7)
   VAR_18 = FUNC_2(VAR_11);
  else if (VAR_13 == VAR_8)
   VAR_18 = FUNC_3(VAR_11);
 }
out:
 FUNC_1(&VAR_11->conf_mutex);
 return VAR_18 ? VAR_18 : VAR_15;
}
