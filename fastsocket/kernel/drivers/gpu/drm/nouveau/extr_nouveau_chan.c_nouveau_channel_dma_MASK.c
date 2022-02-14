
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct nv03_channel_dma_class {int offset; int pushbuf; } ;
struct nouveau_drm {int dummy; } ;
struct nouveau_cli {int dummy; } ;
struct TYPE_3__ {int offset; } ;
struct TYPE_4__ {TYPE_1__ vma; int handle; } ;
struct nouveau_channel {int object; TYPE_2__ push; } ;
typedef int args ;






 int FUNC_0 (struct nouveau_channel**) ;
 int FUNC_1 (struct nouveau_drm*,struct nouveau_cli*,int ,int ,int,struct nouveau_channel**) ;
 int FUNC_2 (int ,int ,int ,int ,struct nv03_channel_dma_class*,int,int *) ;
 int FUNC_3 (struct nouveau_cli*) ;

__attribute__((used)) static int
FUNC_4(struct nouveau_drm *VAR_0, struct nouveau_cli *VAR_1,
      u32 VAR_2, u32 VAR_3, struct nouveau_channel **VAR_4)
{
 static const u16 VAR_5[] = { 128,
     129,
     130,
     131,
     0 };
 const u16 *VAR_6 = VAR_5;
 struct nv03_channel_dma_class VAR_7;
 struct nouveau_channel *VAR_8;
 int VAR_9;


 VAR_9 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, 0x10000, &VAR_8);
 *VAR_4 = VAR_8;
 if (VAR_9)
  return VAR_9;


 VAR_7.pushbuf = VAR_8->push.handle;
 VAR_7.offset = VAR_8->push.vma.offset;

 do {
  VAR_9 = FUNC_2(FUNC_3(VAR_1), VAR_2, VAR_3,
      *VAR_6++, &VAR_7, sizeof(VAR_7),
      &VAR_8->object);
  if (VAR_9 == 0)
   return VAR_9;
 } while (VAR_9 && *VAR_6);

 FUNC_0(VAR_4);
 return VAR_9;
}
