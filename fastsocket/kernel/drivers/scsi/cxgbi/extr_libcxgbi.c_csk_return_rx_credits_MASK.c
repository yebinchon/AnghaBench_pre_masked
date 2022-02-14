
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct cxgbi_sock {scalar_t__ state; scalar_t__ copied_seq; scalar_t__ rcv_wup; int tid; int flags; struct cxgbi_device* cdev; } ;
struct cxgbi_device {scalar_t__ rx_credit_thres; scalar_t__ rcv_win; scalar_t__ (* csk_send_rx_credits ) (struct cxgbi_sock*,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,struct cxgbi_sock*,scalar_t__,int ,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (struct cxgbi_sock*,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct cxgbi_sock *VAR_2, int VAR_3)
{
 struct cxgbi_device *VAR_4 = VAR_2->cdev;
 int VAR_5;
 u32 VAR_6;

 FUNC_0(1 << VAR_1,
  "csk 0x%p,%u,0x%lu,%u, seq %u, wup %u, thre %u, %u.\n",
  VAR_2, VAR_2->state, VAR_2->flags, VAR_2->tid, VAR_2->copied_seq,
  VAR_2->rcv_wup, VAR_4->rx_credit_thres,
  VAR_4->rcv_win);

 if (VAR_2->state != VAR_0)
  return;

 VAR_6 = VAR_2->copied_seq - VAR_2->rcv_wup;
 if (FUNC_2(!VAR_6))
  return;
 if (FUNC_2(VAR_4->rx_credit_thres == 0))
  return;

 VAR_5 = VAR_6 + 16384 >= VAR_4->rcv_win;
 if (VAR_5 || VAR_6 >= VAR_4->rx_credit_thres)
  VAR_2->rcv_wup += VAR_4->csk_send_rx_credits(VAR_2, VAR_6);
}
