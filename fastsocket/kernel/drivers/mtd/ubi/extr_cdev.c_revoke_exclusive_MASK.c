
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubi_volume_desc {int mode; struct ubi_volume* vol; } ;
struct ubi_volume {int readers; int writers; int exclusive; TYPE_1__* ubi; } ;
struct TYPE_2__ {int volumes_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct ubi_volume_desc *VAR_3, int VAR_4)
{
 struct ubi_volume *VAR_5 = VAR_3->vol;

 FUNC_0(&VAR_5->ubi->volumes_lock);
 FUNC_2(VAR_5->readers == 0 && VAR_5->writers == 0);
 FUNC_2(VAR_5->exclusive == 1 && VAR_3->mode == VAR_0);
 VAR_5->exclusive = 0;
 if (VAR_4 == VAR_1)
  VAR_5->readers = 1;
 else if (VAR_4 == VAR_2)
  VAR_5->writers = 1;
 else
  VAR_5->exclusive = 1;
 FUNC_1(&VAR_5->ubi->volumes_lock);

 VAR_3->mode = VAR_4;
}
