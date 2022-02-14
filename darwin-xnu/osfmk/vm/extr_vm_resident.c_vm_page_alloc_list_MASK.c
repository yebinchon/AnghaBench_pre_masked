
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int kern_return_t ;
struct TYPE_6__ {struct TYPE_6__* vmp_snext; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_2 () ;

kern_return_t
FUNC_3(
 int VAR_5,
 int VAR_6,
 vm_page_t *VAR_7)
{
 vm_page_t VAR_8 = VAR_4;
 vm_page_t VAR_9;
 int VAR_10;

 if ( !(VAR_6 & VAR_3))
  FUNC_0("vm_page_alloc_list: called w/o KMA_LOMEM");

 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {

  VAR_9 = FUNC_2();

  if (VAR_9 == VAR_4) {
   if (VAR_8)
    FUNC_1(VAR_8, VAR_0);

   *VAR_7 = VAR_4;

   return (VAR_1);
  }
  VAR_9->vmp_snext = VAR_8;
  VAR_8 = VAR_9;
 }
 *VAR_7 = VAR_8;

 return (VAR_2);
}
