
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ version; TYPE_1__* errmsg; TYPE_2__* sqlstate; int errcode; } ;
typedef TYPE_3__ network_mysqld_err_packet_t ;
struct TYPE_6__ {scalar_t__ len; int str; } ;
struct TYPE_5__ {int len; int str; } ;
typedef int GString ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,char) ;
 int FUNC_2 (int *,int ,...) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int) ;

int FUNC_5(GString *VAR_1, network_mysqld_err_packet_t *VAR_2) {
 int VAR_3;

 FUNC_4(VAR_1, 0xff);
 FUNC_3(VAR_1, VAR_2->errcode);
 if (VAR_2->version == VAR_0) {
  FUNC_1(VAR_1, '#');
  if (VAR_2->sqlstate && (VAR_2->sqlstate->len > 0)) {
   FUNC_2(VAR_1, VAR_2->sqlstate->str, 5);
  } else {
   FUNC_2(VAR_1, FUNC_0("07000"));
  }
 }

 VAR_3 = VAR_2->errmsg->len;
 if (VAR_3 >= 512) VAR_3 = 512;
 FUNC_2(VAR_1, VAR_2->errmsg->str, VAR_3);

 return 0;
}
