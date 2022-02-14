
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct wm8400_platform_data {int (* platform_init ) (int ) ;} ;
struct wm8400 {int (* read_dev ) (int ,size_t,int,int*) ;int* reg_cache; int dev; int io_data; int io_lock; } ;
struct TYPE_2__ {scalar_t__ default_val; scalar_t__ is_codec; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,struct wm8400*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 TYPE_1__* VAR_8 ;
 int FUNC_8 (int ,size_t,int,int*) ;
 int FUNC_9 (int ,size_t,int,int*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct wm8400*,int ,int,int*) ;
 int FUNC_12 (struct wm8400*) ;

__attribute__((used)) static int FUNC_13(struct wm8400 *VAR_9,
         struct wm8400_platform_data *VAR_10)
{
 u16 VAR_11;
 int VAR_12, VAR_13;

 FUNC_7(&VAR_9->io_lock);

 FUNC_4(VAR_9->dev, VAR_9);


 VAR_12 = VAR_9->read_dev(VAR_9->io_data, VAR_7, 1, &VAR_11);
 if (VAR_12 != 0) {
  FUNC_2(VAR_9->dev, "Chip ID register read failed\n");
  return -VAR_0;
 }
 if (FUNC_1(VAR_11) != VAR_8[VAR_7].default_val) {
  FUNC_2(VAR_9->dev, "Device is not a WM8400, ID is %x\n",
   FUNC_1(VAR_11));
  return -VAR_1;
 }





 VAR_12 = VAR_9->read_dev(VAR_9->io_data, 0,
          FUNC_0(VAR_9->reg_cache),
          VAR_9->reg_cache);
 if (VAR_12 != 0) {
  FUNC_2(VAR_9->dev, "Register cache read failed\n");
  return -VAR_0;
 }
 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_9->reg_cache); VAR_13++)
  VAR_9->reg_cache[VAR_13] = FUNC_1(VAR_9->reg_cache[VAR_13]);


 if (!(VAR_9->reg_cache[VAR_6] & VAR_4))
  for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_9->reg_cache); VAR_13++)
   if (VAR_8[VAR_13].is_codec)
    VAR_9->reg_cache[VAR_13] = VAR_8[VAR_13].default_val;

 VAR_12 = FUNC_11(VAR_9, VAR_5, 1, &VAR_11);
 if (VAR_12 != 0) {
  FUNC_2(VAR_9->dev, "ID register read failed: %d\n", VAR_12);
  return VAR_12;
 }
 VAR_11 = (VAR_11 & VAR_2) >> VAR_3;
 FUNC_3(VAR_9->dev, "WM8400 revision %x\n", VAR_11);

 VAR_12 = FUNC_12(VAR_9);
 if (VAR_12 != 0) {
  FUNC_2(VAR_9->dev, "Failed to register codec\n");
  goto err_children;
 }

 if (VAR_10 && VAR_10->platform_init) {
  VAR_12 = VAR_10->platform_init(VAR_9->dev);
  if (VAR_12 != 0) {
   FUNC_2(VAR_9->dev, "Platform init failed: %d\n",
    VAR_12);
   goto err_children;
  }
 } else
  FUNC_5(VAR_9->dev, "No platform initialisation supplied\n");

 return 0;

err_children:
 FUNC_6(VAR_9->dev);
 return VAR_12;
}
