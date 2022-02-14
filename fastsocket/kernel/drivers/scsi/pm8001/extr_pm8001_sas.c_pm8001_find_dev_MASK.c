
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct pm8001_hba_info {struct pm8001_device* devices; } ;
struct pm8001_device {size_t device_id; } ;


 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 size_t VAR_0 ;
 int FUNC_1 (char*) ;

struct pm8001_device *FUNC_2(struct pm8001_hba_info *VAR_1,
     u32 VAR_2)
{
 u32 VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1->devices[VAR_3].device_id == VAR_2)
   return &VAR_1->devices[VAR_3];
 }
 if (VAR_3 == VAR_0) {
  FUNC_0(VAR_1, FUNC_1("NO MATCHING "
    "DEVICE FOUND !!!\n"));
 }
 return ((void*)0);
}
