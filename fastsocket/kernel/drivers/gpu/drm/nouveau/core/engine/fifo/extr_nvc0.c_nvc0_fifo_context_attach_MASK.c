
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int offset; int node; } ;
struct nvc0_fifo_base {TYPE_4__ vma; int vm; } ;
struct nouveau_object {int engine; scalar_t__ parent; } ;
struct nouveau_engctx {TYPE_4__ vma; int vm; } ;
struct nouveau_bar {int (* flush ) (struct nouveau_bar*) ;} ;
struct TYPE_6__ {int addr; } ;
struct TYPE_5__ {int addr; } ;


 int VAR_0 ;







 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct nouveau_bar* FUNC_1 (struct nouveau_object*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,TYPE_4__*) ;
 TYPE_2__* FUNC_3 (struct nvc0_fifo_base*) ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (struct nvc0_fifo_base*) ;
 int FUNC_6 (struct nvc0_fifo_base*,int,int) ;
 int FUNC_7 (struct nouveau_bar*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(struct nouveau_object *VAR_2,
    struct nouveau_object *VAR_3)
{
 struct nouveau_bar *VAR_4 = FUNC_1(VAR_2);
 struct nvc0_fifo_base *VAR_5 = (void *)VAR_2->parent;
 struct nouveau_engctx *VAR_6 = (void *)VAR_3;
 u32 VAR_7;
 int VAR_8;

 switch (FUNC_4(VAR_3->engine)) {
 case 129 : return 0;
 case 131 : VAR_7 = 0x0210; break;
 case 133: VAR_7 = 0x0230; break;
 case 132: VAR_7 = 0x0240; break;
 case 134 : VAR_7 = 0x0270; break;
 case 128 : VAR_7 = 0x0250; break;
 case 130 : VAR_7 = 0x0260; break;
 default:
  return -VAR_0;
 }

 if (!VAR_6->vma.node) {
  VAR_8 = FUNC_2(FUNC_5(VAR_6), VAR_5->vm,
         VAR_1, &VAR_6->vma);
  if (VAR_8)
   return VAR_8;

  FUNC_3(VAR_6)->addr = FUNC_5(VAR_5)->addr >> 12;
 }

 FUNC_6(VAR_5, VAR_7 + 0x00, FUNC_0(VAR_6->vma.offset) | 4);
 FUNC_6(VAR_5, VAR_7 + 0x04, FUNC_8(VAR_6->vma.offset));
 VAR_4->flush(VAR_4);
 return 0;
}
