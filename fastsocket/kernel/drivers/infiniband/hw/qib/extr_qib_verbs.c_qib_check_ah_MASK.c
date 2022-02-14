
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_device {int phys_port_cnt; } ;
struct TYPE_2__ {scalar_t__ sgid_index; } ;
struct ib_ah_attr {scalar_t__ dlid; int ah_flags; int port_num; scalar_t__ static_rate; int sl; TYPE_1__ grh; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

int FUNC_1(struct ib_device *VAR_6, struct ib_ah_attr *VAR_7)
{

 if (VAR_7->dlid >= VAR_4 &&
     VAR_7->dlid != VAR_5 &&
     !(VAR_7->ah_flags & VAR_1))
  goto bail;
 if ((VAR_7->ah_flags & VAR_1) &&
     VAR_7->grh.sgid_index >= VAR_3)
  goto bail;
 if (VAR_7->dlid == 0)
  goto bail;
 if (VAR_7->port_num < 1 ||
     VAR_7->port_num > VAR_6->phys_port_cnt)
  goto bail;
 if (VAR_7->static_rate != VAR_2 &&
     FUNC_0(VAR_7->static_rate) < 0)
  goto bail;
 if (VAR_7->sl > 15)
  goto bail;
 return 0;
bail:
 return -VAR_0;
}
