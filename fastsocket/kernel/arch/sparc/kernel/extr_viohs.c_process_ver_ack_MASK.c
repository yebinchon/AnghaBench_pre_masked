
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int stype; } ;
struct vio_ver_info {scalar_t__ major; scalar_t__ minor; TYPE_2__ tag; int dev_class; } ;
struct TYPE_3__ {scalar_t__ major; scalar_t__ minor; } ;
struct vio_driver_state {int hs_state; int dev_class; TYPE_1__ ver; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vio_driver_state*) ;
 int FUNC_1 (struct vio_driver_state*) ;
 int FUNC_2 (struct vio_driver_state*,TYPE_2__*,int) ;
 int FUNC_3 (int ,char*,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_4(struct vio_driver_state *VAR_3,
      struct vio_ver_info *VAR_4)
{
 FUNC_3(VAR_0, "GOT VERSION ACK maj[%u] min[%u] devclass[%u]\n",
        VAR_4->major, VAR_4->minor, VAR_4->dev_class);

 if (VAR_3->hs_state & VAR_1) {
  if (VAR_3->ver.major != VAR_4->major ||
      VAR_3->ver.minor != VAR_4->minor) {
   VAR_4->tag.stype = VAR_2;
   (void) FUNC_2(VAR_3, &VAR_4->tag, sizeof(*VAR_4));
   return FUNC_0(VAR_3);
  }
 } else {
  VAR_3->ver.major = VAR_4->major;
  VAR_3->ver.minor = VAR_4->minor;
  VAR_3->hs_state = VAR_1;
 }

 switch (VAR_3->dev_class) {
 case 128:
 case 129:
  if (FUNC_1(VAR_3) < 0)
   return FUNC_0(VAR_3);
  break;

 default:
  break;
 }

 return 0;
}
