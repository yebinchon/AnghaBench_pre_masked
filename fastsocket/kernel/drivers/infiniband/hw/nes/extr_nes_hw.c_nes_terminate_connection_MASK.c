
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef unsigned long u64 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct nes_qp {int term_flags; int terminate_eventtype; int lock; scalar_t__ last_aeq; void* hw_tcp_state; void* hw_iwarp_state; } ;
struct nes_hw_aeqe {int * aeqe_words; } ;
struct nes_device {int iw_status; struct nes_adapter* nesadapter; } ;
struct nes_adapter {scalar_t__ send_term_ok; scalar_t__* qp_table; } ;
typedef enum ib_event_type { ____Placeholder_ib_event_type } ib_event_type ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (struct nes_qp*,scalar_t__,int) ;
 int FUNC_3 (struct nes_qp*) ;
 int FUNC_4 (struct nes_device*,struct nes_qp*,int,int,int ) ;
 int FUNC_5 (struct nes_qp*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct nes_device *VAR_13, struct nes_qp *VAR_14,
   struct nes_hw_aeqe *VAR_15, enum ib_event_type VAR_16)
{
 u64 VAR_17;
 unsigned long VAR_18;
 u32 VAR_19;
 u16 VAR_20;
 u8 VAR_21;
 u8 VAR_22;
 u32 VAR_23 = 0;
 u32 VAR_24 = VAR_7 |
      VAR_8;
 struct nes_adapter *VAR_25 = VAR_13->nesadapter;

 if (VAR_14->term_flags & VAR_12)
  return;

 VAR_19 = FUNC_1(VAR_15->aeqe_words[VAR_3]);
 VAR_21 = (VAR_19 & VAR_4) >> VAR_5;
 VAR_22 = (VAR_19 & VAR_1) >> VAR_2;
 VAR_20 = (u16)VAR_19;

 VAR_17 = (unsigned long)VAR_25->qp_table[FUNC_1(
  VAR_15->aeqe_words[VAR_0]) - VAR_10];
 if (!VAR_17) {
  FUNC_0(!VAR_17);
  return;
 }

 VAR_14 = (struct nes_qp *)(unsigned long)VAR_17;
 FUNC_6(&VAR_14->lock, VAR_18);
 VAR_14->hw_iwarp_state = VAR_22;
 VAR_14->hw_tcp_state = VAR_21;
 VAR_14->last_aeq = VAR_20;
 VAR_14->terminate_eventtype = VAR_16;
 FUNC_7(&VAR_14->lock, VAR_18);

 if (VAR_25->send_term_ok)
  VAR_23 = FUNC_2(VAR_14, VAR_20, VAR_19);
 else
  VAR_24 |= VAR_9;

 if (!VAR_13->iw_status) {
  VAR_14->term_flags = VAR_11;
  FUNC_4(VAR_13, VAR_14, VAR_6, 0, 0);
  FUNC_3(VAR_14);
 } else {
  FUNC_5(VAR_14);
  VAR_14->term_flags |= VAR_12;
  FUNC_4(VAR_13, VAR_14, VAR_24, VAR_23, 0);
 }
}
