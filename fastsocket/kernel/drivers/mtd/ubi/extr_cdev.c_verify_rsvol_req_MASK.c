
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_rsvol_req {scalar_t__ bytes; scalar_t__ vol_id; } ;
struct ubi_device {scalar_t__ vtbl_slots; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const struct ubi_device *VAR_1,
       const struct ubi_rsvol_req *VAR_2)
{
 if (VAR_2->bytes <= 0)
  return -VAR_0;

 if (VAR_2->vol_id < 0 || VAR_2->vol_id >= VAR_1->vtbl_slots)
  return -VAR_0;

 return 0;
}
