
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct iforce {TYPE_4__* dev; TYPE_3__* core_effects; } ;
struct TYPE_10__ {int max_effects; } ;
struct TYPE_9__ {int dev; TYPE_5__* ff; } ;
struct TYPE_7__ {unsigned short start; } ;
struct TYPE_6__ {unsigned short start; } ;
struct TYPE_8__ {int flags; TYPE_2__ mod2_chunk; TYPE_1__ mod1_chunk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*,unsigned short) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct iforce *VAR_2, unsigned short VAR_3)
{
 int VAR_4;

 if (!VAR_2->dev->ff)
  return 0;

 for (VAR_4 = 0; VAR_4 < VAR_2->dev->ff->max_effects; ++VAR_4) {
  if (FUNC_2(VAR_0, VAR_2->core_effects[VAR_4].flags) &&
      (VAR_2->core_effects[VAR_4].mod1_chunk.start == VAR_3 ||
       VAR_2->core_effects[VAR_4].mod2_chunk.start == VAR_3)) {
   FUNC_0(VAR_1, VAR_2->core_effects[VAR_4].flags);
   return 0;
  }
 }
 FUNC_1(&VAR_2->dev->dev, "unused effect %04x updated !!!\n", VAR_3);
 return -1;
}
