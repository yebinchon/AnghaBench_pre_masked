
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nv50_fifo_chan {int ramht; } ;
struct nouveau_object {int engine; } ;
struct TYPE_4__ {TYPE_1__* node; } ;
struct TYPE_3__ {int offset; } ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (struct nouveau_object*) ;
 scalar_t__ FUNC_3 (struct nouveau_object*,int ) ;

__attribute__((used)) static int
FUNC_4(struct nouveau_object *VAR_2,
   struct nouveau_object *VAR_3, u32 VAR_4)
{
 struct nv50_fifo_chan *VAR_5 = (void *)VAR_2;
 u32 VAR_6;

 if (FUNC_3(VAR_3, VAR_1))
  VAR_6 = FUNC_2(VAR_3)->node->offset >> 4;
 else
  VAR_6 = 0x00000004;

 switch (FUNC_1(VAR_3->engine)) {
 case 131:
 case 128 : VAR_6 |= 0x00000000; break;
 case 130 : VAR_6 |= 0x00100000; break;
 case 129 : VAR_6 |= 0x00200000; break;
 default:
  return -VAR_0;
 }

 return FUNC_0(VAR_5->ramht, 0, VAR_4, VAR_6);
}
