
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_20__ {int default_file; TYPE_6__* raw_pwds; TYPE_6__* raw_ips; int backends_mutex; TYPE_6__* backends; } ;
typedef TYPE_3__ network_backends_t ;
struct TYPE_21__ {scalar_t__ type; TYPE_2__* addr; } ;
typedef TYPE_4__ network_backend_t ;
typedef scalar_t__ guint ;
typedef int gsize ;
typedef int gchar ;
struct TYPE_24__ {int message; } ;
struct TYPE_23__ {scalar_t__ len; } ;
struct TYPE_22__ {scalar_t__ len; char* str; } ;
struct TYPE_19__ {TYPE_1__* name; } ;
struct TYPE_18__ {int * str; } ;
typedef TYPE_5__ GString ;
typedef TYPE_6__ GPtrArray ;
typedef int GKeyFile ;
typedef TYPE_7__ GError ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (TYPE_7__*) ;
 scalar_t__ FUNC_2 (int ,int *,int ,TYPE_7__**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ,int ,TYPE_7__**) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *,char) ;
 int FUNC_8 (int *,char*,char*,char*) ;
 int * FUNC_9 (int *,int *,int *) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 void* FUNC_13 (TYPE_6__*,scalar_t__) ;
 int FUNC_14 (TYPE_5__*,int *) ;
 int FUNC_15 (TYPE_5__*,char) ;
 int FUNC_16 (TYPE_5__*,char*,int *) ;
 int FUNC_17 (TYPE_5__*,int ) ;
 TYPE_5__* FUNC_18 (int *) ;

int FUNC_19(network_backends_t *VAR_6) {
 GKeyFile *VAR_7 = FUNC_6();
 FUNC_7(VAR_7, ',');
 GError *VAR_8 = ((void*)0);

 if (VAR_2 == FUNC_5(VAR_7, VAR_6->default_file, VAR_3, &VAR_8)) {
  FUNC_0("%s: g_key_file_load_from_file: %s", VAR_4, VAR_8->message);
  FUNC_1(VAR_8);
  FUNC_4(VAR_7);
  return -1;
 }

 GString *VAR_9 = FUNC_18(((void*)0));
 GString *VAR_10 = FUNC_18(((void*)0));
 guint VAR_11;
 GPtrArray *VAR_12 = VAR_6->backends;

 FUNC_11(VAR_6->backends_mutex);
 guint VAR_13 = VAR_12->len;
 for (VAR_11 = 0; VAR_11 < VAR_13; ++VAR_11) {
  network_backend_t *VAR_14 = FUNC_13(VAR_12, VAR_11);
  if (VAR_14->type == VAR_1) {
   FUNC_16(VAR_9, ",%s", VAR_14->addr->name->str);
  } else if (VAR_14->type == VAR_0) {
   FUNC_16(VAR_10, ",%s", VAR_14->addr->name->str);
  }
 }
 FUNC_12(VAR_6->backends_mutex);

 if (VAR_9->len != 0) {
  FUNC_8(VAR_7, "mysql-proxy", "proxy-backend-addresses", VAR_9->str+1);
 } else {
  FUNC_8(VAR_7, "mysql-proxy", "proxy-backend-addresses", "");
 }
 if (VAR_10->len != 0) {
  FUNC_8(VAR_7, "mysql-proxy", "proxy-read-only-backend-addresses", VAR_10->str+1);
 } else {
  FUNC_8(VAR_7, "mysql-proxy", "proxy-read-only-backend-addresses", "");
 }

 FUNC_17(VAR_9, VAR_5);
 FUNC_17(VAR_10, VAR_5);

 GString *VAR_15 = FUNC_18(((void*)0));
 for (VAR_11 = 0; VAR_11 < VAR_6->raw_ips->len; ++VAR_11) {
  gchar *VAR_16 = FUNC_13(VAR_6->raw_ips, VAR_11);
  FUNC_16(VAR_15, ",%s", VAR_16);
 }
 if (VAR_15->len != 0) {
  FUNC_8(VAR_7, "mysql-proxy", "client-ips", VAR_15->str+1);
 } else {
  FUNC_8(VAR_7, "mysql-proxy", "client-ips", "");
 }
 FUNC_17(VAR_15, VAR_5);

 GString *VAR_17 = FUNC_18(((void*)0));
 for (VAR_11 = 0; VAR_11 < VAR_6->raw_pwds->len; ++VAR_11) {
  FUNC_15(VAR_17, ',');
  gchar *VAR_18 = FUNC_13(VAR_6->raw_pwds, VAR_11);
  FUNC_14(VAR_17, VAR_18);
 }
 if (VAR_17->len != 0) {
  FUNC_8(VAR_7, "mysql-proxy", "pwds", VAR_17->str+1);
 } else {
  FUNC_8(VAR_7, "mysql-proxy", "pwds", "");
 }
 FUNC_17(VAR_17, VAR_5);

 gsize VAR_19 = 0;
 gchar *VAR_20 = FUNC_9(VAR_7, &VAR_19, ((void*)0));
 if (VAR_2 == FUNC_2(VAR_6->default_file, VAR_20, VAR_19, &VAR_8)) {
  FUNC_0("%s: g_file_set_contents: %s", VAR_4, VAR_8->message);
  FUNC_3(VAR_20);
  FUNC_1(VAR_8);
  FUNC_4(VAR_7);
  return -1;
 }

 FUNC_10("%s: saving config file succeed", VAR_4);
 FUNC_3(VAR_20);
 FUNC_4(VAR_7);
 return 0;
}
