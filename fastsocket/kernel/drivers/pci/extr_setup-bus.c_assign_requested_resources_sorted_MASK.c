
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct resource_list_x {int dummy; } ;
struct resource_list {TYPE_1__* dev; struct resource* res; struct resource_list* next; } ;
struct resource {int flags; } ;
struct TYPE_3__ {int bus; struct resource* resource; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct resource_list_x*,TYPE_1__*,struct resource*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct resource*) ;
 scalar_t__ FUNC_4 (struct resource*) ;

__attribute__((used)) static void FUNC_5(struct resource_list *VAR_2,
     struct resource_list_x *VAR_3)
{
 struct resource *VAR_4;
 struct resource_list *VAR_5;
 int VAR_6;

 for (VAR_5 = VAR_2->next; VAR_5; VAR_5 = VAR_5->next) {
  VAR_4 = VAR_5->res;
  VAR_6 = VAR_4 - &VAR_5->dev->resource[0];
  if (FUNC_4(VAR_4) && FUNC_1(VAR_5->dev, VAR_6)) {
   if (VAR_3 && !FUNC_2(VAR_5->dev->bus)) {




    if (!((VAR_6 == VAR_1) &&
          (!(VAR_4->flags & VAR_0))))
     FUNC_0(VAR_3, VAR_5->dev, VAR_4);
   }
   FUNC_3(VAR_4);
  }
 }
}
