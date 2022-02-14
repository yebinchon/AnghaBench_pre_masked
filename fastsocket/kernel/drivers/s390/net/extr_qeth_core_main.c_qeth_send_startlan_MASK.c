
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_cmd_buffer {int dummy; } ;
struct qeth_card {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,char*) ;
 int VAR_1 ;
 struct qeth_cmd_buffer* FUNC_1 (struct qeth_card*,int ,int ) ;
 int FUNC_2 (struct qeth_card*,struct qeth_cmd_buffer*,int *,int *) ;

int FUNC_3(struct qeth_card *VAR_2)
{
 int VAR_3;
 struct qeth_cmd_buffer *VAR_4;

 FUNC_0(VAR_1, 2, "strtlan");

 VAR_4 = FUNC_1(VAR_2, VAR_0, 0);
 VAR_3 = FUNC_2(VAR_2, VAR_4, ((void*)0), ((void*)0));
 return VAR_3;
}
