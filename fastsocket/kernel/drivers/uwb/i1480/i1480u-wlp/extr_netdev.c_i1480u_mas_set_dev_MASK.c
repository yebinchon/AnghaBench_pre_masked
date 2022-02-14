
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct device {int dummy; } ;
struct TYPE_2__ {int dev_addr; struct device dev; } ;
struct uwb_rc {TYPE_1__ uwb_dev; } ;
struct uwb_dev {int dev_addr; } ;
typedef int rcaddrbuf ;
typedef int devaddrbuf ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,char*,char*,int) ;
 int FUNC_1 (struct uwb_rc*,int *,int ,int ,int ,unsigned long*) ;
 int FUNC_2 (char*,int,int *) ;

__attribute__((used)) static int FUNC_3(struct uwb_dev *VAR_1, struct uwb_rc *VAR_2,
         u8 VAR_3, u8 VAR_4, u8 VAR_5, unsigned long *VAR_6)
{
 int VAR_7 = 0;
 struct device *VAR_8 = &VAR_2->uwb_dev.dev;

 VAR_7 = FUNC_1(VAR_2, &VAR_1->dev_addr, VAR_3, VAR_4,
       VAR_5, VAR_6);
 if (VAR_7 < 0) {
  char VAR_9[VAR_0], VAR_10[VAR_0];
  FUNC_2(VAR_9, sizeof(VAR_9),
       &VAR_2->uwb_dev.dev_addr);
  FUNC_2(VAR_10, sizeof(VAR_10),
       &VAR_1->dev_addr);
  FUNC_0(VAR_8, "Set IP MAS (%s to %s) failed: %d\n",
   VAR_9, VAR_10, VAR_7);
 }
 return VAR_7;
}
