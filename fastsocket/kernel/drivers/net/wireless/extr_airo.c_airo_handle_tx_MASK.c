
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct airo_info {int* fids; TYPE_1__* dev; TYPE_1__* wifidev; int flags; int aux_lock; int txq; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct airo_info*,int ) ;
 int VAR_7 ;
 int FUNC_1 (struct airo_info*,int ,int) ;
 int VAR_8 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct airo_info*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 scalar_t__ FUNC_10 (int ,int *) ;

__attribute__((used)) static void FUNC_11(struct airo_info *VAR_9, u16 VAR_10)
{
 int VAR_11, VAR_12 = 0, VAR_13 = -1;
 u16 VAR_14;

 if (FUNC_10(VAR_4, &VAR_9->flags)) {
  unsigned long VAR_15;

  if (VAR_10 & VAR_3)
   FUNC_4(VAR_9, -1);

  FUNC_8(&VAR_9->aux_lock, VAR_15);
  if (!FUNC_7(&VAR_9->txq)) {
   FUNC_9(&VAR_9->aux_lock,VAR_15);
   FUNC_5(VAR_9->dev);
  } else {
   FUNC_3(VAR_5, &VAR_9->flags);
   FUNC_9(&VAR_9->aux_lock,VAR_15);
   FUNC_6(VAR_9->dev);
  }
  FUNC_1(VAR_9, VAR_0, VAR_10 & (VAR_1 | VAR_2 | VAR_3));
  return;
 }

 VAR_14 = FUNC_0(VAR_9, VAR_8);

 for(VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
  if ((VAR_9->fids[VAR_11] & 0xffff) == VAR_14) {
   VAR_12 = VAR_9->fids[VAR_11] >> 16;
   VAR_13 = VAR_11;
  }
 }

 if (VAR_13 != -1) {
  if (VAR_10 & VAR_3)
   FUNC_4(VAR_9, VAR_13);

  FUNC_1(VAR_9, VAR_0, VAR_10 & (VAR_1 | VAR_3));


  VAR_9->fids[VAR_13] &= 0xffff;
  if (VAR_13 < VAR_7 / 2) {
   if (!FUNC_10(VAR_5, &VAR_9->flags))
    FUNC_6(VAR_9->dev);
  } else {
   if (!FUNC_10(VAR_6, &VAR_9->flags))
    FUNC_6(VAR_9->wifidev);
  }
 } else {
  FUNC_1(VAR_9, VAR_0, VAR_10 & (VAR_1 | VAR_2 | VAR_3));
  FUNC_2(VAR_9->dev->name, "Unallocated FID was used to xmit");
 }
}
