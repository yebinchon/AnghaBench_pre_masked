
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct nv50_fifo_base {int eng; } ;
struct nouveau_object {int engine; scalar_t__ parent; } ;
struct nouveau_gpuobj {scalar_t__ addr; scalar_t__ size; } ;
struct nouveau_bar {int (* flush ) (struct nouveau_bar*) ;} ;
struct TYPE_4__ {int addr; } ;
struct TYPE_3__ {int addr; } ;


 int VAR_0 ;



 int FUNC_0 (scalar_t__) ;
 struct nouveau_bar* FUNC_1 (struct nouveau_object*) ;
 TYPE_2__* FUNC_2 (struct nouveau_gpuobj*) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (struct nv50_fifo_base*) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (struct nouveau_bar*) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static int
FUNC_8(struct nouveau_object *VAR_1,
    struct nouveau_object *VAR_2)
{
 struct nouveau_bar *VAR_3 = FUNC_1(VAR_1);
 struct nv50_fifo_base *VAR_4 = (void *)VAR_1->parent;
 struct nouveau_gpuobj *VAR_5 = (void *)VAR_2;
 u64 VAR_6 = VAR_5->addr + VAR_5->size - 1;
 u64 VAR_7 = VAR_5->addr;
 u32 VAR_8;

 switch (FUNC_3(VAR_2->engine)) {
 case 128 : return 0;
 case 130 : VAR_8 = 0x0000; break;
 case 129 : VAR_8 = 0x0060; break;
 default:
  return -VAR_0;
 }

 FUNC_2(VAR_5)->addr = FUNC_4(VAR_4)->addr >> 12;
 FUNC_5(VAR_4->eng, VAR_8 + 0x00, 0x00190000);
 FUNC_5(VAR_4->eng, VAR_8 + 0x04, FUNC_0(VAR_6));
 FUNC_5(VAR_4->eng, VAR_8 + 0x08, FUNC_0(VAR_7));
 FUNC_5(VAR_4->eng, VAR_8 + 0x0c, FUNC_7(VAR_6) << 24 |
     FUNC_7(VAR_7));
 FUNC_5(VAR_4->eng, VAR_8 + 0x10, 0x00000000);
 FUNC_5(VAR_4->eng, VAR_8 + 0x14, 0x00000000);
 VAR_3->flush(VAR_3);
 return 0;
}
