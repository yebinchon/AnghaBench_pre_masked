
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct efx_nic {int net_dev; } ;
struct efx_mcdi_iface {scalar_t__ mode; int resprc; size_t resplen; int iface_lock; int credits; int seqno; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 struct efx_mcdi_iface* FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (struct efx_nic*) ;
 int FUNC_3 (struct efx_nic*,int *,int) ;
 int FUNC_4 (struct efx_nic*) ;
 int FUNC_5 (struct efx_nic*) ;
 int FUNC_6 (struct efx_mcdi_iface*) ;
 scalar_t__ FUNC_7 (struct efx_nic*) ;
 int FUNC_8 (struct efx_nic*,int ) ;
 int VAR_7 ;
 int FUNC_9 (size_t,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct efx_nic*,int ,int ,char*,unsigned int,int,int) ;
 int FUNC_12 (struct efx_nic*,int ,int ,char*,int,...) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

int FUNC_15(struct efx_nic *VAR_8, unsigned VAR_9, size_t VAR_10,
   u8 *VAR_11, size_t VAR_12, size_t *VAR_13)
{
 struct efx_mcdi_iface *VAR_14 = FUNC_1(VAR_8);
 int VAR_15;

 FUNC_0(FUNC_7(VAR_8) < VAR_0);

 if (VAR_14->mode == VAR_3)
  VAR_15 = FUNC_4(VAR_8);
 else
  VAR_15 = FUNC_2(VAR_8);

 if (VAR_15 != 0) {




  FUNC_13(&VAR_14->iface_lock);
  ++VAR_14->seqno;
  ++VAR_14->credits;
  FUNC_14(&VAR_14->iface_lock);

  FUNC_12(VAR_8, VAR_7, VAR_8->net_dev,
     "MC command 0x%x inlen %d mode %d timed out\n",
     VAR_9, (int)VAR_10, VAR_14->mode);
 } else {
  size_t VAR_16;





  FUNC_13(&VAR_14->iface_lock);
  VAR_15 = -VAR_14->resprc;
  VAR_16 = VAR_14->resplen;
  FUNC_14(&VAR_14->iface_lock);

  if (VAR_15 == 0) {
   FUNC_3(VAR_8, VAR_11,
      FUNC_9(VAR_12, VAR_14->resplen + 3) & ~0x3);
   if (VAR_13 != ((void*)0))
    *VAR_13 = VAR_16;
  } else if (VAR_9 == VAR_5 && VAR_15 == -VAR_2)
   ;
  else if (VAR_15 == -VAR_2 || VAR_15 == -VAR_1) {
   FUNC_12(VAR_8, VAR_7, VAR_8->net_dev, "MC fatal error %d\n",
      -VAR_15);
   FUNC_8(VAR_8, VAR_6);
  } else
   FUNC_11(VAR_8, VAR_7, VAR_8->net_dev,
      "MC command 0x%x inlen %d failed rc=%d\n",
      VAR_9, (int)VAR_10, -VAR_15);

  if (VAR_15 == -VAR_2 || VAR_15 == -VAR_1) {
   FUNC_10(VAR_4);
   FUNC_5(VAR_8);
  }
 }

 FUNC_6(VAR_14);
 return VAR_15;
}
