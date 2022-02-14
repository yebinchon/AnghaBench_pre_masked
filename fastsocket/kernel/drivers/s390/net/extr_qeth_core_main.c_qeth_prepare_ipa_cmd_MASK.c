
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qeth_cmd_buffer {int data; } ;
struct TYPE_2__ {char ulp_connection_r; } ;
struct qeth_card {TYPE_1__ token; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,int) ;

void FUNC_3(struct qeth_card *VAR_3, struct qeth_cmd_buffer *VAR_4,
  char VAR_5)
{
 FUNC_2(VAR_4->data, VAR_0, VAR_1);
 FUNC_2(FUNC_1(VAR_4->data), &VAR_5, 1);
 FUNC_2(FUNC_0(VAR_4->data),
        &VAR_3->token.ulp_connection_r, VAR_2);
}
