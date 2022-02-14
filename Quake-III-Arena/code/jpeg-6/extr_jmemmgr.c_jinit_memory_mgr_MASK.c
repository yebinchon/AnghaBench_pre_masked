
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_2__* my_mem_ptr ;
typedef TYPE_3__* j_common_ptr ;
struct TYPE_12__ {TYPE_1__* mem; } ;
struct TYPE_10__ {long max_memory_to_use; int self_destruct; int free_pool; int access_virt_barray; int access_virt_sarray; int realize_virt_arrays; int request_virt_barray; int request_virt_sarray; int alloc_barray; int alloc_sarray; int alloc_large; int alloc_small; } ;
struct TYPE_11__ {long total_space_allocated; TYPE_1__ pub; int * virt_barray_list; int * virt_sarray_list; int ** large_list; int ** small_list; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 long VAR_6 ;
 long FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 char* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (TYPE_3__*,long) ;
 long FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_7 (char*,char*,long*,char*) ;

void
FUNC_8 (j_common_ptr VAR_19)
{
  my_mem_ptr VAR_20;
  long VAR_21;
  int VAR_22;
  size_t VAR_23;

  VAR_19->mem = ((void*)0);
  if ((FUNC_2(VAR_0) & (FUNC_2(VAR_0)-1)) != 0)
    FUNC_0(VAR_19, VAR_1);





  VAR_23 = (size_t) VAR_6;
  if ((long) VAR_23 != VAR_6 ||
      (VAR_6 % FUNC_2(VAR_0)) != 0)
    FUNC_0(VAR_19, VAR_2);

  VAR_21 = FUNC_5(VAR_19);


  VAR_20 = (my_mem_ptr) FUNC_4(VAR_19, FUNC_2(VAR_14));

  if (VAR_20 == ((void*)0)) {
    FUNC_6(VAR_19);
    FUNC_1(VAR_19, VAR_3, 0);
  }


  VAR_20->pub.alloc_small = VAR_12;
  VAR_20->pub.alloc_large = VAR_10;
  VAR_20->pub.alloc_sarray = VAR_11;
  VAR_20->pub.alloc_barray = VAR_9;
  VAR_20->pub.request_virt_sarray = VAR_17;
  VAR_20->pub.request_virt_barray = VAR_16;
  VAR_20->pub.realize_virt_arrays = VAR_15;
  VAR_20->pub.access_virt_sarray = VAR_8;
  VAR_20->pub.access_virt_barray = VAR_7;
  VAR_20->pub.free_pool = VAR_13;
  VAR_20->pub.self_destruct = VAR_18;


  VAR_20->pub.max_memory_to_use = VAR_21;

  for (VAR_22 = VAR_4-1; VAR_22 >= VAR_5; VAR_22--) {
    VAR_20->small_list[VAR_22] = ((void*)0);
    VAR_20->large_list[VAR_22] = ((void*)0);
  }
  VAR_20->virt_sarray_list = ((void*)0);
  VAR_20->virt_barray_list = ((void*)0);

  VAR_20->total_space_allocated = FUNC_2(VAR_14);


  VAR_19->mem = & VAR_20->pub;
  { char * VAR_24;

    if ((VAR_24 = FUNC_3("JPEGMEM")) != ((void*)0)) {
      char VAR_25 = 'x';

      if (FUNC_7(VAR_24, "%ld%c", &VAR_21, &VAR_25) > 0) {
 if (VAR_25 == 'm' || VAR_25 == 'M')
   VAR_21 *= 1000L;
 VAR_20->pub.max_memory_to_use = VAR_21 * 1000L;
      }
    }
  }


}
