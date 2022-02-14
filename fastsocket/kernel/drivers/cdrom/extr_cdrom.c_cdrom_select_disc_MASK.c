
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cdrom_device_info {int mc_flags; int use_count; TYPE_2__* ops; } ;
struct TYPE_3__ {int curslot; } ;
struct cdrom_changer_info {TYPE_1__ hdr; } ;
struct TYPE_4__ {int (* media_changed ) (struct cdrom_device_info*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct cdrom_device_info*,int) ;
 int FUNC_3 (struct cdrom_device_info*,struct cdrom_changer_info*) ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (struct cdrom_changer_info*) ;
 struct cdrom_changer_info* FUNC_5 (int,int ) ;
 int FUNC_6 (struct cdrom_device_info*,int) ;

__attribute__((used)) static int FUNC_7(struct cdrom_device_info *VAR_9, int VAR_10)
{
 struct cdrom_changer_info *VAR_11;
 int VAR_12;
 int VAR_13;

 FUNC_1(VAR_3, "entering cdrom_select_disc()\n");
 if (!FUNC_0(VAR_0))
  return -VAR_5;

 (void) VAR_9->ops->media_changed(VAR_9, VAR_10);

 if (VAR_10 == VAR_2) {

  VAR_9->mc_flags = 0x3;
  return FUNC_2(VAR_9, -1);
 }

 VAR_11 = FUNC_5(sizeof(*VAR_11), VAR_7);
 if (!VAR_11)
  return -VAR_6;

 if ((VAR_13 = FUNC_3(VAR_9, VAR_11))) {
  FUNC_4(VAR_11);
  return VAR_13;
 }

 VAR_12 = VAR_11->hdr.curslot;
 FUNC_4(VAR_11);

 if (VAR_9->use_count > 1 || VAR_8) {
  if (VAR_10 == VAR_1) {
       return VAR_12;
  } else {
   return -VAR_4;
  }
 }






 if (VAR_10 == VAR_1)
  VAR_10 = VAR_12;


 VAR_9->mc_flags = 0x3;
 if ((VAR_13 = FUNC_2(VAR_9, VAR_10)))
  return VAR_13;

 return VAR_10;
}
