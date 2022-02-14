
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct vio_driver_state {int dummy; } ;
struct vnet_port {struct vio_driver_state vio; } ;
struct vio_dring_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,struct vio_dring_state*) ;
 scalar_t__ FUNC_1 (scalar_t__,struct vio_dring_state*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct vnet_port*,struct vio_dring_state*,int,int,int ) ;
 int FUNC_5 (struct vnet_port*,struct vio_dring_state*,scalar_t__,int*) ;

__attribute__((used)) static int FUNC_6(struct vnet_port *VAR_4, struct vio_dring_state *VAR_5,
   u32 VAR_6, u32 VAR_7)
{
 struct vio_driver_state *VAR_8 = &VAR_4->vio;
 int VAR_9 = -1, VAR_10 = -1;

 VAR_7 = (VAR_7 == (u32) -1) ? FUNC_1(VAR_6, VAR_5) : FUNC_0(VAR_7, VAR_5);

 FUNC_3(VAR_0, "vnet_walk_rx start[%08x] end[%08x]\n", VAR_6, VAR_7);

 while (VAR_6 != VAR_7) {
  int VAR_11 = 0, VAR_12 = FUNC_5(VAR_4, VAR_5, VAR_6, &VAR_11);
  if (VAR_12 == -VAR_1)
   return VAR_12;
  if (VAR_12 != 0)
   break;
  if (VAR_9 == -1)
   VAR_9 = VAR_6;
  VAR_10 = VAR_6;
  VAR_6 = FUNC_0(VAR_6, VAR_5);
  if (VAR_11 && VAR_6 != VAR_7) {
   VAR_12 = FUNC_4(VAR_4, VAR_5, VAR_9, VAR_10,
         VAR_2);
   if (VAR_12 == -VAR_1)
    return VAR_12;
   VAR_9 = -1;
  }
 }
 if (FUNC_2(VAR_9 == -1))
  VAR_9 = VAR_10 = FUNC_1(VAR_6, VAR_5);
 return FUNC_4(VAR_4, VAR_5, VAR_9, VAR_10, VAR_3);
}
