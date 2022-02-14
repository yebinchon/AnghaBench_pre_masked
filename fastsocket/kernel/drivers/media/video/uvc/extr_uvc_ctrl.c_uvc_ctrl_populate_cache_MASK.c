
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uvc_video_chain {TYPE_3__* dev; } ;
struct TYPE_5__ {int flags; int size; int selector; } ;
struct uvc_control {int cached; TYPE_2__ info; TYPE_1__* entity; } ;
struct TYPE_6__ {int intfnum; } ;
struct TYPE_4__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct uvc_control*,int ) ;
 int FUNC_1 (TYPE_3__*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct uvc_video_chain *VAR_12,
 struct uvc_control *VAR_13)
{
 int VAR_14;

 if (VAR_13->info.flags & VAR_0) {
  VAR_14 = FUNC_1(VAR_12->dev, VAR_8, VAR_13->entity->id,
         VAR_12->dev->intfnum, VAR_13->info.selector,
         FUNC_0(VAR_13, VAR_4),
         VAR_13->info.size);
  if (VAR_14 < 0)
   return VAR_14;
 }

 if (VAR_13->info.flags & VAR_2) {
  VAR_14 = FUNC_1(VAR_12->dev, VAR_10, VAR_13->entity->id,
         VAR_12->dev->intfnum, VAR_13->info.selector,
         FUNC_0(VAR_13, VAR_6),
         VAR_13->info.size);
  if (VAR_14 < 0)
   return VAR_14;
 }
 if (VAR_13->info.flags & VAR_1) {
  VAR_14 = FUNC_1(VAR_12->dev, VAR_9, VAR_13->entity->id,
         VAR_12->dev->intfnum, VAR_13->info.selector,
         FUNC_0(VAR_13, VAR_5),
         VAR_13->info.size);
  if (VAR_14 < 0)
   return VAR_14;
 }
 if (VAR_13->info.flags & VAR_3) {
  VAR_14 = FUNC_1(VAR_12->dev, VAR_11, VAR_13->entity->id,
         VAR_12->dev->intfnum, VAR_13->info.selector,
         FUNC_0(VAR_13, VAR_7),
         VAR_13->info.size);
  if (VAR_14 < 0)
   return VAR_14;
 }

 VAR_13->cached = 1;
 return 0;
}
