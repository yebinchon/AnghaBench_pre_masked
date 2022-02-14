
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct TYPE_2__ {int major_version; scalar_t__ head_addr; scalar_t__ minor_version; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int,int,...) ;

int FUNC_7(uint64_t VAR_2, uint64_t VAR_3, uint32_t VAR_4)
{
 uint64_t VAR_5;
 uint64_t VAR_6 = 0;
 int VAR_7 = 0;





 if (VAR_1->major_version > 3) {
  FUNC_6("ERROR: Incompatible bootmem descriptor "
        "version: %d.%d at addr: %p\n",
        (int)VAR_1->major_version,
        (int)VAR_1->minor_version,
        VAR_1);
  return 0;
 }


 if (!VAR_3)
  return 0;

 if (!(VAR_4 & VAR_0))
  FUNC_0();
 VAR_5 = VAR_1->head_addr;
 if (VAR_5 == 0 || VAR_2 < VAR_5) {

  if (VAR_5 && VAR_2 + VAR_3 > VAR_5)
   goto bootmem_free_done;
  else if (VAR_2 + VAR_3 == VAR_5) {

   FUNC_3(VAR_2,
        FUNC_1
        (VAR_5));
   FUNC_4(VAR_2,
        FUNC_2
        (VAR_5) + VAR_3);
   VAR_1->head_addr = VAR_2;

  } else {

   FUNC_3(VAR_2, VAR_5);
   FUNC_4(VAR_2, VAR_3);
   VAR_1->head_addr = VAR_2;
  }
  VAR_7 = 1;
  goto bootmem_free_done;
 }


 while (VAR_5 && VAR_2 > VAR_5) {
  VAR_6 = VAR_5;
  VAR_5 = FUNC_1(VAR_5);
 }

 if (!VAR_5) {





  if (VAR_6 + FUNC_2(VAR_6) ==
      VAR_2) {
   FUNC_4(VAR_6,
        FUNC_2
        (VAR_6) + VAR_3);
  } else {
   FUNC_3(VAR_6, VAR_2);
   FUNC_4(VAR_2, VAR_3);
   FUNC_3(VAR_2, 0);
  }
  VAR_7 = 1;
  goto bootmem_free_done;
 } else {




  if (VAR_6 + FUNC_2(VAR_6) ==
      VAR_2) {

   FUNC_4(VAR_6,
        FUNC_2
        (VAR_6) + VAR_3);
   if (VAR_2 + VAR_3 == VAR_5) {

    FUNC_4(VAR_6,
     FUNC_2(VAR_5) +
     FUNC_2(VAR_6));
    FUNC_3(VAR_6,
     FUNC_1(VAR_5));
   }
   VAR_7 = 1;
   goto bootmem_free_done;
  } else if (VAR_2 + VAR_3 == VAR_5) {

   FUNC_4(VAR_2,
        FUNC_2
        (VAR_5) + VAR_3);
   FUNC_3(VAR_2,
        FUNC_1
        (VAR_5));
   FUNC_3(VAR_6, VAR_2);
   VAR_7 = 1;
   goto bootmem_free_done;
  }


  FUNC_4(VAR_2, VAR_3);
  FUNC_3(VAR_2, VAR_5);
  FUNC_3(VAR_6, VAR_2);

 }
 VAR_7 = 1;

bootmem_free_done:
 if (!(VAR_4 & VAR_0))
  FUNC_5();
 return VAR_7;

}
