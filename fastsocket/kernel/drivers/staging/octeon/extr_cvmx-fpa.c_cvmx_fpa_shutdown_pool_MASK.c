
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint64_t ;
struct TYPE_2__ {void* base; int size; int starting_element_count; int name; } ;


 int FUNC_0 (char*,unsigned long long,int,unsigned long long,...) ;
 void* FUNC_1 (size_t) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 () ;
 size_t FUNC_3 (void*) ;

uint64_t FUNC_4(uint64_t VAR_1)
{
 uint64_t VAR_2 = 0;
 uint64_t VAR_3 = 0;
 uint64_t VAR_4 = FUNC_3(VAR_0[VAR_1].base);
 uint64_t VAR_5 =
     VAR_4 +
     VAR_0[VAR_1].size *
     VAR_0[VAR_1].starting_element_count;
 void *VAR_6;
 uint64_t VAR_7;

 VAR_3 = 0;
 do {
  VAR_6 = FUNC_1(VAR_1);
  if (VAR_6)
   VAR_7 = FUNC_3(VAR_6);
  else
   VAR_7 = 0;
  if (VAR_7) {
   if ((VAR_7 >= VAR_4) && (VAR_7 < VAR_5) &&
       (((VAR_7 -
          VAR_4) % VAR_0[VAR_1].size) == 0)) {
    VAR_3++;
   } else {
    FUNC_0
        ("ERROR: cvmx_fpa_shutdown_pool: Illegal address 0x%llx in pool %s(%d)\n",
         (unsigned long long)VAR_7,
         VAR_0[VAR_1].name, (int)VAR_1);
    VAR_2++;
   }
  }
 } while (VAR_7);






 if (VAR_2) {
  FUNC_0
      ("ERROR: cvmx_fpa_shutdown_pool: Pool %s(%d) started at 0x%llx, ended at 0x%llx, with a step of 0x%llx\n",
       VAR_0[VAR_1].name, (int)VAR_1,
       (unsigned long long)VAR_4, (unsigned long long)VAR_5,
       (unsigned long long)VAR_0[VAR_1].size);
  return -VAR_2;
 } else
  return 0;
}
