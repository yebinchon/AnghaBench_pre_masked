
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct vnop_ioctl_args {int a_fflag; int a_command; scalar_t__ a_data; TYPE_1__* a_vp; int a_context; } ;
typedef int proc_t ;
typedef int dev_t ;
struct TYPE_6__ {int (* d_ioctl ) (int ,int ,scalar_t__,int ,int ) ;} ;
struct TYPE_5__ {int (* d_ioctl ) (int ,int ,scalar_t__,int ,int ) ;} ;
struct TYPE_4__ {int v_type; int v_specsize; int v_rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int ,int ,int ,int,int ) ;


 TYPE_3__* VAR_4 ;
 TYPE_2__* VAR_5 ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,scalar_t__,int ,int ) ;
 int FUNC_5 (int ,int ,scalar_t__,int ,int ) ;
 int FUNC_6 (int ) ;

int
FUNC_7(struct vnop_ioctl_args *VAR_6)
{
 proc_t VAR_7 = FUNC_6(VAR_6->a_context);
 dev_t VAR_8 = VAR_6->a_vp->v_rdev;
 int VAR_9 = 0;

 FUNC_1(FUNC_0(VAR_2, 0) | VAR_1,
  VAR_8, VAR_6->a_command, VAR_6->a_fflag, VAR_6->a_vp->v_type, 0);

 switch (VAR_6->a_vp->v_type) {

 case 128:
  VAR_9 = (*VAR_5[FUNC_2(VAR_8)].d_ioctl)(VAR_8, VAR_6->a_command, VAR_6->a_data,
             VAR_6->a_fflag, VAR_7);
  break;

 case 129:
  VAR_9 = (*VAR_4[FUNC_2(VAR_8)].d_ioctl)(VAR_8, VAR_6->a_command, VAR_6->a_data, VAR_6->a_fflag, VAR_7);
  if (!VAR_9 && VAR_6->a_command == VAR_3)
   VAR_6->a_vp->v_specsize = *(uint32_t *)VAR_6->a_data;
  break;

 default:
  FUNC_3("spec_ioctl");

 }
 FUNC_1(FUNC_0(VAR_2, 0) | VAR_0,
  VAR_8, VAR_6->a_command, VAR_6->a_fflag, VAR_9, 0);

 return (VAR_9);
}
