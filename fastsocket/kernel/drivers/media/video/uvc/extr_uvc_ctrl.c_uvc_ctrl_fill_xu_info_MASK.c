
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct uvc_device {int intfnum; } ;
struct uvc_control_info {int flags; int size; scalar_t__ selector; int entity; scalar_t__ index; } ;
struct uvc_control {TYPE_2__* entity; scalar_t__ index; } ;
typedef int __le16 ;
struct TYPE_3__ {int guidExtensionCode; } ;
struct TYPE_4__ {int id; TYPE_1__ extension; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct uvc_device*,struct uvc_control const*,struct uvc_control_info*) ;
 int FUNC_5 (struct uvc_device*,int ,int ,int ,scalar_t__,int*,int) ;
 int FUNC_6 (int ,char*,int ,scalar_t__,int,...) ;

__attribute__((used)) static int FUNC_7(struct uvc_device *VAR_15,
 const struct uvc_control *VAR_16, struct uvc_control_info *VAR_17)
{
 u8 *VAR_18;
 int VAR_19;

 VAR_18 = FUNC_1(2, VAR_1);
 if (VAR_18 == ((void*)0))
  return -VAR_0;

 FUNC_3(VAR_17->entity, VAR_16->entity->extension.guidExtensionCode,
        sizeof(VAR_17->entity));
 VAR_17->index = VAR_16->index;
 VAR_17->selector = VAR_16->index + 1;


 VAR_19 = FUNC_5(VAR_15, VAR_13, VAR_16->entity->id, VAR_15->intfnum,
        VAR_17->selector, VAR_18, 2);
 if (VAR_19 < 0) {
  FUNC_6(VAR_14,
     "GET_LEN failed on control %pUl/%u (%d).\n",
      VAR_17->entity, VAR_17->selector, VAR_19);
  goto done;
 }

 VAR_17->size = FUNC_2((__le16 *)VAR_18);


 VAR_19 = FUNC_5(VAR_15, VAR_12, VAR_16->entity->id, VAR_15->intfnum,
        VAR_17->selector, VAR_18, 1);
 if (VAR_19 < 0) {
  FUNC_6(VAR_14,
     "GET_INFO failed on control %pUl/%u (%d).\n",
     VAR_17->entity, VAR_17->selector, VAR_19);
  goto done;
 }

 VAR_17->flags = VAR_9 | VAR_8
      | VAR_10 | VAR_7
      | (VAR_18[0] & VAR_4 ? VAR_6 : 0)
      | (VAR_18[0] & VAR_5 ? VAR_11 : 0)
      | (VAR_18[0] & VAR_3 ?
         VAR_2 : 0);

 FUNC_4(VAR_15, VAR_16, VAR_17);

 FUNC_6(VAR_14, "XU control %pUl/%u queried: len %u, "
    "flags { get %u set %u auto %u }.\n",
    VAR_17->entity, VAR_17->selector, VAR_17->size,
    (VAR_17->flags & VAR_6) ? 1 : 0,
    (VAR_17->flags & VAR_11) ? 1 : 0,
    (VAR_17->flags & VAR_2) ? 1 : 0);

done:
 FUNC_0(VAR_18);
 return VAR_19;
}
