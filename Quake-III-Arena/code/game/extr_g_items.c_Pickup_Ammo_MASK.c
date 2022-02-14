
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int count; TYPE_1__* item; } ;
typedef TYPE_2__ gentity_t ;
struct TYPE_6__ {int quantity; int giTag; } ;


 int FUNC_0 (TYPE_2__*,int ,int) ;
 int VAR_0 ;

int FUNC_1 (gentity_t *VAR_1, gentity_t *VAR_2)
{
 int VAR_3;

 if ( VAR_1->count ) {
  VAR_3 = VAR_1->count;
 } else {
  VAR_3 = VAR_1->item->quantity;
 }

 FUNC_0 (VAR_2, VAR_1->item->giTag, VAR_3);

 return VAR_0;
}
