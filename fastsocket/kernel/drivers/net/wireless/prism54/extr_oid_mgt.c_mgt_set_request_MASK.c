
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct islpci_mgmtframe {TYPE_1__* header; } ;
struct TYPE_7__ {int mib_sem; int ndev; void** mib; } ;
typedef TYPE_2__ islpci_private ;
typedef enum oid_num_t { ____Placeholder_oid_num_t } oid_num_t ;
struct TYPE_8__ {int range; int size; int flags; scalar_t__ oid; } ;
struct TYPE_6__ {int operation; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *) ;
 TYPE_5__* VAR_6 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct islpci_mgmtframe*) ;
 int FUNC_4 (int ,int ,scalar_t__,void*,int,struct islpci_mgmtframe**) ;
 int FUNC_5 (void*,void*,int) ;
 int FUNC_6 (int,void*) ;
 int FUNC_7 (int,void*) ;
 int FUNC_8 (int *) ;

int
FUNC_9(islpci_private *VAR_7, enum oid_num_t VAR_8, int VAR_9, void *VAR_10)
{
 int VAR_11 = 0;
 struct islpci_mgmtframe *VAR_12 = ((void*)0);
 int VAR_13 = VAR_3;
 int VAR_14;
 void *VAR_15, *VAR_16 = VAR_10;
 u32 VAR_17;

 FUNC_0(VAR_2 <= VAR_8);
 FUNC_0(VAR_9 > VAR_6[VAR_8].range);

 if (!VAR_7->mib)

  return -1;

 VAR_14 = VAR_6[VAR_8].size;
 VAR_15 = VAR_7->mib[VAR_8];
 VAR_15 += (VAR_15 ? VAR_9 * VAR_14 : 0);
 VAR_17 = VAR_6[VAR_8].oid + VAR_9;

 if (VAR_16 == ((void*)0))

  VAR_16 = VAR_15;
 else
  FUNC_6(VAR_6[VAR_8].flags & VAR_1, VAR_16);






 if (VAR_15)
  FUNC_1(&VAR_7->mib_sem);

 if (FUNC_2(VAR_7) >= VAR_5) {
  VAR_11 = FUNC_4(VAR_7->ndev, VAR_4, VAR_17,
          VAR_16, VAR_14, &VAR_12);
  if (!VAR_11) {
   VAR_13 = VAR_12->header->operation;
   FUNC_3(VAR_12);
  }
  if (VAR_11 || VAR_13 == VAR_3)
   VAR_11 = -VAR_0;
 } else if (!VAR_15)
  VAR_11 = -VAR_0;

 if (VAR_15) {
  if (!VAR_11 && VAR_10)
   FUNC_5(VAR_15, VAR_16, VAR_14);
  FUNC_8(&VAR_7->mib_sem);
 }


 if (VAR_10)
  FUNC_7(VAR_6[VAR_8].flags & VAR_1, VAR_10);

 return VAR_11;
}
