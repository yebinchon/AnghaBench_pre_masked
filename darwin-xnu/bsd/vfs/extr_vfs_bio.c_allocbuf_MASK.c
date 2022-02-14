
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zone_t ;
typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_offset_t ;
typedef int caddr_t ;
typedef TYPE_1__* buf_t ;
struct TYPE_3__ {uintptr_t b_datap; int b_bufsize; int b_bcount; int b_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ,int ) ;
 int VAR_7 ;
 int FUNC_3 (void const*,int ,int) ;
 int FUNC_4 (int) ;
 void* FUNC_5 (int) ;
 int VAR_8 ;
 int FUNC_6 (int ,scalar_t__*,scalar_t__,int ) ;
 int FUNC_7 (int ,scalar_t__,int) ;
 int FUNC_8 (char*) ;
 void* FUNC_9 (int,int ) ;
 int FUNC_10 (int ,void*) ;

int
FUNC_11(buf_t VAR_9, int VAR_10)
{
 vm_size_t VAR_11;

 VAR_11 = FUNC_9(VAR_10, VAR_2);

 if (VAR_11 < VAR_6)
  VAR_11 = VAR_6;
 if (VAR_11 > VAR_3)
  FUNC_8("allocbuf: buffer larger than MAXBSIZE requested");

 if (FUNC_1(VAR_9->b_flags, VAR_0)) {
  int VAR_12 = FUNC_9(VAR_10, VAR_5);

  if (VAR_9->b_datap) {
   vm_offset_t VAR_13 = (vm_offset_t)VAR_9->b_datap;

   if (FUNC_1(VAR_9->b_flags, VAR_1)) {
           if (VAR_9->b_bufsize < VAR_12) {
            zone_t VAR_14;



            VAR_14 = FUNC_4(VAR_9->b_bufsize);
     if (VAR_12 <= VAR_4) {
             VAR_11 = VAR_12;


      *(void **)(&VAR_9->b_datap) = FUNC_5(VAR_12);
     } else {
             VAR_9->b_datap = (uintptr_t)((void*)0);
             FUNC_6(VAR_8, (vm_offset_t *)&VAR_9->b_datap, VAR_11, VAR_7);
      FUNC_0(VAR_9->b_flags, VAR_1);
     }
     FUNC_3((void *)VAR_13, (caddr_t)VAR_9->b_datap, VAR_9->b_bufsize);
     FUNC_10(VAR_14, (void *)VAR_13);
    } else {
            VAR_11 = VAR_9->b_bufsize;
    }

   } else {
    if ((vm_size_t)VAR_9->b_bufsize < VAR_11) {

            VAR_9->b_datap = (uintptr_t)((void*)0);
     FUNC_6(VAR_8, (vm_offset_t *)&VAR_9->b_datap, VAR_11, VAR_7);
     FUNC_3((const void *)VAR_13, (caddr_t)VAR_9->b_datap, VAR_9->b_bufsize);
     FUNC_7(VAR_8, VAR_13, VAR_9->b_bufsize);
    } else {
     VAR_11 = VAR_9->b_bufsize;
    }
   }
  } else {

   if (VAR_12 <= VAR_4) {
    VAR_11 = VAR_12;


    *(void **)(&VAR_9->b_datap) = FUNC_5(VAR_12);
    FUNC_2(VAR_9->b_flags, VAR_1);
   } else
    FUNC_6(VAR_8, (vm_offset_t *)&VAR_9->b_datap, VAR_11, VAR_7);
  }

  if (VAR_9->b_datap == 0)
          FUNC_8("allocbuf: NULL b_datap");
 }
 VAR_9->b_bufsize = VAR_11;
 VAR_9->b_bcount = VAR_10;

 return (0);
}
