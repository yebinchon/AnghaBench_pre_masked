
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct nv84_crypt_priv {int dummy; } ;
struct nouveau_subdev {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_fifo {int (* chid ) (struct nouveau_fifo*,struct nouveau_object*) ;} ;
struct nouveau_engine {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct nouveau_object*) ;
 struct nouveau_object* FUNC_2 (struct nouveau_engine*,int) ;
 int FUNC_3 (struct nouveau_object*) ;
 struct nouveau_fifo* FUNC_4 (struct nouveau_subdev*) ;
 int VAR_0 ;
 struct nouveau_engine* FUNC_5 (struct nouveau_subdev*) ;
 int FUNC_6 (struct nv84_crypt_priv*,char*,char*) ;
 int FUNC_7 (struct nv84_crypt_priv*,int) ;
 int FUNC_8 (struct nv84_crypt_priv*,int,int) ;
 int FUNC_9 (char*,int,int,int ,int,int) ;
 int FUNC_10 (struct nouveau_fifo*,struct nouveau_object*) ;

__attribute__((used)) static void
FUNC_11(struct nouveau_subdev *VAR_1)
{
 struct nouveau_fifo *VAR_2 = FUNC_4(VAR_1);
 struct nouveau_engine *VAR_3 = FUNC_5(VAR_1);
 struct nouveau_object *VAR_4;
 struct nv84_crypt_priv *VAR_5 = (void *)VAR_1;
 u32 VAR_6 = FUNC_7(VAR_5, 0x102130);
 u32 VAR_7 = FUNC_7(VAR_5, 0x102190);
 u32 VAR_8 = FUNC_7(VAR_5, 0x102194);
 u32 VAR_9 = FUNC_7(VAR_5, 0x102188) & 0x7fffffff;
 int VAR_10;

 VAR_4 = FUNC_2(VAR_3, VAR_9);
 VAR_10 = VAR_2->chid(VAR_2, VAR_4);

 if (VAR_6) {
  FUNC_6(VAR_5, "%s", "");
  FUNC_0(VAR_0, VAR_6);
  FUNC_9(" ch %d [0x%010llx %s] mthd 0x%04x data 0x%08x\n",
         VAR_10, (u64)VAR_9 << 12, FUNC_1(VAR_4),
         VAR_7, VAR_8);
 }

 FUNC_8(VAR_5, 0x102130, VAR_6);
 FUNC_8(VAR_5, 0x10200c, 0x10);

 FUNC_3(VAR_4);
}
