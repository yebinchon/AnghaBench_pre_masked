
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cdrom_device_info {unsigned int mc_flags; scalar_t__ media_written; TYPE_1__* ops; } ;
struct TYPE_2__ {scalar_t__ (* media_changed ) (struct cdrom_device_info*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct cdrom_device_info*,int ) ;

__attribute__((used)) static
int FUNC_2(struct cdrom_device_info *VAR_2, int VAR_3)
{
 unsigned int VAR_4 = (1 << (VAR_3 & 1));
 int VAR_5 = !!(VAR_2->mc_flags & VAR_4);

 if (!FUNC_0(VAR_0))
     return VAR_5;

 if (VAR_2->ops->media_changed(VAR_2, VAR_1)) {
  VAR_2->mc_flags = 0x3;
  VAR_5 |= 1;
  VAR_2->media_written = 0;
 }
 VAR_2->mc_flags &= ~VAR_4;
 return VAR_5;
}
