
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vxlan_fdb {int eth_addr; int remotes; int state; } ;
struct vxlan_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int const*,int ) ;
 int FUNC_2 (struct vxlan_dev*,struct vxlan_fdb*,int ) ;

__attribute__((used)) static void FUNC_3(struct vxlan_dev *VAR_3, const u8 VAR_4[VAR_0])
{
 struct vxlan_fdb VAR_5 = {
  .state = VAR_1,
 };

 FUNC_0(&VAR_5.remotes);
 FUNC_1(VAR_5.eth_addr, VAR_4, VAR_0);

 FUNC_2(VAR_3, &VAR_5, VAR_2);
}
