
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef TYPE_1__* vm_page_t ;
typedef int memory_object_return_t ;
typedef int memory_object_lock_result_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_9__ {int vmp_fictitious; scalar_t__ vmp_error; scalar_t__ vmp_restart; scalar_t__ vmp_absent; scalar_t__ vmp_laundry; scalar_t__ vmp_cleaning; scalar_t__ vmp_busy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,char*,TYPE_1__*,int ,scalar_t__,int,int ) ;
 int VAR_8 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (TYPE_1__*,int ) ;

memory_object_lock_result_t
FUNC_9(
 vm_page_t VAR_9,
 memory_object_return_t VAR_10,
 boolean_t VAR_11,
 vm_prot_t VAR_12)
{
        FUNC_3(VAR_8,
            "m_o_lock_page, page 0x%X rtn %d flush %d prot %d\n",
            VAR_9, VAR_10, VAR_11, VAR_12, 0);


 if (VAR_9->vmp_busy || VAR_9->vmp_cleaning)
  return (VAR_2);

 if (VAR_9->vmp_laundry)
  FUNC_8(VAR_9, VAR_0);





 if (VAR_9->vmp_absent || VAR_9->vmp_error || VAR_9->vmp_restart) {
  if (VAR_9->vmp_error && VAR_11 && !FUNC_2(VAR_9)) {





   return (VAR_3);
  }
  return (VAR_1);
 }
 FUNC_4(!VAR_9->vmp_fictitious);

 if (FUNC_2(VAR_9)) {




  if (FUNC_5(VAR_9, VAR_10))
   return (VAR_4);

  return (VAR_1);
 }

 if (VAR_11) {






  if (FUNC_6(FUNC_1(VAR_9)) & VAR_5) {
   FUNC_0(VAR_9, VAR_0);
  }
 } else {





  if (VAR_12 != VAR_7)
   FUNC_7(FUNC_1(VAR_9), VAR_6 & ~VAR_12);
 }



 if (FUNC_5(VAR_9, VAR_10)) {
  return (VAR_4);
 }




 if (VAR_11)
  return (VAR_3);
 return (VAR_1);
}
