
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xiocb_exitstat {int dummy; } ;
struct TYPE_3__ {int status; } ;
struct TYPE_4__ {TYPE_1__ xiocb_exitstat; } ;
struct cfe_xiocb {int xiocb_status; int xiocb_psize; TYPE_2__ plist; int xiocb_flags; scalar_t__ xiocb_handle; int xiocb_fcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cfe_xiocb*) ;

int FUNC_1(int VAR_2, int VAR_3)
{
 struct cfe_xiocb VAR_4;

 VAR_4.xiocb_fcode = VAR_0;
 VAR_4.xiocb_status = 0;
 VAR_4.xiocb_handle = 0;
 VAR_4.xiocb_flags = VAR_2 ? VAR_1 : 0;
 VAR_4.xiocb_psize = sizeof(struct xiocb_exitstat);
 VAR_4.plist.xiocb_exitstat.status = VAR_3;

 FUNC_0(&VAR_4);

 return VAR_4.xiocb_status;
}
