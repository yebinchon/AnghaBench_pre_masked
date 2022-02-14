
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* mpc_uint16_t ;
struct TYPE_3__ {void* peak_album; void* gain_album; void* peak_title; void* gain_title; } ;
typedef TYPE_1__ mpc_streaminfo ;
typedef int mpc_bits_reader ;


 int FUNC_0 (int *,int) ;

void FUNC_1(mpc_streaminfo* VAR_0, const mpc_bits_reader * VAR_1)
{
 mpc_bits_reader VAR_2 = *VAR_1;

 int VAR_3 = FUNC_0(&VAR_2, 8);
 if (VAR_3 != 1)
  return;
 VAR_0->gain_title = (mpc_uint16_t) FUNC_0(&VAR_2, 16);
 VAR_0->peak_title = (mpc_uint16_t) FUNC_0(&VAR_2, 16);
 VAR_0->gain_album = (mpc_uint16_t) FUNC_0(&VAR_2, 16);
 VAR_0->peak_album = (mpc_uint16_t) FUNC_0(&VAR_2, 16);
}
