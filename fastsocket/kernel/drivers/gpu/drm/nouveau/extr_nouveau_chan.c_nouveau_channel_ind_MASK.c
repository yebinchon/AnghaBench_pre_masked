
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct nve0_channel_ind_class {int ilength; int engine; scalar_t__ ioffset; int pushbuf; } ;
struct nouveau_drm {int dummy; } ;
struct nouveau_cli {int dummy; } ;
struct TYPE_3__ {scalar_t__ offset; } ;
struct TYPE_4__ {TYPE_1__ vma; int handle; } ;
struct nouveau_channel {int object; TYPE_2__ push; } ;
typedef int args ;






 int FUNC_0 (struct nouveau_channel**) ;
 int FUNC_1 (struct nouveau_drm*,struct nouveau_cli*,int ,int ,int,struct nouveau_channel**) ;
 int FUNC_2 (int ,int ,int ,int ,struct nve0_channel_ind_class*,int,int *) ;
 int FUNC_3 (struct nouveau_cli*) ;

__attribute__((used)) static int
FUNC_4(struct nouveau_drm *VAR_0, struct nouveau_cli *VAR_1,
      u32 VAR_2, u32 VAR_3, u32 VAR_4,
      struct nouveau_channel **VAR_5)
{
 static const u16 VAR_6[] = { 128,
     129,
     130,
     131,
     0 };
 const u16 *VAR_7 = VAR_6;
 struct nve0_channel_ind_class VAR_8;
 struct nouveau_channel *VAR_9;
 int VAR_10;


 VAR_10 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, 0x12000, &VAR_9);
 *VAR_5 = VAR_9;
 if (VAR_10)
  return VAR_10;


 VAR_8.pushbuf = VAR_9->push.handle;
 VAR_8.ioffset = 0x10000 + VAR_9->push.vma.offset;
 VAR_8.ilength = 0x02000;
 VAR_8.engine = VAR_4;

 do {
  VAR_10 = FUNC_2(FUNC_3(VAR_1), VAR_2, VAR_3,
      *VAR_7++, &VAR_8, sizeof(VAR_8),
      &VAR_9->object);
  if (VAR_10 == 0)
   return VAR_10;
 } while (*VAR_7);

 FUNC_0(VAR_5);
 return VAR_10;
}
