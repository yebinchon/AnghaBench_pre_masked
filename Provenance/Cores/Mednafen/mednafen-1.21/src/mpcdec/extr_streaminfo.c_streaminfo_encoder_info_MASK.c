
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int profile; int pns; int encoder_version; int profile_name; } ;
typedef TYPE_1__ mpc_streaminfo ;
typedef int mpc_bits_reader ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;

void FUNC_3(mpc_streaminfo* VAR_0, const mpc_bits_reader * VAR_1)
{
 mpc_bits_reader VAR_2 = *VAR_1;

 VAR_0->profile = FUNC_0(&VAR_2, 7) / 8.;
 VAR_0->profile_name = FUNC_2(VAR_0->profile);
 VAR_0->pns = FUNC_0(&VAR_2, 1);
 VAR_0->encoder_version = FUNC_0(&VAR_2, 8) << 24;
 VAR_0->encoder_version |= FUNC_0(&VAR_2, 8) << 16;
 VAR_0->encoder_version |= FUNC_0(&VAR_2, 8) << 8;


 FUNC_1(VAR_0);
}
