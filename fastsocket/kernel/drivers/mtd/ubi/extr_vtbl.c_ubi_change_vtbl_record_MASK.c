
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ubi_vtbl_record {int crc; } ;
struct ubi_volume {int dummy; } ;
struct ubi_device {int vtbl_slots; int vtbl_size; int * vtbl; struct ubi_volume** volumes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct ubi_vtbl_record*,int ) ;
 struct ubi_vtbl_record VAR_5 ;
 int FUNC_2 (int *,struct ubi_vtbl_record*,int) ;
 int FUNC_3 (struct ubi_device*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ubi_device*,struct ubi_volume*,int) ;
 int FUNC_6 (struct ubi_device*,struct ubi_volume*,int,int *,int ,int ,int ) ;
 size_t FUNC_7 (struct ubi_device*,int ) ;

int FUNC_8(struct ubi_device *VAR_6, int VAR_7,
      struct ubi_vtbl_record *VAR_8)
{
 int VAR_9, VAR_10;
 uint32_t VAR_11;
 struct ubi_volume *VAR_12;

 FUNC_4(VAR_7 >= 0 && VAR_7 < VAR_6->vtbl_slots);
 VAR_12 = VAR_6->volumes[FUNC_7(VAR_6, VAR_2)];

 if (!VAR_8)
  VAR_8 = &VAR_5;
 else {
  VAR_11 = FUNC_1(VAR_0, VAR_8, VAR_4);
  VAR_8->crc = FUNC_0(VAR_11);
 }

 FUNC_2(&VAR_6->vtbl[VAR_7], VAR_8, sizeof(struct ubi_vtbl_record));
 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  VAR_10 = FUNC_5(VAR_6, VAR_12, VAR_9);
  if (VAR_10)
   return VAR_10;

  VAR_10 = FUNC_6(VAR_6, VAR_12, VAR_9, VAR_6->vtbl, 0,
     VAR_6->vtbl_size, VAR_3);
  if (VAR_10)
   return VAR_10;
 }

 FUNC_3(VAR_6);
 return 0;
}
