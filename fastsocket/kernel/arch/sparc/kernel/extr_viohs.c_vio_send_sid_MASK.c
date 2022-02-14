
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vio_driver_state {int dev_class; int _peer_sid; int _local_sid; } ;







u32 FUNC_0(struct vio_driver_state *VAR_0)
{
 switch (VAR_0->dev_class) {
 case 129:
 case 128:
 case 131:
 default:
  return VAR_0->_local_sid;

 case 130:
  return VAR_0->_peer_sid;
 }
}
