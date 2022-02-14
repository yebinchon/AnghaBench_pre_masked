
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jsflash {scalar_t__ base; struct jsfd_part* dv; } ;
struct jsfd_part {int dsize; } ;
struct gendisk {int first_minor; scalar_t__ queue; struct jsfd_part* private_data; int * fops; int disk_name; int major; } ;
typedef int DEFINE_SPINLOCK ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct gendisk*) ;
 struct gendisk* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 struct jsflash VAR_7 ;
 scalar_t__ VAR_8 ;
 struct gendisk** VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct gendisk*) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 int FUNC_5 (struct gendisk*,int) ;
 int FUNC_6 (struct gendisk*,int) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static int FUNC_9(void)
{
 static DEFINE_SPINLOCK(VAR_12);
 struct jsflash *VAR_13;
 struct jsfd_part *VAR_14;
 int VAR_15;
 int VAR_16;

 if (VAR_7 == 0)
  return -VAR_2;

 VAR_15 = -VAR_1;
 for (VAR_16 = 0; VAR_16 < VAR_4; VAR_16++) {
  struct gendisk *VAR_17 = FUNC_1(1);
  if (!VAR_17)
   goto out;
  VAR_9[VAR_16] = VAR_17;
 }

 if (FUNC_4(VAR_3, "jsfd")) {
  VAR_15 = -VAR_0;
  goto out;
 }

 VAR_8 = FUNC_2(VAR_10, &VAR_12);
 if (!VAR_8) {
  VAR_15 = -VAR_1;
  FUNC_8(VAR_3, "jsfd");
  goto out;
 }

 for (VAR_16 = 0; VAR_16 < VAR_4; VAR_16++) {
  struct gendisk *VAR_18 = VAR_9[VAR_16];
  if ((VAR_16 & VAR_6) >= VAR_5) continue;
  VAR_13 = &VAR_7;
  VAR_14 = &VAR_13->dv[VAR_16&VAR_6];

  VAR_18->major = VAR_3;
  VAR_18->first_minor = VAR_16;
  FUNC_7(VAR_18->disk_name, "jsfd%d", VAR_16);
  VAR_18->fops = &VAR_11;
  FUNC_5(VAR_18, VAR_14->dsize >> 9);
  VAR_18->private_data = VAR_14;
  VAR_18->queue = VAR_8;
  FUNC_0(VAR_18);
  FUNC_6(VAR_18, 1);
 }
 return 0;
out:
 while (VAR_16--)
  FUNC_3(VAR_9[VAR_16]);
 return VAR_15;
}
