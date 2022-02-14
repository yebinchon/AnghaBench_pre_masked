
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* os_reason_t ;
typedef int kcdata_iter_t ;
struct TYPE_4__ {scalar_t__ osr_bufsize; int * osr_kcd_buf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,...) ;

char *
FUNC_6(os_reason_t VAR_3)
{
 kcdata_iter_t VAR_4;

 if (VAR_3 == VAR_2 || VAR_3->osr_kcd_buf == ((void*)0) ||
   VAR_3->osr_bufsize == 0) {
  return ((void*)0);
 }

 VAR_4 = FUNC_0(VAR_3->osr_kcd_buf, VAR_3->osr_bufsize);
 if (!FUNC_4(VAR_4)) {



  return ((void*)0);
 }

 if (FUNC_3(VAR_4) != VAR_1) {




  return ((void*)0);
 }

 VAR_4 = FUNC_1(VAR_4, VAR_0);
 if (!FUNC_4(VAR_4)) {
  return ((void*)0);
 }

 return (char *)FUNC_2(VAR_4);
}
