
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int method; scalar_t__ mgmt_class; int attr_mod; } ;
struct ib_mad {TYPE_1__ mad_hdr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_0(struct ib_mad *VAR_4)
{
 return ((VAR_4->mad_hdr.method & VAR_2) ||
  (VAR_4->mad_hdr.method == VAR_3) ||
  ((VAR_4->mad_hdr.mgmt_class == VAR_1) &&
   (VAR_4->mad_hdr.attr_mod & VAR_0)));
}
