
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct e820entry {scalar_t__ size; scalar_t__ addr; } ;
struct TYPE_2__ {int nr_map; struct e820entry* map; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (struct resource*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct resource *VAR_1)
{
 int VAR_2;
 struct e820entry *VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_3 = &VAR_0[VAR_2];

  FUNC_0(VAR_1, VAR_3->addr,
         VAR_3->addr + VAR_3->size - 1);
 }
}
