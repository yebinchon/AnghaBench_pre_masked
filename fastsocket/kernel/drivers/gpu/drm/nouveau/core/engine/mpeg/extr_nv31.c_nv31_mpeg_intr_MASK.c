
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nv31_mpeg_priv {int dummy; } ;
struct nouveau_subdev {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_handle {int object; } ;
struct nouveau_fifo {int (* chid ) (struct nouveau_fifo*,struct nouveau_object*) ;} ;
struct nouveau_engine {int dummy; } ;


 int FUNC_0 (struct nouveau_object*) ;
 struct nouveau_object* FUNC_1 (struct nouveau_engine*,int) ;
 int FUNC_2 (struct nouveau_object*) ;
 struct nouveau_fifo* FUNC_3 (struct nouveau_subdev*) ;
 struct nouveau_handle* FUNC_4 (struct nouveau_object*,int) ;
 int FUNC_5 (struct nouveau_handle*) ;
 int FUNC_6 (int ,int,int) ;
 struct nouveau_engine* FUNC_7 (struct nouveau_subdev*) ;
 int FUNC_8 (struct nv31_mpeg_priv*,char*,int,int,int ,int,int,int,int) ;
 int FUNC_9 (struct nv31_mpeg_priv*,int,int,int) ;
 int FUNC_10 (struct nv31_mpeg_priv*,int) ;
 int FUNC_11 (struct nv31_mpeg_priv*,int,int) ;
 int FUNC_12 (struct nouveau_fifo*,struct nouveau_object*) ;

void
FUNC_13(struct nouveau_subdev *VAR_0)
{
 struct nouveau_fifo *VAR_1 = FUNC_3(VAR_0);
 struct nouveau_engine *VAR_2 = FUNC_7(VAR_0);
 struct nouveau_object *VAR_3;
 struct nouveau_handle *VAR_4;
 struct nv31_mpeg_priv *VAR_5 = (void *)VAR_0;
 u32 VAR_6 = FUNC_10(VAR_5, 0x00b318) & 0x000fffff;
 u32 VAR_7 = FUNC_10(VAR_5, 0x00b100);
 u32 VAR_8 = FUNC_10(VAR_5, 0x00b230);
 u32 VAR_9 = FUNC_10(VAR_5, 0x00b234);
 u32 VAR_10 = FUNC_10(VAR_5, 0x00b238);
 u32 VAR_11 = VAR_7;
 int VAR_12;

 VAR_3 = FUNC_1(VAR_2, VAR_6);
 VAR_12 = VAR_1->chid(VAR_1, VAR_3);

 if (VAR_7 & 0x01000000) {

  if (VAR_8 == 0x00000020 && VAR_9 == 0x0000) {
   FUNC_9(VAR_5, 0x00b308, 0x00000000, 0x00000000);
   VAR_11 &= ~0x01000000;
  }

  if (VAR_8 == 0x00000010) {
   VAR_4 = FUNC_4(VAR_3, 0x3174);
   if (VAR_4 && !FUNC_6(VAR_4->object, VAR_9, VAR_10))
    VAR_11 &= ~0x01000000;
   FUNC_5(VAR_4);
  }
 }

 FUNC_11(VAR_5, 0x00b100, VAR_7);
 FUNC_11(VAR_5, 0x00b230, 0x00000001);

 if (VAR_11) {
  FUNC_8(VAR_5,
    "ch %d [0x%08x %s] 0x%08x 0x%08x 0x%08x 0x%08x\n",
    VAR_12, VAR_6 << 4, FUNC_0(VAR_3), VAR_7,
    VAR_8, VAR_9, VAR_10);
 }

 FUNC_2(VAR_3);
}
