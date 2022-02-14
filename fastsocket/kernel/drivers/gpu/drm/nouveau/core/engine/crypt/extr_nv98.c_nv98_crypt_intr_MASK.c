
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct nv98_crypt_priv {int dummy; } ;
struct nouveau_subdev {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_fifo {int (* chid ) (struct nouveau_fifo*,struct nouveau_object*) ;} ;
struct nouveau_engine {int dummy; } ;


 int FUNC_0 (struct nouveau_object*) ;
 struct nouveau_object* FUNC_1 (struct nouveau_engine*,int) ;
 int FUNC_2 (struct nouveau_object*) ;
 int FUNC_3 (int ,int) ;
 struct nouveau_fifo* FUNC_4 (struct nouveau_subdev*) ;
 int VAR_0 ;
 struct nouveau_engine* FUNC_5 (struct nouveau_subdev*) ;
 int FUNC_6 (struct nv98_crypt_priv*,char*,...) ;
 int FUNC_7 (struct nv98_crypt_priv*,int) ;
 int FUNC_8 (struct nv98_crypt_priv*,int,int) ;
 int FUNC_9 (char*,int,int,int ,int,int,int) ;
 int FUNC_10 (struct nouveau_fifo*,struct nouveau_object*) ;

__attribute__((used)) static void
FUNC_11(struct nouveau_subdev *VAR_1)
{
 struct nouveau_fifo *VAR_2 = FUNC_4(VAR_1);
 struct nouveau_engine *VAR_3 = FUNC_5(VAR_1);
 struct nouveau_object *VAR_4;
 struct nv98_crypt_priv *VAR_5 = (void *)VAR_1;
 u32 VAR_6 = FUNC_7(VAR_5, 0x08701c);
 u32 VAR_7 = FUNC_7(VAR_5, 0x087008) & VAR_6 & ~(VAR_6 >> 16);
 u32 VAR_8 = FUNC_7(VAR_5, 0x087050) & 0x3fffffff;
 u32 VAR_9 = FUNC_7(VAR_5, 0x087040) & 0x0000ffff;
 u32 VAR_10 = FUNC_7(VAR_5, 0x087040) >> 16;
 u32 VAR_11 = (VAR_10 & 0x07ff) << 2;
 u32 VAR_12 = (VAR_10 & 0x3800) >> 11;
 u32 VAR_13 = FUNC_7(VAR_5, 0x087044);
 int VAR_14;

 VAR_4 = FUNC_1(VAR_3, VAR_8);
 VAR_14 = VAR_2->chid(VAR_2, VAR_4);

 if (VAR_7 & 0x00000040) {
  FUNC_6(VAR_5, "DISPATCH_ERROR [");
  FUNC_3(VAR_0, VAR_9);
  FUNC_9("] ch %d [0x%010llx %s] subc %d mthd 0x%04x data 0x%08x\n",
         VAR_14, (u64)VAR_8 << 12, FUNC_0(VAR_4),
         VAR_12, VAR_11, VAR_13);
  FUNC_8(VAR_5, 0x087004, 0x00000040);
  VAR_7 &= ~0x00000040;
 }

 if (VAR_7) {
  FUNC_6(VAR_5, "unhandled intr 0x%08x\n", VAR_7);
  FUNC_8(VAR_5, 0x087004, VAR_7);
 }

 FUNC_2(VAR_4);
}
