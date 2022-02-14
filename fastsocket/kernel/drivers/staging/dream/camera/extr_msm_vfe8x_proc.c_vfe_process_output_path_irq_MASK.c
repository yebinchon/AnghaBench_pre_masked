
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vfe_interrupt_status {scalar_t__ encIrq; scalar_t__ encYPingpongIrq; scalar_t__ encCbcrPingpongIrq; scalar_t__ anyOutput2PathIrqs; scalar_t__ viewIrq; scalar_t__ viewYPingpongIrq; scalar_t__ viewCbcrPingpongIrq; scalar_t__ anyOutput1PathIrqs; } ;
struct TYPE_4__ {scalar_t__ snapshotPendingCount; int fragCount; int yPath; int cbcrPath; scalar_t__ multiFrag; } ;
struct TYPE_5__ {int vstate; TYPE_1__ viewPath; TYPE_1__ encPath; scalar_t__ vfeOperationMode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(
 struct vfe_interrupt_status *VAR_4)
{



 if (VAR_4->anyOutput1PathIrqs) {
  if (VAR_3->viewPath.multiFrag) {

   if (VAR_4->viewCbcrPingpongIrq)
    FUNC_3(
     &(VAR_3->viewPath.cbcrPath),
     VAR_3->viewPath.fragCount);

   if (VAR_4->viewYPingpongIrq)
    FUNC_3(
     &(VAR_3->viewPath.yPath),
     VAR_3->viewPath.fragCount);

   if (VAR_4->viewIrq)
    FUNC_1(
     &VAR_3->viewPath);

  } else {


   if (VAR_4->viewIrq)
    FUNC_2(
     &VAR_3->viewPath);
  }
 }


 if (VAR_4->anyOutput2PathIrqs) {
  if (VAR_3->encPath.multiFrag) {
   if (VAR_4->encCbcrPingpongIrq)
    FUNC_3(
     &(VAR_3->encPath.cbcrPath),
     VAR_3->encPath.fragCount);

   if (VAR_4->encYPingpongIrq)
    FUNC_3(&(VAR_3->encPath.yPath),
    VAR_3->encPath.fragCount);

   if (VAR_4->encIrq)
    FUNC_1(
     &VAR_3->encPath);

  } else {
   if (VAR_4->encIrq)
    FUNC_2(
     &VAR_3->encPath);
  }
 }

 if (VAR_3->vfeOperationMode) {
  if ((VAR_3->encPath.snapshotPendingCount == 0) &&
    (VAR_3->viewPath.snapshotPendingCount == 0)) {



   VAR_3->vstate = VAR_1;


   FUNC_5(VAR_0);
   FUNC_4(VAR_2);
   FUNC_0();
  }
 }
}
