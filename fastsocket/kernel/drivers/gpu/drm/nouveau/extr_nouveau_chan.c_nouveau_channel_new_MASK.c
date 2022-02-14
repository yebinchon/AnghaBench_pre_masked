
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_drm {int dummy; } ;
struct nouveau_cli {int dummy; } ;
struct nouveau_channel {int dummy; } ;


 int FUNC_0 (struct nouveau_cli*,char*,int) ;
 int FUNC_1 (struct nouveau_cli*,char*,int) ;
 int FUNC_2 (struct nouveau_channel**) ;
 int FUNC_3 (struct nouveau_drm*,struct nouveau_cli*,int ,int ,struct nouveau_channel**) ;
 int FUNC_4 (struct nouveau_drm*,struct nouveau_cli*,int ,int ,int ,struct nouveau_channel**) ;
 int FUNC_5 (struct nouveau_channel*,int ,int ) ;

int
FUNC_6(struct nouveau_drm *VAR_0, struct nouveau_cli *VAR_1,
      u32 VAR_2, u32 VAR_3, u32 VAR_4, u32 VAR_5,
      struct nouveau_channel **VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_6);
 if (VAR_7) {
  FUNC_0(VAR_1, "ib channel create, %d\n", VAR_7);
  VAR_7 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, VAR_6);
  if (VAR_7) {
   FUNC_0(VAR_1, "dma channel create, %d\n", VAR_7);
   return VAR_7;
  }
 }

 VAR_7 = FUNC_5(*VAR_6, VAR_4, VAR_5);
 if (VAR_7) {
  FUNC_1(VAR_1, "channel failed to initialise, %d\n", VAR_7);
  FUNC_2(VAR_6);
  return VAR_7;
 }

 return 0;
}
