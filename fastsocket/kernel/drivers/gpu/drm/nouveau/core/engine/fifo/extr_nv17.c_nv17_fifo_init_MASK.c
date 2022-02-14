
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int max; } ;
struct nv04_fifo_priv {TYPE_5__ base; TYPE_4__* ramfc; TYPE_3__* ramro; TYPE_2__* ramht; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_9__ {int addr; } ;
struct TYPE_8__ {int addr; } ;
struct TYPE_6__ {int addr; } ;
struct TYPE_7__ {int bits; TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (struct nv04_fifo_priv*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct nouveau_object *VAR_11)
{
 struct nv04_fifo_priv *VAR_12 = (void *)VAR_11;
 int VAR_13;

 VAR_13 = FUNC_0(&VAR_12->base);
 if (VAR_13)
  return VAR_13;

 FUNC_1(VAR_12, VAR_9, 0x000000ff);
 FUNC_1(VAR_12, VAR_10, 0x0101ffff);

 FUNC_1(VAR_12, VAR_6, (0x03 << 24) |
           ((VAR_12->ramht->bits - 9) << 16) |
            (VAR_12->ramht->base.addr >> 8));
 FUNC_1(VAR_12, VAR_7, VAR_12->ramro->addr >> 8);
 FUNC_1(VAR_12, VAR_5, VAR_12->ramfc->addr >> 8 | 0x00010000);

 FUNC_1(VAR_12, VAR_1, VAR_12->base.max);

 FUNC_1(VAR_12, VAR_3, 0xffffffff);
 FUNC_1(VAR_12, VAR_4, 0xffffffff);

 FUNC_1(VAR_12, VAR_0, 1);
 FUNC_1(VAR_12, VAR_8, 1);
 FUNC_1(VAR_12, VAR_2, 1);
 return 0;
}
