
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pnp_dev {int status; scalar_t__ active; TYPE_1__* protocol; int dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int resource_size_t ;
struct TYPE_2__ {int (* get ) (struct pnp_dev*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pnp_dev*) ;
 int FUNC_4 (struct pnp_dev*,int ,int ) ;
 int FUNC_5 (struct pnp_dev*,int ,int ,int ) ;
 int FUNC_6 (struct pnp_dev*,int ,int ) ;
 int FUNC_7 (struct pnp_dev*,int ,int ,int ) ;
 int FUNC_8 (struct pnp_dev*) ;
 scalar_t__ FUNC_9 (struct pnp_dev*) ;
 int FUNC_10 (struct pnp_dev*) ;
 int FUNC_11 (struct pnp_dev*) ;
 int VAR_2 ;
 int FUNC_12 (char*,char**,int ) ;
 char* FUNC_13 (char*) ;
 int FUNC_14 (char*,char*,int) ;
 int FUNC_15 (struct pnp_dev*) ;
 struct pnp_dev* FUNC_16 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_17(struct device *VAR_3,
      struct device_attribute *VAR_4,
      const char *VAR_5, size_t VAR_6)
{
 struct pnp_dev *VAR_7 = FUNC_16(VAR_3);
 char *VAR_8 = (void *)VAR_5;
 int VAR_9 = 0;
 resource_size_t VAR_10, VAR_11;

 if (VAR_7->status & VAR_1) {
  VAR_9 = -VAR_0;
  FUNC_0(&VAR_7->dev, "in use; can't configure\n");
  goto done;
 }

 VAR_8 = FUNC_13(VAR_8);
 if (!FUNC_14(VAR_8, "disable", 7)) {
  VAR_9 = FUNC_10(VAR_7);
  goto done;
 }
 if (!FUNC_14(VAR_8, "activate", 8)) {
  VAR_9 = FUNC_3(VAR_7);
  goto done;
 }
 if (!FUNC_14(VAR_8, "fill", 4)) {
  if (VAR_7->active)
   goto done;
  VAR_9 = FUNC_8(VAR_7);
  goto done;
 }
 if (!FUNC_14(VAR_8, "auto", 4)) {
  if (VAR_7->active)
   goto done;
  FUNC_11(VAR_7);
  VAR_9 = FUNC_8(VAR_7);
  goto done;
 }
 if (!FUNC_14(VAR_8, "clear", 5)) {
  if (VAR_7->active)
   goto done;
  FUNC_11(VAR_7);
  goto done;
 }
 if (!FUNC_14(VAR_8, "get", 3)) {
  FUNC_1(&VAR_2);
  if (FUNC_9(VAR_7))
   VAR_7->protocol->get(VAR_7);
  FUNC_2(&VAR_2);
  goto done;
 }
 if (!FUNC_14(VAR_8, "set", 3)) {
  if (VAR_7->active)
   goto done;
  VAR_8 += 3;
  FUNC_11(VAR_7);
  FUNC_1(&VAR_2);
  while (1) {
   VAR_8 = FUNC_13(VAR_8);
   if (!FUNC_14(VAR_8, "io", 2)) {
    VAR_8 = FUNC_13(VAR_8 + 2);
    VAR_10 = FUNC_12(VAR_8, &VAR_8, 0);
    VAR_8 = FUNC_13(VAR_8);
    if (*VAR_8 == '-') {
     VAR_8 = FUNC_13(VAR_8 + 1);
     VAR_11 = FUNC_12(VAR_8, &VAR_8, 0);
    } else
     VAR_11 = VAR_10;
    FUNC_5(VAR_7, VAR_10, VAR_11, 0);
    continue;
   }
   if (!FUNC_14(VAR_8, "mem", 3)) {
    VAR_8 = FUNC_13(VAR_8 + 3);
    VAR_10 = FUNC_12(VAR_8, &VAR_8, 0);
    VAR_8 = FUNC_13(VAR_8);
    if (*VAR_8 == '-') {
     VAR_8 = FUNC_13(VAR_8 + 1);
     VAR_11 = FUNC_12(VAR_8, &VAR_8, 0);
    } else
     VAR_11 = VAR_10;
    FUNC_7(VAR_7, VAR_10, VAR_11, 0);
    continue;
   }
   if (!FUNC_14(VAR_8, "irq", 3)) {
    VAR_8 = FUNC_13(VAR_8 + 3);
    VAR_10 = FUNC_12(VAR_8, &VAR_8, 0);
    FUNC_6(VAR_7, VAR_10, 0);
    continue;
   }
   if (!FUNC_14(VAR_8, "dma", 3)) {
    VAR_8 = FUNC_13(VAR_8 + 3);
    VAR_10 = FUNC_12(VAR_8, &VAR_8, 0);
    FUNC_4(VAR_7, VAR_10, 0);
    continue;
   }
   break;
  }
  FUNC_2(&VAR_2);
  goto done;
 }

done:
 if (VAR_9 < 0)
  return VAR_9;
 return VAR_6;
}
