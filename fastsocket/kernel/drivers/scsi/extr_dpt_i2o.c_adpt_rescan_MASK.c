
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ulong ;
typedef scalar_t__ s32 ;
struct TYPE_7__ {TYPE_1__* host; } ;
typedef TYPE_2__ adpt_hba ;
struct TYPE_6__ {int host_lock; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static s32 FUNC_4(adpt_hba* VAR_0)
{
 s32 VAR_1;
 ulong VAR_2 = 0;

 if(VAR_0->host)
  FUNC_2(VAR_0->host->host_lock, VAR_2);
 if ((VAR_1=FUNC_0(VAR_0)) < 0)
  goto out;
 if ((VAR_1=FUNC_1(VAR_0)) < 0)
  goto out;
 VAR_1 = 0;
out: if(VAR_0->host)
  FUNC_3(VAR_0->host->host_lock, VAR_2);
 return VAR_1;
}
