
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int flags; int usage; } ;
struct TYPE_5__ {int flags; int usage; } ;
struct TYPE_4__ {int flags; int usage; } ;
struct btrfs_balance_control {TYPE_3__ meta; TYPE_2__ sys; TYPE_1__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct btrfs_balance_control *VAR_3)
{



 if (VAR_3->data.flags & VAR_0)
  VAR_3->data.flags |= VAR_1;
 if (VAR_3->sys.flags & VAR_0)
  VAR_3->sys.flags |= VAR_1;
 if (VAR_3->meta.flags & VAR_0)
  VAR_3->meta.flags |= VAR_1;
 if (!(VAR_3->data.flags & VAR_2) &&
     !(VAR_3->data.flags & VAR_0)) {
  VAR_3->data.flags |= VAR_2;
  VAR_3->data.usage = 90;
 }
 if (!(VAR_3->sys.flags & VAR_2) &&
     !(VAR_3->sys.flags & VAR_0)) {
  VAR_3->sys.flags |= VAR_2;
  VAR_3->sys.usage = 90;
 }
 if (!(VAR_3->meta.flags & VAR_2) &&
     !(VAR_3->meta.flags & VAR_0)) {
  VAR_3->meta.flags |= VAR_2;
  VAR_3->meta.usage = 90;
 }
}
