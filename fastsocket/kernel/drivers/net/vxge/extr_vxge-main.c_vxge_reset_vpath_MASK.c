
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vxgedev {TYPE_2__* vpaths; int vp_reset; int state; } ;
typedef enum vxge_hw_status { ____Placeholder_vxge_hw_status } vxge_hw_status ;
struct TYPE_4__ {scalar_t__ last_status; } ;
struct TYPE_5__ {int fifo; TYPE_1__ ring; scalar_t__ handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (struct vxgedev*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (struct vxgedev*,int) ;
 int FUNC_14 (int *,int *) ;

__attribute__((used)) static int FUNC_15(struct vxgedev *VAR_4, int VAR_5)
{
 enum vxge_hw_status VAR_6 = VAR_2;
 int VAR_7 = 0;


 if (FUNC_4(!FUNC_1(VAR_4)))
  return 0;


 if (FUNC_3(VAR_3, &VAR_4->state))
  return 0;

 if (VAR_4->vpaths[VAR_5].handle) {
  if (FUNC_9(VAR_4->vpaths[VAR_5].handle)
    == VAR_2) {
   if (FUNC_1(VAR_4) &&
    FUNC_8(
     VAR_4->vpaths[VAR_5].handle)
     != VAR_2) {
    FUNC_5(VAR_0,
     "vxge_hw_vpath_recover_from_reset"
     "failed for vpath:%d", VAR_5);
    return VAR_6;
   }
  } else {
   FUNC_5(VAR_0,
    "vxge_hw_vpath_reset failed for"
    "vpath:%d", VAR_5);
    return VAR_6;
  }
 } else
  return VAR_1;

 FUNC_11(&VAR_4->vpaths[VAR_5]);
 FUNC_12(&VAR_4->vpaths[VAR_5]);


 FUNC_6(VAR_4->vpaths[VAR_5].handle);


 FUNC_13(VAR_4, VAR_5);

 FUNC_2();


 FUNC_7(VAR_4->vpaths[VAR_5].handle);

 FUNC_2();
 FUNC_10(VAR_4->vpaths[VAR_5].handle);
 VAR_4->vpaths[VAR_5].ring.last_status = VAR_2;


 FUNC_0(VAR_5, &VAR_4->vp_reset);


 FUNC_14(&VAR_4->vpaths[VAR_5].fifo, ((void*)0));

 return VAR_7;
}
