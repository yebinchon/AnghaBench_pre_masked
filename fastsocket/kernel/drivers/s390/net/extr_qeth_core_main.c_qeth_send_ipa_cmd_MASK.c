
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qeth_cmd_buffer {int dummy; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_3__ {scalar_t__ layer2; } ;
struct qeth_card {TYPE_2__ info; TYPE_1__ options; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int,char*) ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct qeth_card*) ;
 int FUNC_2 (struct qeth_card*,struct qeth_cmd_buffer*,char) ;
 int FUNC_3 (struct qeth_card*) ;
 int FUNC_4 (struct qeth_card*,int ,struct qeth_cmd_buffer*,int (*) (struct qeth_card*,struct qeth_reply*,unsigned long),void*) ;

int FUNC_5(struct qeth_card *VAR_7, struct qeth_cmd_buffer *VAR_8,
  int (*VAR_9)(struct qeth_card *, struct qeth_reply*,
   unsigned long),
  void *VAR_10)
{
 int VAR_11;
 char VAR_12;

 FUNC_0(VAR_6, 4, "sendipa");

 if (VAR_7->options.layer2)
  if (VAR_7->info.type == VAR_2)
   VAR_12 = VAR_4;
  else
   VAR_12 = VAR_3;
 else
  VAR_12 = VAR_5;
 FUNC_2(VAR_7, VAR_8, VAR_12);
 VAR_11 = FUNC_4(VAR_7, VAR_1,
      VAR_8, VAR_9, VAR_10);
 if (VAR_11 == -VAR_0) {
  FUNC_1(VAR_7);
  FUNC_3(VAR_7);
 }
 return VAR_11;
}
