
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvbios {int * data; void* ram_restrict_tbl_ptr; int ram_restrict_group_count; } ;
struct drm_device {int dummy; } ;
struct bit_entry {int length; int version; int offset; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct drm_device *VAR_0, struct nvbios *VAR_1,
        struct bit_entry *VAR_2)
{
 if (VAR_2->length < 0x5)
  return 0;

 if (VAR_2->version < 2) {
  VAR_1->ram_restrict_group_count = VAR_1->data[VAR_2->offset + 2];
  VAR_1->ram_restrict_tbl_ptr = FUNC_0(VAR_1->data[VAR_2->offset + 3]);
 } else {
  VAR_1->ram_restrict_group_count = VAR_1->data[VAR_2->offset + 0];
  VAR_1->ram_restrict_tbl_ptr = FUNC_0(VAR_1->data[VAR_2->offset + 1]);
 }

 return 0;
}
