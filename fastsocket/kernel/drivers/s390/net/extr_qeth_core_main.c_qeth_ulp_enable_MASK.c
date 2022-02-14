
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qeth_cmd_buffer {int data; } ;
struct TYPE_6__ {scalar_t__ type; char* portname; scalar_t__ portno; } ;
struct TYPE_5__ {char cm_connection_r; char ulp_filter_w; } ;
struct TYPE_4__ {scalar_t__ layer2; } ;
struct qeth_card {TYPE_3__ info; TYPE_2__ token; TYPE_1__ options; int write; } ;
typedef scalar_t__ __u8 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int,char*) ;
 int VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (struct qeth_card*,int,struct qeth_cmd_buffer*,int ,int *) ;
 int VAR_8 ;
 struct qeth_cmd_buffer* FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct qeth_card *VAR_9)
{
 int VAR_10;
 char VAR_11;
 struct qeth_cmd_buffer *VAR_12;


 FUNC_0(VAR_5, 2, "ulpenabl");

 VAR_12 = FUNC_8(&VAR_9->write);
 FUNC_6(VAR_12->data, VAR_6, VAR_7);

 *(FUNC_3(VAR_12->data)) =
  (__u8) VAR_9->info.portno;
 if (VAR_9->options.layer2)
  if (VAR_9->info.type == VAR_0)
   VAR_11 = VAR_3;
  else
   VAR_11 = VAR_2;
 else
  VAR_11 = VAR_4;

 FUNC_6(FUNC_5(VAR_12->data), &VAR_11, 1);
 FUNC_6(FUNC_1(VAR_12->data),
        &VAR_9->token.cm_connection_r, VAR_1);
 FUNC_6(FUNC_2(VAR_12->data),
        &VAR_9->token.ulp_filter_w, VAR_1);
 FUNC_6(FUNC_4(VAR_12->data),
        VAR_9->info.portname, 9);
 VAR_10 = FUNC_7(VAR_9, VAR_7, VAR_12,
        VAR_8, ((void*)0));
 return VAR_10;

}
