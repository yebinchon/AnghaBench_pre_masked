
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct nouveau_subdev {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_fifo {int (* chid ) (struct nouveau_fifo*,struct nouveau_object*) ;} ;
struct nouveau_falcon {int dummy; } ;
struct nouveau_engine {int dummy; } ;


 int FUNC_0 (struct nouveau_object*) ;
 struct nouveau_object* FUNC_1 (struct nouveau_engine*,int) ;
 int FUNC_2 (struct nouveau_object*) ;
 int FUNC_3 (int ,int) ;
 struct nouveau_fifo* FUNC_4 (struct nouveau_subdev*) ;
 struct nouveau_engine* FUNC_5 (struct nouveau_subdev*) ;
 int FUNC_6 (struct nouveau_falcon*,char*,...) ;
 int FUNC_7 (struct nouveau_falcon*,int) ;
 int FUNC_8 (struct nouveau_falcon*,int,int) ;
 int VAR_0 ;
 int FUNC_9 (char*,int,int,int ,int,int,int) ;
 int FUNC_10 (struct nouveau_fifo*,struct nouveau_object*) ;

void
FUNC_11(struct nouveau_subdev *VAR_1)
{
 struct nouveau_fifo *VAR_2 = FUNC_4(VAR_1);
 struct nouveau_engine *VAR_3 = FUNC_5(VAR_1);
 struct nouveau_falcon *VAR_4 = (void *)VAR_1;
 struct nouveau_object *VAR_5;
 u32 VAR_6 = FUNC_7(VAR_4, 0x01c);
 u32 VAR_7 = FUNC_7(VAR_4, 0x008) & VAR_6 & ~(VAR_6 >> 16);
 u64 VAR_8 = FUNC_7(VAR_4, 0x050) & 0x3fffffff;
 u32 VAR_9 = FUNC_7(VAR_4, 0x040) & 0x0000ffff;
 u32 VAR_10 = FUNC_7(VAR_4, 0x040) >> 16;
 u32 VAR_11 = (VAR_10 & 0x07ff) << 2;
 u32 VAR_12 = (VAR_10 & 0x3800) >> 11;
 u32 VAR_13 = FUNC_7(VAR_4, 0x044);
 int VAR_14;

 VAR_5 = FUNC_1(VAR_3, VAR_8);
 VAR_14 = VAR_2->chid(VAR_2, VAR_5);

 if (VAR_7 & 0x00000040) {
  FUNC_6(VAR_4, "DISPATCH_ERROR [");
  FUNC_3(VAR_0, VAR_9);
  FUNC_9("] ch %d [0x%010llx %s] subc %d mthd 0x%04x data 0x%08x\n",
         VAR_14, VAR_8 << 12, FUNC_0(VAR_5), VAR_12,
         VAR_11, VAR_13);
  FUNC_8(VAR_4, 0x004, 0x00000040);
  VAR_7 &= ~0x00000040;
 }

 if (VAR_7) {
  FUNC_6(VAR_4, "unhandled intr 0x%08x\n", VAR_7);
  FUNC_8(VAR_4, 0x004, VAR_7);
 }

 FUNC_2(VAR_5);
}
