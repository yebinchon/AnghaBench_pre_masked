
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vnode_t ;
typedef int vfs_context_t ;
typedef int vfa ;
struct TYPE_2__ {int* capabilities; int* valid; } ;
struct vfs_attr {TYPE_1__ f_capabilities; } ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (struct vfs_attr*) ;
 int FUNC_1 (struct vfs_attr*,int ) ;
 int FUNC_2 (struct vfs_attr*,int ) ;
 int FUNC_3 (int ,int,int*,int ) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct vfs_attr*,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,struct vfs_attr*,int ) ;
 int FUNC_8 (int ) ;

int
FUNC_9(vnode_t VAR_4, int VAR_5, int32_t *VAR_6, vfs_context_t VAR_7)
{
 int VAR_8 = 0;
 struct vfs_attr VAR_9;

 switch(VAR_5) {
 case 136:
  *VAR_6 = FUNC_6(FUNC_8(VAR_4)) ? 1 : 0;
  break;
 case 137:
  *VAR_6 = FUNC_5(FUNC_8(VAR_4));
  break;
 case 140:
  *VAR_6 = 1;
  break;
 case 139:
  *VAR_6 = 1;
  break;
 case 138:
  *VAR_6 = 1;
  break;
 case 135:
  *VAR_6 = 0;
  break;
 case 134:
  *VAR_6 = 4096;
  break;
 case 132:
  *VAR_6 = 4096;
  break;
 case 133:
  *VAR_6 = 65536;
  break;
 case 131:
  *VAR_6 = 4096;
  break;
 case 130:
  *VAR_6 = 255;
  break;
 case 129:
  *VAR_6 = 0;
  break;
 case 128:
  FUNC_4(&VAR_9, 0, sizeof(VAR_9));
  FUNC_0(&VAR_9);
  FUNC_2(&VAR_9, VAR_3);
  if (FUNC_7(FUNC_8(VAR_4), &VAR_9, VAR_7) == 0 &&
      (FUNC_1(&VAR_9, VAR_3)) &&
      (VAR_9.f_capabilities.capabilities[VAR_1] & VAR_2) &&
      (VAR_9.f_capabilities.valid[VAR_1] & VAR_2)) {

   VAR_8 = FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7);
  } else {



   *VAR_6 = VAR_0;
  }
  break;
 default:
  VAR_8 = FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7);
  break;
 }

 return (VAR_8);
}
