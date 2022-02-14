
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct efx_vf {unsigned int index; scalar_t__ evq0_count; int buftbl_base; int rxq_retry_count; int rxq_retry_mask; int flush_waitq; scalar_t__ txq_count; scalar_t__ rxq_count; int rxq_mask; int txq_mask; struct efx_nic* efx; } ;
struct efx_nic {int dummy; } ;
typedef int efx_oword_t ;
typedef int __le32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int,int ,unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (struct efx_nic*,int ,int *,unsigned int,int *,int ,int *) ;
 int FUNC_8 (struct efx_nic*,int ,int *,unsigned int) ;
 unsigned int FUNC_9 (struct efx_nic*) ;
 int FUNC_10 (struct efx_vf*) ;
 int FUNC_11 (struct efx_vf*) ;
 int FUNC_12 (struct efx_nic*,int *,int ) ;
 int FUNC_13 (struct efx_nic*,int *,int ,unsigned int) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (unsigned int,int ) ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 (struct efx_nic*) ;
 int FUNC_19 (struct efx_nic*) ;
 scalar_t__ FUNC_20 (unsigned int,int ) ;
 scalar_t__ FUNC_21 (unsigned int,int ) ;
 unsigned int FUNC_22 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_23(struct efx_vf *VAR_16)
{
 struct efx_nic *VAR_17 = VAR_16->efx;
 efx_oword_t VAR_18;
 unsigned VAR_19 = FUNC_9(VAR_17);
 unsigned VAR_20 = VAR_1 + VAR_16->index * FUNC_9(VAR_17);
 unsigned VAR_21 = VAR_10;
 unsigned VAR_22, VAR_23;
 __le32 *VAR_24;
 int VAR_25;

 FUNC_0(VAR_15 >
       VAR_12);

 VAR_24 = FUNC_15(VAR_19 * sizeof(*VAR_24), VAR_9);
 if (VAR_24 == ((void*)0))
  return VAR_13;

 FUNC_16();
 FUNC_19(VAR_17);
 FUNC_17();


 VAR_23 = 0;
 for (VAR_22 = 0; VAR_22 < VAR_19; ++VAR_22) {
  if (FUNC_21(VAR_22, VAR_16->txq_mask)) {
   FUNC_1(VAR_18,
          VAR_3, 1,
          VAR_2,
          VAR_20 + VAR_22);
   FUNC_12(VAR_17, &VAR_18, VAR_4);
  }
  if (FUNC_21(VAR_22, VAR_16->rxq_mask))
   VAR_24[VAR_23++] = FUNC_6(VAR_20 + VAR_22);
 }

 FUNC_5(&VAR_16->rxq_retry_count, 0);
 while (VAR_21 && (VAR_16->rxq_count || VAR_16->txq_count)) {
  VAR_25 = FUNC_7(VAR_17, VAR_11, (u8 *)VAR_24,
      VAR_23 * sizeof(*VAR_24), ((void*)0), 0, ((void*)0));
  FUNC_3(VAR_25 < 0);

  VAR_21 = FUNC_22(VAR_16->flush_waitq,
          FUNC_11(VAR_16),
          VAR_21);
  VAR_23 = 0;
  for (VAR_22 = 0; VAR_22 < VAR_19; ++VAR_22) {
   if (FUNC_20(VAR_22, VAR_16->rxq_retry_mask)) {
    FUNC_4(&VAR_16->rxq_retry_count);
    VAR_24[VAR_23++] =
     FUNC_6(VAR_20 + VAR_22);
   }
  }
 }

 FUNC_16();
 FUNC_18(VAR_17);
 FUNC_17();


 FUNC_2(VAR_18);
 for (VAR_22 = 0; VAR_22 < VAR_19; ++VAR_22) {
  FUNC_13(VAR_17, &VAR_18, VAR_6,
     VAR_20 + VAR_22);
  FUNC_13(VAR_17, &VAR_18, VAR_8,
     VAR_20 + VAR_22);
  FUNC_13(VAR_17, &VAR_18, VAR_5,
     VAR_20 + VAR_22);
  FUNC_13(VAR_17, &VAR_18, VAR_7,
     VAR_20 + VAR_22);
 }
 FUNC_8(VAR_17, VAR_16->buftbl_base, ((void*)0),
         VAR_0 * FUNC_9(VAR_17));
 FUNC_14(VAR_24);
 FUNC_10(VAR_16);

 VAR_16->evq0_count = 0;

 return VAR_21 ? 0 : VAR_14;
}
