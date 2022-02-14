
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ mode; } ;
struct vc_data {scalar_t__ vc_mode; TYPE_1__ vt_mode; } ;
struct TYPE_4__ {struct vc_data* d; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 () ;
 TYPE_2__* VAR_4 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

int FUNC_2(int VAR_7)
{
 struct vc_data *VAR_8 = VAR_4[VAR_3].d;

 if (!FUNC_1(VAR_7) || VAR_5 ||
  (VAR_8->vt_mode.mode == VAR_2 && VAR_8->vc_mode == VAR_1)) {
  return -VAR_0;
 }

 VAR_6 = VAR_7;
 FUNC_0();

 return 0;
}
