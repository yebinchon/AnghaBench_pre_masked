
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ flags_32bit; } ;
struct TYPE_4__ {TYPE_3__ data; } ;
struct TYPE_5__ {TYPE_1__ setassparms; } ;
struct qeth_ipa_cmd {TYPE_2__ data; } ;
struct qeth_cmd_buffer {scalar_t__ data; } ;
struct qeth_card {int dummy; } ;
typedef scalar_t__ __u32 ;
typedef int __u16 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int,char*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*,void*,int) ;
 int FUNC_2 (struct qeth_card*,struct qeth_cmd_buffer*,int (*) (struct qeth_card*,struct qeth_reply*,unsigned long),void*) ;

__attribute__((used)) static int FUNC_3(struct qeth_card *VAR_2,
 struct qeth_cmd_buffer *VAR_3, __u16 VAR_4, long VAR_5,
 int (*VAR_6)(struct qeth_card *, struct qeth_reply *,
  unsigned long),
 void *VAR_7)
{
 int VAR_8;
 struct qeth_ipa_cmd *VAR_9;

 FUNC_0(VAR_1, 4, "sendassp");

 VAR_9 = (struct qeth_ipa_cmd *)(VAR_3->data+VAR_0);
 if (VAR_4 <= sizeof(__u32))
  VAR_9->data.setassparms.data.flags_32bit = (__u32) VAR_5;
 else
  FUNC_1(&VAR_9->data.setassparms.data, (void *) VAR_5, VAR_4);

 VAR_8 = FUNC_2(VAR_2, VAR_3, VAR_6, VAR_7);
 return VAR_8;
}
