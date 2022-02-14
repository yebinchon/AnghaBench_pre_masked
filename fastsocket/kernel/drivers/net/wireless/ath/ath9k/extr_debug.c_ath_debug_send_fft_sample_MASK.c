
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fft_sample_tlv {int length; } ;
struct ath_softc {int rfs_chan_spec_scan; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct fft_sample_tlv*,int) ;

void FUNC_2(struct ath_softc *VAR_0,
          struct fft_sample_tlv *VAR_1)
{
 int VAR_2;
 if (!VAR_0->rfs_chan_spec_scan)
  return;

 VAR_2 = FUNC_0(VAR_1->length) +
   sizeof(*VAR_1);
 FUNC_1(VAR_0->rfs_chan_spec_scan, VAR_1, VAR_2);
}
