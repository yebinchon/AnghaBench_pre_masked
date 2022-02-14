
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_volume {scalar_t__ vol_type; int usable_leb_size; int used_ebs; int last_eb_bytes; } ;
struct ubi_device {struct ubi_volume** volumes; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ubi_device*,struct ubi_volume*,int,void*,int ,int,int) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int) ;

int FUNC_3(struct ubi_device *VAR_3, int VAR_4)
{
 void *VAR_5;
 int VAR_6 = 0, VAR_7;
 struct ubi_volume *VAR_8 = VAR_3->volumes[VAR_4];

 if (VAR_8->vol_type != VAR_2)
  return 0;

 VAR_5 = FUNC_2(VAR_8->usable_leb_size);
 if (!VAR_5)
  return -VAR_1;

 for (VAR_7 = 0; VAR_7 < VAR_8->used_ebs; VAR_7++) {
  int VAR_9;

  if (VAR_7 == VAR_8->used_ebs - 1)
   VAR_9 = VAR_8->last_eb_bytes;
  else
   VAR_9 = VAR_8->usable_leb_size;

  VAR_6 = FUNC_0(VAR_3, VAR_8, VAR_7, VAR_5, 0, VAR_9, 1);
  if (VAR_6) {
   if (VAR_6 == -VAR_0)
    VAR_6 = 1;
   break;
  }
 }

 FUNC_1(VAR_5);
 return VAR_6;
}
