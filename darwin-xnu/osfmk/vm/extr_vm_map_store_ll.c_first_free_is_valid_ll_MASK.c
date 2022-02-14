
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* vm_map_t ;
typedef TYPE_2__* vm_map_entry_t ;
typedef int boolean_t ;
struct TYPE_11__ {struct TYPE_11__* vme_next; int vme_start; int vme_end; } ;
struct TYPE_10__ {TYPE_2__* first_free; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,TYPE_1__*,TYPE_2__*,TYPE_2__*) ;
 TYPE_2__* FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,int ) ;

boolean_t
FUNC_4( vm_map_t VAR_2 )
{
 vm_map_entry_t VAR_3, VAR_4;
 VAR_3 = FUNC_2(VAR_2);
 VAR_4 = VAR_3->vme_next;
 while (FUNC_3(VAR_4->vme_start,
     FUNC_0(VAR_2)) ==
        FUNC_3(VAR_3->vme_end,
     FUNC_0(VAR_2)) ||
        (FUNC_3(VAR_4->vme_start,
      FUNC_0(VAR_2)) ==
  FUNC_3(VAR_3->vme_start,
      FUNC_0(VAR_2)) &&
  VAR_4 != FUNC_2(VAR_2))) {
  VAR_3 = VAR_4;
  VAR_4 = VAR_3->vme_next;
  if (VAR_3 == FUNC_2(VAR_2))
   break;
 }
 if (VAR_2->first_free != VAR_3) {
  FUNC_1("Bad first_free for map %p: %p should be %p\n",
         VAR_2, VAR_2->first_free, VAR_3);
  return VAR_0;
 }
 return VAR_1;
}
