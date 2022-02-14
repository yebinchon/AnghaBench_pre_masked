
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct nv50_graph_priv {int lock; } ;
struct nouveau_timer {int (* read ) (struct nouveau_timer*) ;} ;
struct nouveau_engine {int base; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct nv50_graph_priv*,int,int ,int) ;
 struct nouveau_timer* FUNC_2 (struct nouveau_engine*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct nv50_graph_priv*,char*,...) ;
 int FUNC_5 (struct nv50_graph_priv*,int,int,int) ;
 int FUNC_6 (struct nv50_graph_priv*,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (struct nouveau_timer*) ;
 int FUNC_11 (struct nouveau_timer*) ;

__attribute__((used)) static int
FUNC_12(struct nouveau_engine *VAR_5)
{
 struct nouveau_timer *VAR_6 = FUNC_2(VAR_5);
 struct nv50_graph_priv *VAR_7 = (void *)VAR_5;
 bool VAR_8, VAR_9 = 0;
 unsigned long VAR_10;
 u64 VAR_11;
 u32 VAR_12;

 FUNC_8(&VAR_7->lock, VAR_10);
 FUNC_5(VAR_7, 0x400500, 0x00000001, 0x00000000);

 VAR_11 = VAR_6->read(VAR_6);
 do {
  VAR_8 = 1;

  for (VAR_12 = FUNC_6(VAR_7, 0x400380); VAR_12 && VAR_8; VAR_12 >>= 3) {
   if ((VAR_12 & 7) == 1)
    VAR_8 = 0;
  }

  for (VAR_12 = FUNC_6(VAR_7, 0x400384); VAR_12 && VAR_8; VAR_12 >>= 3) {
   if ((VAR_12 & 7) == 1)
    VAR_8 = 0;
  }

  for (VAR_12 = FUNC_6(VAR_7, 0x400388); VAR_12 && VAR_8; VAR_12 >>= 3) {
   if ((VAR_12 & 7) == 1)
    VAR_8 = 0;
  }
 } while (!VAR_8 &&
   !(VAR_9 = VAR_6->read(VAR_6) - VAR_11 > 2000000000));

 if (VAR_9) {
  FUNC_4(VAR_7, "PGRAPH TLB flush idle timeout fail\n");

  VAR_12 = FUNC_6(VAR_7, 0x400700);
  FUNC_4(VAR_7, "PGRAPH_STATUS  : 0x%08x", VAR_12);
  FUNC_0(VAR_1, VAR_12);
  FUNC_7("\n");

  FUNC_1(VAR_7, 0, VAR_2,
    FUNC_6(VAR_7, 0x400380));
  FUNC_1(VAR_7, 1, VAR_3,
    FUNC_6(VAR_7, 0x400384));
  FUNC_1(VAR_7, 2, VAR_4,
    FUNC_6(VAR_7, 0x400388));
 }

 FUNC_3(&VAR_5->base, 0x00);

 FUNC_5(VAR_7, 0x400500, 0x00000001, 0x00000001);
 FUNC_9(&VAR_7->lock, VAR_10);
 return VAR_9 ? -VAR_0 : 0;
}
