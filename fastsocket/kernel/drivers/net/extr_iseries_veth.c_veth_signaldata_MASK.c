
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct veth_lpar_connection {int dummy; } ;
typedef int HvLpEvent_Rc ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct veth_lpar_connection*,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static inline HvLpEvent_Rc FUNC_1(struct veth_lpar_connection *VAR_2,
        u16 VAR_3, u64 VAR_4, void *VAR_5)
{
 u64 *VAR_6 = (u64 *) VAR_5;

 return FUNC_0(VAR_2, VAR_3, VAR_0,
    VAR_1,
    VAR_4, VAR_6[0], VAR_6[1], VAR_6[2], VAR_6[3], VAR_6[4]);
}
