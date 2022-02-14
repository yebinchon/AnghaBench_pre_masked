
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int use_event; int enabled; scalar_t__ wb; int * wb_obj; int gpu_addr; } ;
struct radeon_device {int flags; scalar_t__ family; TYPE_1__ wb; int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (struct radeon_device*,int ,int ,int,int ,int *,int **) ;
 int FUNC_4 (int *,void**) ;
 int FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int VAR_7 ;
 int FUNC_8 (struct radeon_device*) ;
 scalar_t__ FUNC_9 (int) ;

int FUNC_10(struct radeon_device *VAR_8)
{
 int VAR_9;

 if (VAR_8->wb.wb_obj == ((void*)0)) {
  VAR_9 = FUNC_3(VAR_8, VAR_5, VAR_3, 1,
         VAR_4, ((void*)0), &VAR_8->wb.wb_obj);
  if (VAR_9) {
   FUNC_1(VAR_8->dev, "(%d) create WB bo failed\n", VAR_9);
   return VAR_9;
  }
 }
 VAR_9 = FUNC_6(VAR_8->wb.wb_obj, 0);
 if (FUNC_9(VAR_9 != 0)) {
  FUNC_8(VAR_8);
  return VAR_9;
 }
 VAR_9 = FUNC_5(VAR_8->wb.wb_obj, VAR_4,
     &VAR_8->wb.gpu_addr);
 if (VAR_9) {
  FUNC_7(VAR_8->wb.wb_obj);
  FUNC_1(VAR_8->dev, "(%d) pin WB bo failed\n", VAR_9);
  FUNC_8(VAR_8);
  return VAR_9;
 }
 VAR_9 = FUNC_4(VAR_8->wb.wb_obj, (void **)&VAR_8->wb.wb);
 FUNC_7(VAR_8->wb.wb_obj);
 if (VAR_9) {
  FUNC_1(VAR_8->dev, "(%d) map WB bo failed\n", VAR_9);
  FUNC_8(VAR_8);
  return VAR_9;
 }


 FUNC_2((char *)VAR_8->wb.wb, 0, VAR_5);

 VAR_8->wb.use_event = 0;

 if (VAR_7 == 1) {
  VAR_8->wb.enabled = 0;
 } else {
  if (VAR_8->flags & VAR_6) {

   VAR_8->wb.enabled = 0;
  } else if (VAR_8->family < VAR_1) {

   VAR_8->wb.enabled = 0;
  } else {
   VAR_8->wb.enabled = 1;

   if (VAR_8->family >= VAR_2) {
    VAR_8->wb.use_event = 1;
   }
  }
 }

 if (VAR_8->family >= VAR_0) {
  VAR_8->wb.enabled = 1;
  VAR_8->wb.use_event = 1;
 }

 FUNC_0(VAR_8->dev, "WB %sabled\n", VAR_8->wb.enabled ? "en" : "dis");

 return 0;
}
