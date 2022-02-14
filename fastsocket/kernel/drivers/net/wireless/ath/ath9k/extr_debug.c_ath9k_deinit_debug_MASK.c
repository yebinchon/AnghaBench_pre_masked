
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_softc {int * rfs_chan_spec_scan; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct ath_softc *VAR_1)
{
 if (FUNC_0(VAR_0) && VAR_1->rfs_chan_spec_scan) {
  FUNC_1(VAR_1->rfs_chan_spec_scan);
  VAR_1->rfs_chan_spec_scan = ((void*)0);
 }
}
