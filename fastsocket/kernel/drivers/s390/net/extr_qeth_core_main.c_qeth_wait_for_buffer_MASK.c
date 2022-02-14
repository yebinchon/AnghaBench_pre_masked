
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_cmd_buffer {int dummy; } ;
struct qeth_channel {int wait_q; } ;


 struct qeth_cmd_buffer* FUNC_0 (struct qeth_channel*) ;
 int FUNC_1 (int ,int ) ;

struct qeth_cmd_buffer *FUNC_2(struct qeth_channel *VAR_0)
{
 struct qeth_cmd_buffer *VAR_1;
 FUNC_1(VAR_0->wait_q,
     ((VAR_1 = FUNC_0(VAR_0)) != ((void*)0)));
 return VAR_1;
}
