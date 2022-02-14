
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int64_t ;
struct TYPE_4__ {int max_bw; int eff_bw; } ;
struct TYPE_3__ {int max_bw; int eff_bw; } ;
struct ifnet {int if_baudrate; TYPE_2__ if_input_bw; TYPE_1__ if_output_bw; } ;
typedef int errno_t ;


 int VAR_0 ;

errno_t
FUNC_0(struct ifnet *VAR_1, u_int64_t VAR_2)
{
 if (VAR_1 == ((void*)0))
  return (VAR_0);

 VAR_1->if_output_bw.max_bw = VAR_1->if_input_bw.max_bw =
     VAR_1->if_output_bw.eff_bw = VAR_1->if_input_bw.eff_bw = VAR_2;


 VAR_1->if_baudrate = (VAR_2 > 0xFFFFFFFF) ? 0xFFFFFFFF : VAR_2;

 return (0);
}
