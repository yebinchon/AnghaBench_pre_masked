
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mpc_status ;
struct TYPE_4__ {int bits; scalar_t__ samples; } ;
typedef TYPE_1__ mpc_frame_info ;
typedef int mpc_demux ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;

mpc_status FUNC_2(mpc_demux * VAR_0, mpc_frame_info * VAR_1) {
 for(;;) {

  mpc_status VAR_2 = FUNC_1(VAR_0, VAR_1);
  if (FUNC_0(VAR_2))
   VAR_1->bits = -1;

  if (VAR_1->bits == -1 || VAR_1->samples > 0)
   return VAR_2;
 }
}
