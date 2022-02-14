
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct binder_ref {int debug_id; int desc; int strong; int weak; TYPE_1__* node; int death; } ;
struct TYPE_2__ {int debug_id; scalar_t__ proc; } ;


 int FUNC_0 (char*,int,char*,int,int,char*,int,int,int,int ) ;

__attribute__((used)) static char *FUNC_1(char *VAR_0, char *VAR_1, struct binder_ref *VAR_2)
{
 VAR_0 += FUNC_0(VAR_0, VAR_1 - VAR_0,
   "  ref %d: desc %d %snode %d s %d w %d d %p\n",
   VAR_2->debug_id, VAR_2->desc,
   VAR_2->node->proc ? "" : "dead ", VAR_2->node->debug_id,
   VAR_2->strong, VAR_2->weak, VAR_2->death);
 return VAR_0;
}
