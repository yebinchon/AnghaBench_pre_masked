
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vt8231_data {char* name; int hwmon_dev; int uch_config; int update_lock; scalar_t__ addr; } ;
struct resource {scalar_t__ start; scalar_t__ end; } ;
struct TYPE_7__ {int kobj; } ;
struct platform_device {TYPE_3__ dev; } ;
struct TYPE_5__ {int name; } ;
struct TYPE_6__ {TYPE_1__ driver; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (TYPE_3__*,char*,unsigned long,unsigned long) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (struct vt8231_data*) ;
 struct vt8231_data* FUNC_8 (int,int ) ;
 int FUNC_9 (int *) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct platform_device*,struct vt8231_data*) ;
 int FUNC_12 (scalar_t__,int ) ;
 int FUNC_13 (scalar_t__,int ,int ) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *,int *) ;
 TYPE_2__ VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int FUNC_16 (struct vt8231_data*) ;
 int FUNC_17 (struct vt8231_data*,int ) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_10)
{
 struct resource *VAR_11;
 struct vt8231_data *VAR_12;
 int VAR_13 = 0, VAR_14;


 VAR_11 = FUNC_10(VAR_10, VAR_3, 0);
 if (!FUNC_13(VAR_11->start, VAR_4,
       VAR_6.driver.name)) {
  FUNC_5(&VAR_10->dev, "Region 0x%lx-0x%lx already in use!\n",
   (unsigned long)VAR_11->start, (unsigned long)VAR_11->end);
  return -VAR_0;
 }

 if (!(VAR_12 = FUNC_8(sizeof(struct vt8231_data), VAR_2))) {
  VAR_13 = -VAR_1;
  goto exit_release;
 }

 FUNC_11(VAR_10, VAR_12);
 VAR_12->addr = VAR_11->start;
 VAR_12->name = "vt8231";

 FUNC_9(&VAR_12->update_lock);
 FUNC_16(VAR_12);


 if ((VAR_13 = FUNC_14(&VAR_10->dev.kobj, &VAR_7)))
  goto exit_free;


 VAR_12->uch_config = FUNC_17(VAR_12, VAR_5);

 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_8); VAR_14++) {
  if (FUNC_1(VAR_14, VAR_12->uch_config)) {
   if ((VAR_13 = FUNC_14(&VAR_10->dev.kobj,
     &VAR_8[VAR_14])))
    goto exit_remove_files;
  }
 }

 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_9); VAR_14++) {
  if (FUNC_2(VAR_14, VAR_12->uch_config)) {
   if ((VAR_13 = FUNC_14(&VAR_10->dev.kobj,
     &VAR_9[VAR_14])))
    goto exit_remove_files;
  }
 }

 VAR_12->hwmon_dev = FUNC_6(&VAR_10->dev);
 if (FUNC_3(VAR_12->hwmon_dev)) {
  VAR_13 = FUNC_4(VAR_12->hwmon_dev);
  goto exit_remove_files;
 }
 return 0;

exit_remove_files:
 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_9); VAR_14++)
  FUNC_15(&VAR_10->dev.kobj, &VAR_9[VAR_14]);

 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_8); VAR_14++)
  FUNC_15(&VAR_10->dev.kobj, &VAR_8[VAR_14]);

 FUNC_15(&VAR_10->dev.kobj, &VAR_7);

exit_free:
 FUNC_11(VAR_10, ((void*)0));
 FUNC_7(VAR_12);

exit_release:
 FUNC_12(VAR_11->start, VAR_4);
 return VAR_13;
}
