
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_cmd_buffer {int dummy; } ;
struct qeth_channel {int iob_lock; } ;


 struct qeth_cmd_buffer* FUNC_0 (struct qeth_channel*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static struct qeth_cmd_buffer *FUNC_3(struct qeth_channel *VAR_0)
{
 struct qeth_cmd_buffer *VAR_1 = ((void*)0);
 unsigned long VAR_2;

 FUNC_1(&VAR_0->iob_lock, VAR_2);
 VAR_1 = FUNC_0(VAR_0);
 FUNC_2(&VAR_0->iob_lock, VAR_2);
 return VAR_1;
}
