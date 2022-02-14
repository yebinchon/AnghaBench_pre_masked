
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int scsw; } ;
struct subchannel {TYPE_2__ schib; } ;
struct cmb_data {void* last_block; int last_update; int size; int hw_block; } ;
struct TYPE_5__ {int parent; } ;
struct ccw_device {TYPE_3__* private; TYPE_1__ dev; } ;
struct TYPE_8__ {void* (* align ) (int ) ;} ;
struct TYPE_7__ {struct cmb_data* cmb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct subchannel*) ;
 TYPE_4__* VAR_9 ;
 int FUNC_1 () ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (void*,void*,int ) ;
 int FUNC_5 (void*,void*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 void* FUNC_9 (int ) ;
 struct subchannel* FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct ccw_device *VAR_10)
{
 struct subchannel *VAR_11;
 void *VAR_12;
 void *VAR_13;
 struct cmb_data *VAR_14;

 VAR_11 = FUNC_10(VAR_10->dev.parent);

 if (FUNC_0(VAR_11))
  return -VAR_1;

 if (FUNC_7(&VAR_11->schib.scsw) & VAR_7) {

  if ((!(FUNC_6(&VAR_11->schib.scsw) & VAR_6)) &&
      (FUNC_6(&VAR_11->schib.scsw) &
       (VAR_4 | VAR_5)) &&
      (!(FUNC_8(&VAR_11->schib.scsw) & VAR_8)))
   return -VAR_0;
 }
 VAR_14 = VAR_10->private->cmb;
 VAR_13 = VAR_9->align(VAR_14->hw_block);
 if (!FUNC_4(VAR_14->last_block, VAR_13, VAR_14->size))

  return 0;
 VAR_12 = FUNC_3(VAR_14->size, VAR_3);
 if (!VAR_12)
  return -VAR_2;

 do {
  FUNC_5(VAR_14->last_block, VAR_13, VAR_14->size);
  FUNC_5(VAR_12, VAR_13, VAR_14->size);
 } while (FUNC_4(VAR_14->last_block, VAR_12, VAR_14->size));
 VAR_14->last_update = FUNC_1();
 FUNC_2(VAR_12);
 return 0;
}
