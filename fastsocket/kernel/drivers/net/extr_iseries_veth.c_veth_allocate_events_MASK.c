
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct veth_lpevent {int dummy; } ;
struct veth_allocation {int num; int c; int member_1; int member_0; } ;
typedef int HvLpIndex ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int,int,int *,struct veth_allocation*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(HvLpIndex VAR_2, int VAR_3)
{
 struct veth_allocation VAR_4 =
  { FUNC_0(VAR_4.c), 0 };

 FUNC_1(VAR_2, VAR_0,
       sizeof(struct veth_lpevent), VAR_3,
       &VAR_1, &VAR_4);
 FUNC_2(&VAR_4.c);

 return VAR_4.num;
}
