
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_ipacmd_setadpparms {int dummy; } ;
struct qeth_cmd_buffer {int dummy; } ;
struct qeth_card {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,char*) ;
 int VAR_1 ;
 struct qeth_cmd_buffer* FUNC_1 (struct qeth_card*,int ,int) ;
 int VAR_2 ;
 int FUNC_2 (struct qeth_card*,struct qeth_cmd_buffer*,int ,int *) ;

int FUNC_3(struct qeth_card *VAR_3)
{
 int VAR_4;
 struct qeth_cmd_buffer *VAR_5;

 FUNC_0(VAR_1, 3, "queryadp");
 VAR_5 = FUNC_1(VAR_3, VAR_0,
       sizeof(struct qeth_ipacmd_setadpparms));
 VAR_4 = FUNC_2(VAR_3, VAR_5, VAR_2, ((void*)0));
 return VAR_4;
}
