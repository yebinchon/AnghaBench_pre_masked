
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qeth_cmd_buffer {int data; } ;
struct TYPE_4__ {int cula; scalar_t__ unit_addr2; } ;
struct TYPE_3__ {scalar_t__ ulp_filter_r; scalar_t__ ulp_connection_w; scalar_t__ cm_connection_r; } ;
struct qeth_card {TYPE_2__ info; TYPE_1__ token; int write; } ;
struct ccw_dev_id {scalar_t__ devno; } ;
typedef scalar_t__ __u16 ;


 int FUNC_0 (struct qeth_card*) ;
 int FUNC_1 (int ,int,char*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int ,struct ccw_dev_id*) ;
 int FUNC_8 (int ,scalar_t__*,int) ;
 int FUNC_9 (struct qeth_card*,int,struct qeth_cmd_buffer*,int ,int *) ;
 int VAR_4 ;
 struct qeth_cmd_buffer* FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct qeth_card *VAR_5)
{
 int VAR_6;
 __u16 VAR_7;
 struct qeth_cmd_buffer *VAR_8;
 struct ccw_dev_id VAR_9;

 FUNC_1(VAR_1, 2, "ulpsetup");

 VAR_8 = FUNC_10(&VAR_5->write);
 FUNC_8(VAR_8->data, VAR_2, VAR_3);

 FUNC_8(FUNC_4(VAR_8->data),
        &VAR_5->token.cm_connection_r, VAR_0);
 FUNC_8(FUNC_2(VAR_8->data),
        &VAR_5->token.ulp_connection_w, VAR_0);
 FUNC_8(FUNC_5(VAR_8->data),
        &VAR_5->token.ulp_filter_r, VAR_0);

 FUNC_7(FUNC_0(VAR_5), &VAR_9);
 FUNC_8(FUNC_3(VAR_8->data), &VAR_9.devno, 2);
 VAR_7 = (VAR_5->info.cula << 8) + VAR_5->info.unit_addr2;
 FUNC_8(FUNC_6(VAR_8->data), &VAR_7, 2);
 VAR_6 = FUNC_9(VAR_5, VAR_3, VAR_8,
        VAR_4, ((void*)0));
 return VAR_6;
}
