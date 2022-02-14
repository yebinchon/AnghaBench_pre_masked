
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct b43legacy_wldev {int* dma_reason; TYPE_2__* dev; } ;
struct TYPE_3__ {int revision; } ;
struct TYPE_4__ {TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (struct b43legacy_wldev*) ;
 int FUNC_1 (struct b43legacy_wldev*,int ,int) ;
 int FUNC_2 (struct b43legacy_wldev*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct b43legacy_wldev *VAR_12, u32 VAR_13)
{
 if (FUNC_0(VAR_12) &&
     (VAR_12->dev->id.revision < 3) &&
     (!(VAR_13 & VAR_0))) {

  FUNC_2(VAR_12, VAR_8, 0);
  FUNC_2(VAR_12, VAR_9, 1);
  FUNC_2(VAR_12, VAR_10, 2);
  FUNC_2(VAR_12, VAR_11, 3);
 }

 FUNC_1(VAR_12, VAR_7, VAR_13);

 FUNC_1(VAR_12, VAR_1,
     VAR_12->dma_reason[0]);
 FUNC_1(VAR_12, VAR_2,
     VAR_12->dma_reason[1]);
 FUNC_1(VAR_12, VAR_3,
     VAR_12->dma_reason[2]);
 FUNC_1(VAR_12, VAR_4,
     VAR_12->dma_reason[3]);
 FUNC_1(VAR_12, VAR_5,
     VAR_12->dma_reason[4]);
 FUNC_1(VAR_12, VAR_6,
     VAR_12->dma_reason[5]);
}
