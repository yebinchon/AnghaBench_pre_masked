
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int vm_flags; int vm_parm; int vm_parm_len; int load_parm; } ;
struct TYPE_10__ {TYPE_2__ ccw; } ;
struct TYPE_8__ {int flags; } ;
struct ipl_parameter_block {TYPE_3__ ipl_info; TYPE_1__ hdr; } ;
struct TYPE_11__ {int vm_flags; int * vm_parm; int vm_parm_len; } ;
struct TYPE_12__ {TYPE_4__ ccw; } ;
struct TYPE_14__ {TYPE_5__ ipl_info; } ;
struct TYPE_13__ {int loadparm; scalar_t__ is_valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_7__ VAR_6 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ,int,int ) ;
 TYPE_6__ VAR_7 ;

__attribute__((used)) static void FUNC_2(struct ipl_parameter_block *VAR_8)
{


 if (VAR_7.is_valid)
  FUNC_0(VAR_8->ipl_info.ccw.load_parm,
    &VAR_7.loadparm, VAR_3);
 else

  FUNC_1(VAR_8->ipl_info.ccw.load_parm, 0x40, VAR_3);
 VAR_8->hdr.flags = VAR_0;


 if (VAR_4 && VAR_5 &&
     (VAR_6.ipl_info.ccw.vm_flags & VAR_2)) {

  VAR_8->ipl_info.ccw.vm_flags |= VAR_2;
  VAR_8->ipl_info.ccw.vm_parm_len =
     VAR_6.ipl_info.ccw.vm_parm_len;
  FUNC_0(VAR_8->ipl_info.ccw.vm_parm,
         VAR_6.ipl_info.ccw.vm_parm, VAR_1);
 }
}
