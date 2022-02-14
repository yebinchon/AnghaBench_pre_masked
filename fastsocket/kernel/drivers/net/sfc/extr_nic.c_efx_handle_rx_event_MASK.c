
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct efx_rx_queue {unsigned int removed_count; unsigned int scatter_n; unsigned int ptr_mask; } ;
struct efx_nic {int reset_pending; } ;
struct efx_channel {void* channel; int irq_mod_score; int n_rx_mcast_mismatch; struct efx_nic* efx; } ;
typedef int efx_qword_t ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int const,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int) ;
 struct efx_rx_queue* FUNC_3 (struct efx_channel*) ;
 int FUNC_4 (struct efx_rx_queue*,unsigned int) ;
 int FUNC_5 (struct efx_rx_queue*,int const*) ;
 int FUNC_6 (struct efx_rx_queue*,int,int,unsigned int,int ) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void
FUNC_9(struct efx_channel *VAR_12, const efx_qword_t *VAR_13)
{
 unsigned int VAR_14, VAR_15;
 unsigned int VAR_16, VAR_17;
 unsigned VAR_18;
 bool VAR_19, VAR_20, VAR_21;
 u16 VAR_22;
 struct efx_rx_queue *VAR_23;
 struct efx_nic *VAR_24 = VAR_12->efx;

 if (FUNC_8(FUNC_0(VAR_24->reset_pending)))
  return;

 VAR_21 = FUNC_1(*VAR_13, VAR_6);
 VAR_20 = FUNC_1(*VAR_13, VAR_11);
 FUNC_2(FUNC_1(*VAR_13, VAR_10) !=
  VAR_12->channel);

 VAR_23 = FUNC_3(VAR_12);

 VAR_14 = FUNC_1(*VAR_13, VAR_4);
 VAR_18 = ((VAR_23->removed_count + VAR_23->scatter_n) &
   VAR_23->ptr_mask);


 if (FUNC_8(VAR_14 != VAR_18) ||
     FUNC_8(VAR_20 != (VAR_23->scatter_n == 0))) {
  if (VAR_14 != VAR_18 &&
      !FUNC_4(VAR_23, VAR_14))
   return;


  if (VAR_23->scatter_n) {
   FUNC_6(
    VAR_23,
    VAR_23->removed_count & VAR_23->ptr_mask,
    VAR_23->scatter_n, 0, VAR_1);
   VAR_23->removed_count += VAR_23->scatter_n;
   VAR_23->scatter_n = 0;
  }


  if (VAR_14 != VAR_18)
   return;


  if (!VAR_20) {
   FUNC_6(
    VAR_23,
    VAR_23->removed_count & VAR_23->ptr_mask,
    1, 0, VAR_1);
   ++VAR_23->removed_count;
   return;
  }
 }

 ++VAR_23->scatter_n;
 if (VAR_21)
  return;

 VAR_15 = FUNC_1(*VAR_13, VAR_3);
 VAR_19 = FUNC_1(*VAR_13, VAR_9);
 VAR_16 = FUNC_1(*VAR_13, VAR_5);

 if (FUNC_7(VAR_19)) {



  VAR_22 = 0;
  switch (VAR_16) {
  case 129:
   VAR_22 |= VAR_2;

  case 128:
   VAR_22 |= VAR_0;

  case 130:
  case 131:
   break;
  }
 } else {
  VAR_22 = FUNC_5(VAR_23, VAR_13);
 }


 VAR_17 = FUNC_1(*VAR_13, VAR_8);
 if (VAR_17) {
  unsigned int VAR_25 =
   FUNC_1(*VAR_13, VAR_7);

  if (FUNC_8(!VAR_25)) {
   ++VAR_12->n_rx_mcast_mismatch;
   VAR_22 |= VAR_1;
  }
 }

 VAR_12->irq_mod_score += 2;


 FUNC_6(VAR_23,
        VAR_23->removed_count & VAR_23->ptr_mask,
        VAR_23->scatter_n, VAR_15, VAR_22);
 VAR_23->removed_count += VAR_23->scatter_n;
 VAR_23->scatter_n = 0;
}
