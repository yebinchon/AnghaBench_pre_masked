
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource_list_x {struct resource_list_x* next; TYPE_1__* dev; scalar_t__ add_size; struct resource* res; } ;
struct resource_list {struct resource_list* next; struct resource* res; } ;
struct resource {scalar_t__ start; scalar_t__ end; int flags; } ;
typedef scalar_t__ resource_size_t ;
struct TYPE_2__ {struct resource* resource; } ;


 int FUNC_0 (struct resource*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct resource_list_x*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (struct resource*) ;
 scalar_t__ FUNC_4 (struct resource*) ;

__attribute__((used)) static void FUNC_5(struct resource_list_x *VAR_0,
  struct resource_list *VAR_1)
{
 struct resource *VAR_2;
 struct resource_list_x *VAR_3, *VAR_4, *VAR_5;
 struct resource_list *VAR_6;
 resource_size_t VAR_7;
 int VAR_8;

 VAR_5 = VAR_0;
 for (VAR_3 = VAR_0->next; VAR_3;) {
  VAR_2 = VAR_3->res;

  if (!VAR_2->flags)
   goto out;


  for (VAR_6 = VAR_1->next; VAR_6 && VAR_6->res != VAR_2;
    VAR_6 = VAR_6->next);
  if (!VAR_6) {
   VAR_5 = VAR_3;
   VAR_3 = VAR_3->next;
   continue;
  }

  VAR_8 = VAR_2 - &VAR_3->dev->resource[0];
  VAR_7=VAR_3->add_size;
  if (!FUNC_4(VAR_2) && VAR_7) {
    VAR_2->end = VAR_2->start + VAR_7 - 1;
    if(FUNC_2(VAR_3->dev, VAR_8))
    FUNC_3(VAR_2);
  } else if (VAR_7) {
   FUNC_0(VAR_2, VAR_2->start,
    FUNC_4(VAR_2) + VAR_7);
  }
out:
  VAR_4 = VAR_3;
  VAR_5->next = VAR_3 = VAR_3->next;
  FUNC_1(VAR_4);
 }
}
