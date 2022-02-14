
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nv50_display_flip {TYPE_2__* chan; TYPE_1__* disp; } ;
struct TYPE_4__ {int addr; scalar_t__ data; } ;
struct TYPE_3__ {int sync; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static bool
FUNC_2(void *VAR_0)
{
 struct nv50_display_flip *VAR_1 = VAR_0;
 if (FUNC_0(VAR_1->disp->sync, VAR_1->chan->addr / 4) ==
           VAR_1->chan->data)
  return 1;
 FUNC_1(1, 2);
 return 0;
}
