
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bfa_ioc {int port_id; } ;


 scalar_t__ BFI_IOC_TRC_OFF ;
 int BNA_DBG_FWTRC_LEN ;
 int bfa_nw_ioc_smem_read (struct bfa_ioc*,void*,scalar_t__,int) ;

int
bfa_nw_ioc_debug_fwtrc(struct bfa_ioc *ioc, void *trcdata, int *trclen)
{
 u32 loff = BFI_IOC_TRC_OFF + BNA_DBG_FWTRC_LEN * ioc->port_id;
 int tlen, status = 0;

 tlen = *trclen;
 if (tlen > BNA_DBG_FWTRC_LEN)
  tlen = BNA_DBG_FWTRC_LEN;

 status = bfa_nw_ioc_smem_read(ioc, trcdata, loff, tlen);
 *trclen = tlen;
 return status;
}
