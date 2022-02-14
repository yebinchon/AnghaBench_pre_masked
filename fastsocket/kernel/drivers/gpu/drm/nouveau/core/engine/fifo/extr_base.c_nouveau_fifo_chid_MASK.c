
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_object {struct nouveau_object* parent; } ;
struct nouveau_fifo {struct nouveau_fifo* parent; } ;
struct TYPE_2__ {int chid; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct nouveau_object*) ;
 int FUNC_1 (struct nouveau_object*) ;
 scalar_t__ FUNC_2 (struct nouveau_object*,int ) ;

__attribute__((used)) static int
FUNC_3(struct nouveau_fifo *VAR_1, struct nouveau_object *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_1) & 0xff;

 while (VAR_2 && VAR_2->parent) {
  if ( FUNC_2(VAR_2->parent, VAR_0) &&
      (FUNC_1(VAR_2->parent) & 0xff) == VAR_3)
   return FUNC_0(VAR_2)->chid;
  VAR_2 = VAR_2->parent;
 }

 return -1;
}
