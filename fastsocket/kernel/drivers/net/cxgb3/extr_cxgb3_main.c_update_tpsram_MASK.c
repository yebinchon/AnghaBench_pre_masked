
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct firmware {int data; int size; } ;
struct device {int dummy; } ;
struct adapter {TYPE_1__* pdev; } ;
typedef int buf ;
struct TYPE_2__ {struct device dev; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,char*,int ,int ,int ) ;
 int FUNC_2 (struct firmware const*) ;
 int FUNC_3 (struct firmware const**,char*,struct device*) ;
 int FUNC_4 (char*,int,char*,char) ;
 int FUNC_5 (struct adapter*,int ,int ) ;
 int FUNC_6 (struct adapter*,int ) ;
 char FUNC_7 (struct adapter*) ;

__attribute__((used)) static int FUNC_8(struct adapter *VAR_4)
{
 const struct firmware *VAR_5;
 char VAR_6[64];
 struct device *VAR_7 = &VAR_4->pdev->dev;
 int VAR_8;
 char VAR_9;

 VAR_9 = FUNC_7(VAR_4);
 if (!VAR_9)
  return 0;

 FUNC_4(VAR_6, sizeof(VAR_6), VAR_0, VAR_9);

 VAR_8 = FUNC_3(&VAR_5, VAR_6, VAR_7);
 if (VAR_8 < 0) {
  FUNC_0(VAR_7, "could not load TP SRAM: unable to load %s\n",
   VAR_6);
  return VAR_8;
 }

 VAR_8 = FUNC_5(VAR_4, VAR_5->data, VAR_5->size);
 if (VAR_8)
  goto release_tpsram;

 VAR_8 = FUNC_6(VAR_4, VAR_5->data);
 if (VAR_8 == 0)
  FUNC_1(VAR_7,
    "successful update of protocol engine "
    "to %d.%d.%d\n",
    VAR_1, VAR_3, VAR_2);
 else
  FUNC_0(VAR_7, "failed to update of protocol engine %d.%d.%d\n",
   VAR_1, VAR_3, VAR_2);
 if (VAR_8)
  FUNC_0(VAR_7, "loading protocol SRAM failed\n");

release_tpsram:
 FUNC_2(VAR_5);

 return VAR_8;
}
