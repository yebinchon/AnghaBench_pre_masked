
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u8 ;
struct osd_obj_id {scalar_t__ id; scalar_t__ partition; } ;
struct TYPE_4__ {void* allowed_object_id; void* allowed_partition_id; scalar_t__ policy_access_tag; } ;
struct TYPE_5__ {TYPE_1__ obj_desc; } ;
struct TYPE_6__ {void* object_descriptor_type; void* object_type; int security_method; scalar_t__ integrity_algorithm__key_version; int format; } ;
struct osd_capability {TYPE_2__ od; TYPE_3__ h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct osd_capability*,int ,int) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_5 (int) ;

void FUNC_6(void *VAR_10,
 const struct osd_obj_id *VAR_11, bool VAR_12, const bool VAR_13)
{
 struct osd_capability *VAR_14 = VAR_10;
 u8 VAR_15;
 u8 VAR_16;

 if (FUNC_2(VAR_11->id)) {
  if (FUNC_5(VAR_12)) {
   VAR_15 = VAR_3;
   VAR_16 = VAR_13 ? VAR_5 :
        VAR_4;
  } else {
   VAR_15 = VAR_9;
   VAR_16 = VAR_5;
  }
  FUNC_0(!VAR_11->partition);
 } else {
  VAR_15 = VAR_11->partition ? VAR_7 :
     VAR_8;
  VAR_16 = VAR_6;
 }

 FUNC_3(VAR_14, 0, sizeof(*VAR_14));

 VAR_14->h.format = VAR_0;
 VAR_14->h.integrity_algorithm__key_version = 0;
 VAR_14->h.security_method = VAR_2;




 VAR_14->h.object_type = VAR_15;
 FUNC_4(&VAR_14->h, VAR_1);
 VAR_14->h.object_descriptor_type = VAR_16;
 VAR_14->od.obj_desc.policy_access_tag = 0;
 VAR_14->od.obj_desc.allowed_partition_id = FUNC_1(VAR_11->partition);
 VAR_14->od.obj_desc.allowed_object_id = FUNC_1(VAR_11->id);
}
