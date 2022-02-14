
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xiocb_inpstat {int dummy; } ;
struct TYPE_3__ {int inp_status; } ;
struct TYPE_4__ {TYPE_1__ xiocb_inpstat; } ;
struct cfe_xiocb {scalar_t__ xiocb_status; int xiocb_handle; int xiocb_psize; TYPE_2__ plist; scalar_t__ xiocb_flags; int xiocb_fcode; } ;


 int VAR_0 ;
 int FUNC_0 (struct cfe_xiocb*) ;

int FUNC_1(int VAR_1)
{
 struct cfe_xiocb VAR_2;

 VAR_2.xiocb_fcode = VAR_0;
 VAR_2.xiocb_status = 0;
 VAR_2.xiocb_handle = VAR_1;
 VAR_2.xiocb_flags = 0;
 VAR_2.xiocb_psize = sizeof(struct xiocb_inpstat);
 VAR_2.plist.xiocb_inpstat.inp_status = 0;

 FUNC_0(&VAR_2);

 if (VAR_2.xiocb_status < 0)
  return VAR_2.xiocb_status;
 return VAR_2.plist.xiocb_inpstat.inp_status;
}
