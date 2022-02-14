
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qeth_reply {int dummy; } ;
struct qeth_cmd_buffer {int rc; int data; } ;
struct TYPE_2__ {int cm_connection_r; } ;
struct qeth_card {TYPE_1__ token; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,char*) ;
 int FUNC_2 (int ,int,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct qeth_card *VAR_2, struct qeth_reply *VAR_3,
  unsigned long VAR_4)
{

 struct qeth_cmd_buffer *VAR_5;

 FUNC_1(VAR_1, 2, "cmsetpcb");

 VAR_5 = (struct qeth_cmd_buffer *) VAR_4;
 FUNC_3(&VAR_2->token.cm_connection_r,
        FUNC_0(VAR_5->data),
        VAR_0);
 FUNC_2(VAR_1, 2, "  rc%d", VAR_5->rc);
 return 0;
}
