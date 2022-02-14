
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_6__ {int nbchannel; } ;
struct capi_ctr {TYPE_1__ profile; scalar_t__ driverdata; } ;
struct TYPE_7__ {int level3cnt; int datablkcnt; int datablklen; } ;
typedef TYPE_2__ capi_register_params ;
struct TYPE_8__ {TYPE_4__* card; } ;
typedef TYPE_3__ avmctrl_info ;
struct TYPE_9__ {unsigned int port; int lock; } ;
typedef TYPE_4__ avmcard ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (unsigned int,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct capi_ctr *VAR_1,
    u16 VAR_2,
    capi_register_params *VAR_3)
{
 avmctrl_info *VAR_4 = (avmctrl_info *)(VAR_1->driverdata);
 avmcard *VAR_5 = VAR_4->card;
 unsigned int VAR_6 = VAR_5->port;
 unsigned long VAR_7;
 int VAR_8, VAR_9 = VAR_3->level3cnt;

 if (VAR_9 > 0) VAR_8 = VAR_9;
 else VAR_8 = VAR_1->profile.nbchannel * -VAR_9;
 if (VAR_8 == 0) VAR_8 = VAR_1->profile.nbchannel;

 FUNC_2(&VAR_5->lock, VAR_7);
 FUNC_0(VAR_6, VAR_0);
 FUNC_1(VAR_6, VAR_2);
 FUNC_1(VAR_6, 1024 * (VAR_8+1));
 FUNC_1(VAR_6, VAR_8);
 FUNC_1(VAR_6, VAR_3->datablkcnt);
 FUNC_1(VAR_6, VAR_3->datablklen);
 FUNC_3(&VAR_5->lock, VAR_7);
}
