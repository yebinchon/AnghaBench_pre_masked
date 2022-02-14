
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef int upl_t ;
typedef int upl_page_info_t ;
typedef int upl_offset_t ;
typedef int caddr_t ;
typedef TYPE_1__* buf_t ;
typedef int addr64_t ;
struct TYPE_4__ {scalar_t__ b_datap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int,int,TYPE_1__*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;
 int * FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int) ;

void
FUNC_9(upl_t VAR_7, upl_offset_t VAR_8, int VAR_9, buf_t VAR_10)
{

 FUNC_1((FUNC_0(VAR_0, 23)) | VAR_2,
       VAR_8, VAR_9, VAR_10, 0, 0);

 if (VAR_10 == ((void*)0) || VAR_10->b_datap == 0) {
         upl_page_info_t *VAR_11;
         addr64_t VAR_12;

         VAR_11 = FUNC_6(VAR_7);

  if (FUNC_7(VAR_11) == VAR_6) {
          VAR_12 = ((addr64_t)FUNC_8(VAR_11, 0) << VAR_4) + VAR_8;

   FUNC_4(VAR_12, VAR_9);
  } else {
          while (VAR_9) {
           int VAR_13;
    int VAR_14;
    int VAR_15;

    VAR_14 = VAR_8 / VAR_5;
    VAR_13 = VAR_8 & VAR_3;

    VAR_12 = ((addr64_t)FUNC_8(VAR_11, VAR_14) << VAR_4) + VAR_13;
    VAR_15 = FUNC_5(VAR_5 - VAR_13, VAR_9);

    FUNC_3(VAR_12, VAR_15);

    VAR_9 -= VAR_15;
    VAR_8 += VAR_15;
   }
  }
 } else
  FUNC_2((caddr_t)((vm_offset_t)VAR_10->b_datap + VAR_8), VAR_9);

 FUNC_1((FUNC_0(VAR_0, 23)) | VAR_1,
       VAR_8, VAR_9, 0, 0, 0);
}
