
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qeth_cmd_buffer {int data; } ;
struct TYPE_2__ {int ulp_connection_r; int cm_connection_r; } ;
struct qeth_card {TYPE_1__ token; int write; } ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (struct qeth_card*,int ,struct qeth_cmd_buffer*,int *,int *) ;
 struct qeth_cmd_buffer* FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct qeth_card *VAR_4)
{
 int VAR_5;
 struct qeth_cmd_buffer *VAR_6;

 FUNC_0(VAR_3, 2, "dmact");

 VAR_6 = FUNC_5(&VAR_4->write);
 FUNC_3(VAR_6->data, VAR_0, VAR_1);

 FUNC_3(FUNC_2(VAR_6->data),
        &VAR_4->token.cm_connection_r, VAR_2);
 FUNC_3(FUNC_1(VAR_6->data),
        &VAR_4->token.ulp_connection_r, VAR_2);
 VAR_5 = FUNC_4(VAR_4, VAR_1, VAR_6, ((void*)0), ((void*)0));
 return VAR_5;
}
