
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* vm_object_t ;
typedef scalar_t__ vm_object_size_t ;
typedef scalar_t__ vm_object_offset_t ;
typedef scalar_t__ memory_object_offset_t ;
struct TYPE_8__ {int do_collapse_compressor_pages; int do_collapse_compressor; } ;
struct TYPE_7__ {scalar_t__ vo_size; scalar_t__ vo_shadow_offset; scalar_t__ paging_offset; int pager; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,int ,scalar_t__) ;
 TYPE_6__ VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,scalar_t__) ;

void
FUNC_5(
 vm_object_t VAR_4,
 vm_object_t VAR_5)
{
 vm_object_offset_t VAR_6, VAR_7;
 vm_object_size_t VAR_8;

 VAR_3.do_collapse_compressor++;

 FUNC_3(VAR_4);
 FUNC_3(VAR_5);

 VAR_8 = VAR_4->vo_size;






 for (VAR_7 = VAR_4->vo_shadow_offset;
      VAR_7 < VAR_4->vo_shadow_offset + VAR_4->vo_size;
      VAR_7 += VAR_0) {
  memory_object_offset_t VAR_9;


  VAR_9 = (VAR_7 +
     VAR_5->paging_offset);
  VAR_9 = FUNC_0(
   VAR_5->pager,
   VAR_9);
  if (VAR_9 == (memory_object_offset_t) -1) {

   break;
  }
  VAR_7 = (VAR_9 -
      VAR_5->paging_offset);

  VAR_6 = VAR_7 - VAR_4->vo_shadow_offset;

  if (VAR_6 >= VAR_4->vo_size) {

   break;
  }

  if ((FUNC_4(VAR_4, VAR_6) != VAR_2) ||
      (FUNC_1(VAR_4->pager,
         (VAR_6 +
          VAR_4->paging_offset)) ==
       VAR_1)) {







   continue;
  }





  VAR_3.do_collapse_compressor_pages++;
  FUNC_2(

   VAR_4->pager,
   (VAR_6 + VAR_4->paging_offset),

   VAR_5->pager,
   (VAR_7 + VAR_5->paging_offset));
 }
}
