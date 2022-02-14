
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qeth_reply {int dummy; } ;
struct qeth_cmd_buffer {scalar_t__ rc; int data; } ;
struct TYPE_6__ {scalar_t__ link_type; int type; scalar_t__ max_mtu; scalar_t__ initial_mtu; } ;
struct TYPE_5__ {scalar_t__ in_buf_size; } ;
struct TYPE_4__ {scalar_t__ ulp_filter_r; } ;
struct qeth_card {TYPE_3__ info; TYPE_2__ qdio; TYPE_1__ token; } ;
typedef scalar_t__ __u8 ;
typedef scalar_t__ __u16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (int ,int,char*,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_5 ;
 int FUNC_6 (scalar_t__*,int ,int) ;
 scalar_t__ FUNC_7 (struct qeth_card*) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct qeth_card *VAR_6, struct qeth_reply *VAR_7,
  unsigned long VAR_8)
{

 __u16 VAR_9, VAR_10;
 __u16 VAR_11;
 __u8 VAR_12;
 struct qeth_cmd_buffer *VAR_13;

 FUNC_0(VAR_5, 2, "ulpenacb");

 VAR_13 = (struct qeth_cmd_buffer *) VAR_8;
 FUNC_6(&VAR_6->token.ulp_filter_r,
        FUNC_3(VAR_13->data),
        VAR_4);
 if (FUNC_9(VAR_6->info.type)) {
  FUNC_6(&VAR_10, FUNC_5(VAR_13->data), 2);
  VAR_9 = FUNC_10(VAR_10);
  if (!VAR_9) {
   VAR_13->rc = -VAR_0;
   FUNC_1(VAR_5, 2, "  rc%d", VAR_13->rc);
   return 0;
  }
  VAR_6->info.max_mtu = VAR_9;
  VAR_6->info.initial_mtu = VAR_9;
  VAR_6->qdio.in_buf_size = VAR_9 + 2 * VAR_1;
 } else {
  VAR_6->info.initial_mtu = FUNC_7(VAR_6);
  VAR_6->info.max_mtu = FUNC_8(VAR_6->info.type);
  VAR_6->qdio.in_buf_size = VAR_2;
 }

 FUNC_6(&VAR_11, FUNC_2(VAR_13->data), 2);
 if (VAR_11 >= VAR_3) {
  FUNC_6(&VAR_12,
         FUNC_4(VAR_13->data), 1);
  VAR_6->info.link_type = VAR_12;
 } else
  VAR_6->info.link_type = 0;
 FUNC_1(VAR_5, 2, "link%d", VAR_12);
 FUNC_1(VAR_5, 2, "  rc%d", VAR_13->rc);
 return 0;
}
