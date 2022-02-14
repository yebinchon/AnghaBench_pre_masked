
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_vtbl_record {int dummy; } ;
struct ubi_scan_info {int dummy; } ;
struct ubi_device {int vtbl_slots; int vtbl_size; } ;


 int VAR_0 ;
 struct ubi_vtbl_record* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ubi_device*,struct ubi_scan_info*,int,struct ubi_vtbl_record*) ;
 int VAR_3 ;
 int FUNC_2 (struct ubi_vtbl_record*,int *,int ) ;
 int FUNC_3 (struct ubi_vtbl_record*,int ,int ) ;
 int FUNC_4 (struct ubi_vtbl_record*) ;
 struct ubi_vtbl_record* FUNC_5 (int ) ;

__attribute__((used)) static struct ubi_vtbl_record *FUNC_6(struct ubi_device *VAR_4,
       struct ubi_scan_info *VAR_5)
{
 int VAR_6;
 struct ubi_vtbl_record *VAR_7;

 VAR_7 = FUNC_5(VAR_4->vtbl_size);
 if (!VAR_7)
  return FUNC_0(-VAR_0);
 FUNC_3(VAR_7, 0, VAR_4->vtbl_size);

 for (VAR_6 = 0; VAR_6 < VAR_4->vtbl_slots; VAR_6++)
  FUNC_2(&VAR_7[VAR_6], &VAR_3, VAR_2);

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  int VAR_8;

  VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7);
  if (VAR_8) {
   FUNC_4(VAR_7);
   return FUNC_0(VAR_8);
  }
 }

 return VAR_7;
}
