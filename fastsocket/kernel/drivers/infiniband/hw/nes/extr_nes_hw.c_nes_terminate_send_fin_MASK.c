
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct nes_qp {int lock; scalar_t__ last_aeq; void* hw_tcp_state; void* hw_iwarp_state; } ;
struct nes_hw_aeqe {int * aeqe_words; } ;
struct nes_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nes_device*,struct nes_qp*,int,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct nes_device *VAR_7,
     struct nes_qp *VAR_8, struct nes_hw_aeqe *VAR_9)
{
 u32 VAR_10;
 u16 VAR_11;
 u8 VAR_12;
 u8 VAR_13;
 unsigned long VAR_14;

 VAR_10 = FUNC_0(VAR_9->aeqe_words[VAR_2]);
 VAR_12 = (VAR_10 & VAR_3) >> VAR_4;
 VAR_13 = (VAR_10 & VAR_0) >> VAR_1;
 VAR_11 = (u16)VAR_10;

 FUNC_2(&VAR_8->lock, VAR_14);
 VAR_8->hw_iwarp_state = VAR_13;
 VAR_8->hw_tcp_state = VAR_12;
 VAR_8->last_aeq = VAR_11;
 FUNC_3(&VAR_8->lock, VAR_14);


 FUNC_1(VAR_7, VAR_8, VAR_5 |
  VAR_6, 0, 0);
}
