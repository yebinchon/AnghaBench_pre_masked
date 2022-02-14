
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dumchannel {int channelnr; scalar_t__ dum_ch_ctrl; scalar_t__ dum_ch_conf; scalar_t__ dum_ch_max; scalar_t__ dum_ch_min; } ;


 int FUNC_0 (struct dumchannel) ;

__attribute__((used)) static void FUNC_1(int VAR_0)
{
 struct dumchannel VAR_1;

 VAR_1.channelnr = VAR_0;
 VAR_1.dum_ch_min = 0;
 VAR_1.dum_ch_max = 0;
 VAR_1.dum_ch_conf = 0;
 VAR_1.dum_ch_ctrl = 0;

 FUNC_0(VAR_1);
}
