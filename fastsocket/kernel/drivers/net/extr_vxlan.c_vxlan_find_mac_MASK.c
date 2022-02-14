
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vxlan_fdb {int used; } ;
struct vxlan_dev {int dummy; } ;


 struct vxlan_fdb* FUNC_0 (struct vxlan_dev*,int const*) ;
 int VAR_0 ;

__attribute__((used)) static struct vxlan_fdb *FUNC_1(struct vxlan_dev *VAR_1,
     const u8 *VAR_2)
{
 struct vxlan_fdb *VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3)
  VAR_3->used = VAR_0;

 return VAR_3;
}
