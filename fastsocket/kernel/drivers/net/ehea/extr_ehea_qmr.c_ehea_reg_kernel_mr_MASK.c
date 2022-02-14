
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct ehea_mr {struct ehea_adapter* adapter; int vaddr; int handle; int lkey; } ;
struct ehea_adapter {int handle; int pd; } ;
struct TYPE_2__ {int * top; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_1__* VAR_9 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int ,int *,int *) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (unsigned long,scalar_t__*,struct ehea_adapter*,struct ehea_mr*) ;
 int FUNC_4 (unsigned long) ;
 scalar_t__ FUNC_5 (int ) ;

int FUNC_6(struct ehea_adapter *VAR_11, struct ehea_mr *VAR_12)
{
 int VAR_13;
 u64 *VAR_14;
 u64 VAR_15;
 u32 VAR_16 = VAR_2;

 unsigned long VAR_17;

 VAR_14 = (void *)FUNC_5(VAR_6);
 if (!VAR_14) {
  FUNC_0("no mem");
  VAR_13 = -VAR_4;
  goto out;
 }

 VAR_15 = FUNC_1(VAR_11->handle, VAR_0,
     VAR_10, VAR_16, VAR_11->pd,
     &VAR_12->handle, &VAR_12->lkey);

 if (VAR_15 != VAR_8) {
  FUNC_0("alloc_resource_mr failed");
  VAR_13 = -VAR_3;
  goto out;
 }

 if (!VAR_9) {
  FUNC_2(VAR_11->handle, VAR_12->handle, VAR_5);
  FUNC_0("no busmap available");
  VAR_13 = -VAR_3;
  goto out;
 }

 for (VAR_17 = 0; VAR_17 < VAR_1; VAR_17++) {
  if (!VAR_9->top[VAR_17])
   continue;

  VAR_15 = FUNC_3(VAR_17, VAR_14, VAR_11, VAR_12);
  if((VAR_15 != VAR_7) && (VAR_15 != VAR_8))
   break;
 }

 if (VAR_15 != VAR_8) {
  FUNC_2(VAR_11->handle, VAR_12->handle, VAR_5);
  FUNC_0("registering mr failed");
  VAR_13 = -VAR_3;
  goto out;
 }

 VAR_12->vaddr = VAR_0;
 VAR_12->adapter = VAR_11;
 VAR_13 = 0;
out:
 FUNC_4((unsigned long)VAR_14);
 return VAR_13;
}
