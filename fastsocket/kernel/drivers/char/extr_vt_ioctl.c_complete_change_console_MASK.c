
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ mode; int acqsig; } ;
struct vc_data {unsigned char vc_mode; int vc_num; TYPE_1__ vt_mode; int vt_pid; } ;
struct TYPE_6__ {TYPE_2__* d; } ;
struct TYPE_5__ {unsigned char vc_mode; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 size_t VAR_3 ;
 scalar_t__ FUNC_2 (int ,int ,int) ;
 size_t VAR_4 ;
 int FUNC_3 (struct vc_data*) ;
 int FUNC_4 (struct vc_data*) ;
 TYPE_3__* VAR_5 ;
 int FUNC_5 (int ,int,int ) ;

__attribute__((used)) static void FUNC_6(struct vc_data *VAR_6)
{
 unsigned char VAR_7;
 int VAR_8 = VAR_3;

 VAR_4 = VAR_3;






 VAR_7 = VAR_5[VAR_3].d->vc_mode;
 FUNC_4(VAR_6);
 if (VAR_7 != VAR_6->vc_mode) {
  if (VAR_6->vc_mode == VAR_0)
   FUNC_1(1);
  else
   FUNC_0(1);
 }






 if (VAR_6->vt_mode.mode == VAR_2) {





  if (FUNC_2(VAR_6->vt_pid, VAR_6->vt_mode.acqsig, 1) != 0) {
   FUNC_3(VAR_6);

   if (VAR_7 != VAR_6->vc_mode) {
    if (VAR_6->vc_mode == VAR_0)
     FUNC_1(1);
    else
     FUNC_0(1);
   }
  }
 }




 FUNC_5(VAR_1, VAR_8, VAR_6->vc_num);
 return;
}
