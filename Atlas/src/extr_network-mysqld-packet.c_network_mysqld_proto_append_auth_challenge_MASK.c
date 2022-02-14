
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int server_version; int charset; TYPE_1__* challenge; int server_status; int capabilities; int thread_id; scalar_t__ server_version_str; } ;
typedef TYPE_2__ network_mysqld_auth_challenge ;
typedef int guint ;
struct TYPE_4__ {scalar_t__ str; scalar_t__ len; } ;
typedef int GString ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,int ,...) ;
 int FUNC_3 (int *,char*,int,int,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int) ;

int FUNC_7(GString *VAR_0, network_mysqld_auth_challenge *VAR_1) {
 guint VAR_2;

 FUNC_6(VAR_0, 0x0a);
 if (VAR_1->server_version_str) {
  FUNC_1(VAR_0, VAR_1->server_version_str);
 } else if (VAR_1->server_version > 30000 && VAR_1->server_version < 100000) {
  FUNC_3(VAR_0, "%d.%02d.%02d",
    VAR_1->server_version / 10000,
    (VAR_1->server_version % 10000) / 100,
    VAR_1->server_version % 100
    );
 } else {
  FUNC_2(VAR_0, FUNC_0("5.0.99"));
 }
 FUNC_6(VAR_0, 0x00);
 FUNC_5(VAR_0, VAR_1->thread_id);
 if (VAR_1->challenge->len) {
  FUNC_2(VAR_0, VAR_1->challenge->str, 8);
 } else {
  FUNC_2(VAR_0, FUNC_0("01234567"));
 }
 FUNC_6(VAR_0, 0x00);
 FUNC_4(VAR_0, VAR_1->capabilities);
 FUNC_6(VAR_0, VAR_1->charset);
 FUNC_4(VAR_0, VAR_1->server_status);

 for (VAR_2 = 0; VAR_2 < 13; VAR_2++) {
  FUNC_6(VAR_0, 0x00);
 }

 if (VAR_1->challenge->len) {
  FUNC_2(VAR_0, VAR_1->challenge->str + 8, 12);
 } else {
  FUNC_2(VAR_0, FUNC_0("890123456789"));
 }
 FUNC_6(VAR_0, 0x00);

 return 0;
}
