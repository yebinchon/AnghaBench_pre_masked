
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* swapfile_pager_t ;
typedef int memory_object_t ;
typedef int kern_return_t ;
struct TYPE_4__ {scalar_t__ is_mapped; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int VAR_4 ;
 TYPE_1__* FUNC_4 (int ) ;

kern_return_t
FUNC_5(
 memory_object_t VAR_5)
{
 swapfile_pager_t VAR_6;

 FUNC_0(VAR_2,
      ("swapfile_pager_last_unmap: %p\n", VAR_5));

 VAR_6 = FUNC_4(VAR_5);

 FUNC_1(&VAR_4);
 if (VAR_6->is_mapped) {




  VAR_6->is_mapped = VAR_0;
  FUNC_3(VAR_6, VAR_3);

 } else {
  FUNC_2(&VAR_4);
 }

 return VAR_1;
}
