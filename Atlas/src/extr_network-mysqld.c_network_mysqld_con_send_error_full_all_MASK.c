
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int send_queue; } ;
typedef TYPE_1__ network_socket ;
struct TYPE_11__ {int sqlstate; int errmsg; int errcode; } ;
typedef TYPE_2__ network_mysqld_err_packet_t ;
typedef int guint ;
typedef int gsize ;
typedef char gchar ;
typedef scalar_t__ gboolean ;
typedef int GString ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,char const*,int ) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 () ;
 TYPE_2__* FUNC_6 () ;
 int FUNC_7 (int *,TYPE_2__*) ;
 int FUNC_8 (TYPE_1__*,int ,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (char const*) ;

__attribute__((used)) static int FUNC_11(network_socket *VAR_1,
  const char *VAR_2, gsize VAR_3,
  guint VAR_4,
  const gchar *VAR_5,
  gboolean VAR_6) {
 GString *VAR_7;
 network_mysqld_err_packet_t *VAR_8;

 VAR_7 = FUNC_3(10 + VAR_3);

 VAR_8 = VAR_6 ? FUNC_5() : FUNC_6();
 VAR_8->errcode = VAR_4;
 if (VAR_2) FUNC_1(VAR_8->errmsg, VAR_2, VAR_3);
 if (VAR_5) FUNC_1(VAR_8->sqlstate, VAR_5, FUNC_10(VAR_5));

 FUNC_7(VAR_7, VAR_8);

 FUNC_8(VAR_1, VAR_1->send_queue, FUNC_0(VAR_7));
 FUNC_9(VAR_1);

 FUNC_4(VAR_8);
 FUNC_2(VAR_7, VAR_0);

 return 0;
}
