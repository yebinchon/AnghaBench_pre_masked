
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef void* u16 ;
struct vio_ver_info {int tag; int dev_class; void* minor; void* major; } ;
struct vio_driver_state {int dev_class; scalar_t__ _local_sid; } ;
typedef int pkt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (struct vio_ver_info*,int ,int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct vio_driver_state*,int *,int) ;
 int FUNC_4 (int ,char*,void*,void*,int ) ;

__attribute__((used)) static int FUNC_5(struct vio_driver_state *VAR_4, u16 VAR_5, u16 VAR_6)
{
 struct vio_ver_info VAR_7;

 VAR_4->_local_sid = (u32) FUNC_2();

 FUNC_1(&VAR_7, 0, sizeof(VAR_7));
 FUNC_0(&VAR_7.tag, VAR_2, VAR_1, VAR_3);
 VAR_7.major = VAR_5;
 VAR_7.minor = VAR_6;
 VAR_7.dev_class = VAR_4->dev_class;

 FUNC_4(VAR_0, "SEND VERSION INFO maj[%u] min[%u] devclass[%u]\n",
        VAR_5, VAR_6, VAR_4->dev_class);

 return FUNC_3(VAR_4, &VAR_7.tag, sizeof(VAR_7));
}
