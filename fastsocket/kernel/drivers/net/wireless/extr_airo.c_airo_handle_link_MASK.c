
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sa_family; int sa_data; } ;
union iwreq_data {TYPE_1__ ap_addr; } ;
typedef scalar_t__ u16 ;
struct airo_info {scalar_t__ scan_timeout; TYPE_2__* dev; int thr_wait; scalar_t__ expires; int jobs; int sem; int flags; scalar_t__ list_bss_task; } ;
struct TYPE_5__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct airo_info*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct airo_info*,int ,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,char,int ) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (TYPE_2__*,int ,union iwreq_data*,int *) ;

__attribute__((used)) static void FUNC_12(struct airo_info *VAR_14)
{
 union iwreq_data VAR_15;
 int VAR_16 = 0;
 u16 VAR_17;


 VAR_17 = FUNC_6(FUNC_0(VAR_14, VAR_8));
 FUNC_1(VAR_14, VAR_2, VAR_3);

 if ((VAR_17 == VAR_11) && (VAR_14->scan_timeout > 0))
  VAR_16 = 1;

 FUNC_3(VAR_14->dev->name, VAR_17);

 if ((VAR_17 == VAR_10) || (VAR_17 == VAR_12)) {
  if (VAR_13)
   VAR_14->expires = 0;
  if (VAR_14->list_bss_task)
   FUNC_10(VAR_14->list_bss_task);
  FUNC_8(VAR_5, &VAR_14->flags);
  FUNC_8(VAR_4, &VAR_14->flags);

  if (FUNC_5(&VAR_14->sem) != 0) {
   FUNC_8(VAR_7, &VAR_14->jobs);
   FUNC_9(&VAR_14->thr_wait);
  } else
   FUNC_4(VAR_14->dev);
 } else if (!VAR_16) {
  if (VAR_13 && !VAR_14->expires) {
   VAR_14->expires = FUNC_2(3*VAR_6);
   FUNC_9(&VAR_14->thr_wait);
  }


  FUNC_7(VAR_15.ap_addr.sa_data, '\0', VAR_1);
  VAR_15.ap_addr.sa_family = VAR_0;
  FUNC_11(VAR_14->dev, VAR_9, &VAR_15, ((void*)0));
 }
}
