
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvc0_fifo_priv {size_t cur_playlist; struct nouveau_gpuobj** playlist; } ;
struct nouveau_gpuobj {int addr; } ;
struct nouveau_bar {int (* flush ) (struct nouveau_bar*) ;} ;


 struct nouveau_bar* FUNC_0 (struct nvc0_fifo_priv*) ;
 int FUNC_1 (struct nvc0_fifo_priv*,char*) ;
 int FUNC_2 (struct nvc0_fifo_priv*,int) ;
 int FUNC_3 (struct nvc0_fifo_priv*,int,int,int) ;
 int FUNC_4 (struct nouveau_gpuobj*,int,int) ;
 int FUNC_5 (struct nvc0_fifo_priv*,int,int) ;
 int FUNC_6 (struct nouveau_bar*) ;

__attribute__((used)) static void
FUNC_7(struct nvc0_fifo_priv *VAR_0)
{
 struct nouveau_bar *VAR_1 = FUNC_0(VAR_0);
 struct nouveau_gpuobj *VAR_2;
 int VAR_3, VAR_4;

 VAR_2 = VAR_0->playlist[VAR_0->cur_playlist];
 VAR_0->cur_playlist = !VAR_0->cur_playlist;

 for (VAR_3 = 0, VAR_4 = 0; VAR_3 < 128; VAR_3++) {
  if (!(FUNC_2(VAR_0, 0x003004 + (VAR_3 * 8)) & 1))
   continue;
  FUNC_4(VAR_2, VAR_4 + 0, VAR_3);
  FUNC_4(VAR_2, VAR_4 + 4, 0x00000004);
  VAR_4 += 8;
 }
 VAR_1->flush(VAR_1);

 FUNC_5(VAR_0, 0x002270, VAR_2->addr >> 12);
 FUNC_5(VAR_0, 0x002274, 0x01f00000 | (VAR_4 >> 3));
 if (!FUNC_3(VAR_0, 0x00227c, 0x00100000, 0x00000000))
  FUNC_1(VAR_0, "playlist update failed\n");
}
