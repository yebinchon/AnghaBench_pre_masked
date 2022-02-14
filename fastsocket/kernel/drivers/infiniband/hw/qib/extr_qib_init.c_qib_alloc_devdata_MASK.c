
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int ibdev; } ;
struct qib_devdata {TYPE_1__ verbs_dev; int list; int unit; } ;
struct pci_dev {int dev; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 struct qib_devdata* FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct qib_devdata*,int *) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int *,char*,...) ;
 int VAR_6 ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

struct qib_devdata *FUNC_12(struct pci_dev *VAR_7, size_t VAR_8)
{
 unsigned long VAR_9;
 struct qib_devdata *VAR_10;
 int VAR_11;

 if (!FUNC_5(&VAR_6, VAR_1)) {
  VAR_10 = FUNC_1(-VAR_0);
  goto bail;
 }

 VAR_10 = (struct qib_devdata *) FUNC_2(sizeof(*VAR_10) + VAR_8);
 if (!VAR_10) {
  VAR_10 = FUNC_1(-VAR_0);
  goto bail;
 }

 FUNC_10(&VAR_5, VAR_9);
 VAR_11 = FUNC_4(&VAR_6, VAR_10, &VAR_10->unit);
 if (VAR_11 >= 0)
  FUNC_7(&VAR_10->list, &VAR_4);
 FUNC_11(&VAR_5, VAR_9);

 if (VAR_11 < 0) {
  FUNC_9(&VAR_7->dev,
         "Could not allocate unit ID: error %d\n", -VAR_11);
  FUNC_3(&VAR_10->verbs_dev.ibdev);
  VAR_10 = FUNC_1(VAR_11);
  goto bail;
 }

 if (!VAR_3) {
  u32 VAR_12 = FUNC_8();
  VAR_2 = FUNC_6(FUNC_0(VAR_12) *
          sizeof(long), VAR_1);
  if (VAR_2)
   VAR_3 = VAR_12;
  else
   FUNC_9(&VAR_7->dev,
    "Could not alloc cpulist info, cpu affinity might be wrong\n");
 }

bail:
 return VAR_10;
}
