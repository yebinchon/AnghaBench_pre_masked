
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
 case 135:
 case 130 : VAR_6 |= 0x00000000; break;
 case 134 : VAR_6 |= 0x00100000; break;
 case 132 :
 case 131 : VAR_6 |= 0x00200000; break;
 case 133 :
 case 137 : VAR_6 |= 0x00300000; break;
 case 128 : VAR_6 |= 0x00400000; break;
 case 136 :
 case 129: VAR_6 |= 0x00500000; break;
 case 138 : VAR_6 |= 0x00600000; break;
 default:
  return -VAR_0;
 }

 return FUNC_0(VAR_5->ramht, 0, VAR_4, VAR_6);
}
