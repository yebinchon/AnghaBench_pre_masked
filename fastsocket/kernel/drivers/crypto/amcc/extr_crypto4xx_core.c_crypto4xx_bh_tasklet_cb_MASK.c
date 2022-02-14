
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct pd_uinfo {scalar_t__ state; } ;
struct device {int dummy; } ;
struct crypto4xx_core_device {TYPE_3__* dev; } ;
struct TYPE_5__ {scalar_t__ pe_done; int host_ready; } ;
struct TYPE_6__ {TYPE_1__ bf; } ;
struct ce_pd {TYPE_2__ pd_ctl; } ;
struct TYPE_7__ {scalar_t__ pdr_head; scalar_t__ pdr_tail; struct ce_pd* pdr; struct pd_uinfo* pdr_uinfo; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_3__*,int) ;
 struct crypto4xx_core_device* FUNC_2 (struct device*) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_2)
{
 struct device *VAR_3 = (struct device *)VAR_2;
 struct crypto4xx_core_device *VAR_4 = FUNC_2(VAR_3);
 struct pd_uinfo *VAR_5;
 struct ce_pd *VAR_6;
 u32 VAR_7;

 while (VAR_4->dev->pdr_head != VAR_4->dev->pdr_tail) {
  VAR_7 = VAR_4->dev->pdr_tail;
  VAR_5 = VAR_4->dev->pdr_uinfo +
   sizeof(struct pd_uinfo)*VAR_7;
  VAR_6 = VAR_4->dev->pdr + sizeof(struct ce_pd) * VAR_7;
  if ((VAR_5->state == VAR_1) &&
       VAR_6->pd_ctl.bf.pe_done &&
       !VAR_6->pd_ctl.bf.host_ready) {
   VAR_6->pd_ctl.bf.pe_done = 0;
   FUNC_0(VAR_4->dev, VAR_7);
   FUNC_1(VAR_4->dev, VAR_7);
   VAR_5->state = VAR_0;
  } else {

   break;
  }
 }
}
