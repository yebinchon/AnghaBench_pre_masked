
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vio_version {scalar_t__ major; scalar_t__ minor; } ;
struct TYPE_2__ {void* stype; int sid; } ;
struct vio_ver_info {scalar_t__ major; scalar_t__ minor; TYPE_1__ tag; int dev_class; } ;
struct vio_driver_state {scalar_t__ hs_state; struct vio_version ver; int _peer_sid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 struct vio_version* FUNC_0 (struct vio_driver_state*,scalar_t__) ;
 int FUNC_1 (struct vio_driver_state*) ;
 int FUNC_2 (struct vio_version*,int ,int) ;
 int FUNC_3 (struct vio_driver_state*,TYPE_1__*,int) ;
 int FUNC_4 (int ,char*,...) ;

__attribute__((used)) static int FUNC_5(struct vio_driver_state *VAR_5,
       struct vio_ver_info *VAR_6)
{
 struct vio_version *VAR_7;
 int VAR_8;

 FUNC_4(VAR_0, "GOT VERSION INFO maj[%u] min[%u] devclass[%u]\n",
        VAR_6->major, VAR_6->minor, VAR_6->dev_class);

 if (VAR_5->hs_state != VAR_2) {

  FUNC_2(&VAR_5->ver, 0, sizeof(VAR_5->ver));
  VAR_5->hs_state = VAR_2;
 }

 VAR_7 = FUNC_0(VAR_5, VAR_6->major);

 VAR_5->_peer_sid = VAR_6->tag.sid;

 if (!VAR_7) {
  VAR_6->tag.stype = VAR_4;
  VAR_6->major = 0;
  VAR_6->minor = 0;
  FUNC_4(VAR_0, "SEND VERSION NACK maj[0] min[0]\n");
  VAR_8 = FUNC_3(VAR_5, &VAR_6->tag, sizeof(*VAR_6));
 } else if (VAR_7->major != VAR_6->major) {
  VAR_6->tag.stype = VAR_4;
  VAR_6->major = VAR_7->major;
  VAR_6->minor = VAR_7->minor;
  FUNC_4(VAR_0, "SEND VERSION NACK maj[%u] min[%u]\n",
         VAR_6->major, VAR_6->minor);
  VAR_8 = FUNC_3(VAR_5, &VAR_6->tag, sizeof(*VAR_6));
 } else {
  struct vio_version VAR_9 = {
   .major = VAR_6->major,
   .minor = VAR_6->minor,
  };
  if (VAR_9.minor > VAR_7->minor)
   VAR_9.minor = VAR_7->minor;
  VAR_6->minor = VAR_9.minor;
  VAR_6->tag.stype = VAR_3;
  FUNC_4(VAR_0, "SEND VERSION ACK maj[%u] min[%u]\n",
         VAR_6->major, VAR_6->minor);
  VAR_8 = FUNC_3(VAR_5, &VAR_6->tag, sizeof(*VAR_6));
  if (VAR_8 > 0) {
   VAR_5->ver = VAR_9;
   VAR_5->hs_state = VAR_1;
  }
 }
 if (VAR_8 < 0)
  return FUNC_1(VAR_5);

 return 0;
}
