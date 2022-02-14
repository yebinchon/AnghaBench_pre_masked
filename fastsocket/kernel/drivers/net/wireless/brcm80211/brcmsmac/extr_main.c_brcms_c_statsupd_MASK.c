
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct macstat {int dummy; } ;
struct brcms_c_info {TYPE_4__* hw; TYPE_3__* pub; TYPE_2__* core; } ;
struct TYPE_8__ {scalar_t__* di; int d11core; } ;
struct TYPE_7__ {int unit; int up; } ;
struct TYPE_6__ {TYPE_1__* macstat_snapshot; } ;
struct TYPE_5__ {scalar_t__* txfunfl; scalar_t__ rxf0ovfl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,int ,struct macstat*,int,int ) ;
 int FUNC_1 (int ,char*,int ,scalar_t__,...) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct brcms_c_info *VAR_3)
{
 int VAR_4;
 struct macstat VAR_5;







 if (!VAR_3->pub->up)
  return;
 FUNC_0(VAR_3->hw, VAR_0, &VAR_5,
    sizeof(struct macstat), VAR_2);
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (VAR_3->hw->di[VAR_4])
   FUNC_2(VAR_3->hw->di[VAR_4]);
 }
}
