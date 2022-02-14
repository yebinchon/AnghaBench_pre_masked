
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubi_vtbl_record {int dummy; } ;
struct ubi_volume_desc {struct ubi_volume* vol; } ;
struct ubi_volume {int reserved_pebs; int name; } ;
struct ubi_device {scalar_t__ avail_pebs; TYPE_1__* vtbl; struct ubi_volume** volumes; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct ubi_vtbl_record*,TYPE_1__*,int) ;
 int FUNC_1 (struct ubi_device*,int,struct ubi_vtbl_record*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int,int ,int,int) ;
 int FUNC_4 (struct ubi_volume_desc*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct ubi_device *VAR_1, int VAR_2)
{
 struct ubi_volume_desc VAR_3;
 struct ubi_volume *VAR_4 = VAR_1->volumes[VAR_2];
 int VAR_5, VAR_6 = VAR_4->reserved_pebs;






 VAR_1->vtbl[VAR_2].flags &= ~VAR_0;

 if (VAR_1->avail_pebs == 0) {
  struct ubi_vtbl_record VAR_7;





  FUNC_0(&VAR_7, &VAR_1->vtbl[VAR_2],
         sizeof(struct ubi_vtbl_record));
  VAR_5 = FUNC_1(VAR_1, VAR_2, &VAR_7);
  if (VAR_5)
   FUNC_2("cannot clean auto-resize flag for volume %d",
    VAR_2);
 } else {
  VAR_3.vol = VAR_4;
  VAR_5 = FUNC_4(&VAR_3,
     VAR_6 + VAR_1->avail_pebs);
  if (VAR_5)
   FUNC_2("cannot auto-resize volume %d", VAR_2);
 }

 if (VAR_5)
  return VAR_5;

 FUNC_3("volume %d (\"%s\") re-sized from %d to %d LEBs", VAR_2,
  VAR_4->name, VAR_6, VAR_4->reserved_pebs);
 return 0;
}
