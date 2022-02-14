
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ulong ;
struct gdth_cmndinfo {scalar_t__ index; } ;
struct TYPE_3__ {int smp_lock; struct gdth_cmndinfo* cmndinfo; } ;
typedef TYPE_1__ gdth_ha_str ;


 int VAR_0 ;
 int FUNC_0 (struct gdth_cmndinfo*,int ,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static struct gdth_cmndinfo *FUNC_3(gdth_ha_str *VAR_1)
{
 struct gdth_cmndinfo *VAR_2 = ((void*)0);
 ulong VAR_3;
 int VAR_4;

 FUNC_1(&VAR_1->smp_lock, VAR_3);

 for (VAR_4=0; VAR_4<VAR_0; ++VAR_4) {
  if (VAR_1->cmndinfo[VAR_4].index == 0) {
   VAR_2 = &VAR_1->cmndinfo[VAR_4];
   FUNC_0(VAR_2, 0, sizeof(*VAR_2));
   VAR_2->index = VAR_4+1;
   break;
  }
 }

 FUNC_2(&VAR_1->smp_lock, VAR_3);

 return VAR_2;
}
