
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int node; } ;
struct matrox_fb_info {TYPE_4__* pcidev; TYPE_2__ fbcon; } ;
struct TYPE_10__ {int * parent; } ;
struct TYPE_13__ {int class; TYPE_3__ dev; TYPE_5__* algo_data; int name; int owner; } ;
struct TYPE_12__ {struct i2c_bit_adapter* data; } ;
struct TYPE_8__ {unsigned int data; unsigned int clock; } ;
struct i2c_bit_adapter {int initialized; TYPE_6__ adapter; TYPE_5__ bac; TYPE_1__ mask; struct matrox_fb_info* minfo; } ;
struct TYPE_11__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*,struct i2c_bit_adapter*) ;
 TYPE_5__ VAR_1 ;
 int FUNC_2 (int ,int,char const*,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_bit_adapter* VAR_2, struct matrox_fb_info* VAR_3,
  unsigned int VAR_4, unsigned int VAR_5, const char *VAR_6,
  int VAR_7)
{
 int VAR_8;

 VAR_2->minfo = VAR_3;
 VAR_2->mask.data = VAR_4;
 VAR_2->mask.clock = VAR_5;
 VAR_2->adapter.owner = VAR_0;
 FUNC_2(VAR_2->adapter.name, sizeof(VAR_2->adapter.name), VAR_6,
  VAR_3->fbcon.node);
 FUNC_1(&VAR_2->adapter, VAR_2);
 VAR_2->adapter.class = VAR_7;
 VAR_2->adapter.algo_data = &VAR_2->bac;
 VAR_2->adapter.dev.parent = &VAR_3->pcidev->dev;
 VAR_2->bac = VAR_1;
 VAR_2->bac.data = VAR_2;
 VAR_8 = FUNC_0(&VAR_2->adapter);
 VAR_2->initialized = !VAR_8;
 return VAR_8;
}
