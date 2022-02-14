
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct b43legacy_wldev {int max_nr_keys; int ktp; TYPE_2__* dev; int key; } ;
struct TYPE_3__ {int revision; } ;
struct TYPE_4__ {TYPE_1__ id; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct b43legacy_wldev*,int ,int) ;
 int FUNC_3 (struct b43legacy_wldev*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct b43legacy_wldev *VAR_2)
{
 VAR_2->max_nr_keys = (VAR_2->dev->id.revision >= 5) ? 58 : 20;
 FUNC_1(VAR_2->max_nr_keys > FUNC_0(VAR_2->key));
 VAR_2->ktp = FUNC_2(VAR_2, VAR_1,
     0x0056);



 VAR_2->ktp *= 2;
 if (VAR_2->dev->id.revision >= 5)

  FUNC_3(VAR_2, VAR_0,
      VAR_2->max_nr_keys - 8);
}
