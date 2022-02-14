
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_3__ {int max; } ;
struct nve0_fifo_priv {TYPE_1__ base; struct nve0_fifo_engn* engine; } ;
struct nve0_fifo_engn {size_t cur_playlist; struct nouveau_gpuobj** playlist; } ;
struct nouveau_gpuobj {int addr; } ;
struct nouveau_bar {int (* flush ) (struct nouveau_bar*) ;} ;
struct TYPE_4__ {int parent; } ;


 struct nouveau_bar* FUNC_0 (struct nve0_fifo_priv*) ;
 int FUNC_1 (int ,int *,int,int,int ,struct nouveau_gpuobj**) ;
 int FUNC_2 (struct nve0_fifo_priv*,char*,...) ;
 TYPE_2__* FUNC_3 (struct nve0_fifo_priv*) ;
 int FUNC_4 (struct nve0_fifo_priv*,int) ;
 int FUNC_5 (struct nve0_fifo_priv*,int,int,int) ;
 int FUNC_6 (struct nouveau_gpuobj*,int,int) ;
 int FUNC_7 (struct nve0_fifo_priv*,int,size_t) ;
 int FUNC_8 (struct nouveau_bar*) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(struct nve0_fifo_priv *VAR_0, u32 VAR_1)
{
 struct nouveau_bar *VAR_2 = FUNC_0(VAR_0);
 struct nve0_fifo_engn *VAR_3 = &VAR_0->engine[VAR_1];
 struct nouveau_gpuobj *VAR_4;
 u32 VAR_5 = (VAR_1 << 16) | 0x00000001;
 int VAR_6, VAR_7;

 VAR_4 = VAR_3->playlist[VAR_3->cur_playlist];
 if (FUNC_9(VAR_4 == ((void*)0))) {
  int VAR_8 = FUNC_1(FUNC_3(VAR_0)->parent, ((void*)0),
          0x8000, 0x1000, 0, &VAR_4);
  if (VAR_8) {
   FUNC_2(VAR_0, "playlist alloc failed\n");
   return;
  }

  VAR_3->playlist[VAR_3->cur_playlist] = VAR_4;
 }

 VAR_3->cur_playlist = !VAR_3->cur_playlist;

 for (VAR_6 = 0, VAR_7 = 0; VAR_6 < VAR_0->base.max; VAR_6++) {
  u32 VAR_9 = FUNC_4(VAR_0, 0x800004 + (VAR_6 * 8)) & 0x001f0001;
  if (VAR_9 != VAR_5)
   continue;
  FUNC_6(VAR_4, VAR_7 + 0, VAR_6);
  FUNC_6(VAR_4, VAR_7 + 4, 0x00000000);
  VAR_7 += 8;
 }
 VAR_2->flush(VAR_2);

 FUNC_7(VAR_0, 0x002270, VAR_4->addr >> 12);
 FUNC_7(VAR_0, 0x002274, (VAR_1 << 20) | (VAR_7 >> 3));
 if (!FUNC_5(VAR_0, 0x002284 + (VAR_1 * 4), 0x00100000, 0x00000000))
  FUNC_2(VAR_0, "playlist %d update timeout\n", VAR_1);
}
