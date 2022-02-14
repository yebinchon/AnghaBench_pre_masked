
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nouveau_vmmgr {int (* create ) (struct nouveau_vmmgr*,int ,int ,int ,struct nouveau_vm**) ;} ;
struct nouveau_vm {int dummy; } ;
struct nouveau_device {int dummy; } ;


 struct nouveau_vmmgr* FUNC_0 (struct nouveau_device*) ;
 int FUNC_1 (struct nouveau_vmmgr*,int ,int ,int ,struct nouveau_vm**) ;

int
FUNC_2(struct nouveau_device *VAR_0, u64 VAR_1, u64 VAR_2,
        u64 VAR_3, struct nouveau_vm **VAR_4)
{
 struct nouveau_vmmgr *VAR_5 = FUNC_0(VAR_0);
 return VAR_5->create(VAR_5, VAR_1, VAR_2, VAR_3, VAR_4);
}
