
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {unsigned long data; scalar_t__ expires; int function; } ;
struct lcs_reply {void (* callback ) (struct lcs_card*,struct lcs_cmd*) ;int rc; int received; int wait_q; int list; struct lcs_card* card; } ;
struct lcs_cmd {scalar_t__ sequence_no; scalar_t__ return_code; } ;
struct lcs_card {int lancmd_timeout; int write; int lock; int lancmd_waiters; int sequence_no; } ;
struct lcs_buffer {int callback; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (int,int ,char*,int) ;
 int FUNC_2 (struct timer_list*) ;
 int FUNC_3 (struct timer_list*) ;
 int FUNC_4 (struct timer_list*) ;
 scalar_t__ VAR_3 ;
 struct lcs_reply* FUNC_5 (struct lcs_cmd*) ;
 int VAR_4 ;
 int FUNC_6 (struct lcs_reply*) ;
 int FUNC_7 (int *,struct lcs_buffer*) ;
 int VAR_5 ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int VAR_6 ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static int
FUNC_12(struct lcs_card *VAR_7, struct lcs_buffer *VAR_8,
  void (*VAR_9)(struct lcs_card *, struct lcs_cmd *))
{
 struct lcs_reply *VAR_10;
 struct lcs_cmd *VAR_11;
 struct timer_list VAR_12;
 unsigned long VAR_13;
 int VAR_14;

 FUNC_0(4, VAR_6, "sendcmd");
 VAR_11 = (struct lcs_cmd *) VAR_8->data;
 VAR_11->return_code = 0;
 VAR_11->sequence_no = VAR_7->sequence_no++;
 VAR_10 = FUNC_5(VAR_11);
 if (!VAR_10)
  return -VAR_1;
 VAR_10->callback = VAR_9;
 VAR_10->card = VAR_7;
 FUNC_9(&VAR_7->lock, VAR_13);
 FUNC_8(&VAR_10->list, &VAR_7->lancmd_waiters);
 FUNC_10(&VAR_7->lock, VAR_13);

 VAR_8->callback = VAR_5;
 VAR_14 = FUNC_7(&VAR_7->write, VAR_8);
 if (VAR_14)
  return VAR_14;
 FUNC_4(&VAR_12);
 VAR_12.function = VAR_4;
 VAR_12.data = (unsigned long) VAR_10;
 VAR_12.expires = VAR_3 + VAR_2*VAR_7->lancmd_timeout;
 FUNC_2(&VAR_12);
 FUNC_11(VAR_10->wait_q, VAR_10->received);
 FUNC_3(&VAR_12);
 FUNC_1(4, VAR_6, "rc:%d",VAR_10->rc);
 VAR_14 = VAR_10->rc;
 FUNC_6(VAR_10);
 return VAR_14 ? -VAR_0 : 0;
}
