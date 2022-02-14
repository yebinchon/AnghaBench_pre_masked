
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int memory_object_t ;
typedef int kern_return_t ;
typedef TYPE_1__* apple_protect_pager_t ;
struct TYPE_4__ {scalar_t__ is_mapped; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_7 ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

kern_return_t
FUNC_5(
 memory_object_t VAR_8)
{
 apple_protect_pager_t VAR_9;
 int VAR_10;

 FUNC_0(VAR_2,
      ("apple_protect_pager_last_unmap: %p\n", VAR_8));

 VAR_9 = FUNC_2(VAR_8);

 FUNC_3(&VAR_7);
 if (VAR_9->is_mapped) {




  VAR_5--;
  VAR_10 = (VAR_4 -
      VAR_5);
  if (VAR_10 > VAR_6) {
   VAR_6 = VAR_10;
  }
  VAR_9->is_mapped = VAR_0;
  FUNC_1(VAR_9, VAR_3);

 } else {
  FUNC_4(&VAR_7);
 }

 return VAR_1;
}
