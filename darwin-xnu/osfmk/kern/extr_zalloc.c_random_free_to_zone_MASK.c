
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* zone_t ;
typedef int vm_size_t ;
typedef int vm_offset_t ;
struct TYPE_4__ {int elem_size; int cur_size; int count; int tags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (int *,unsigned int*,int ,int) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_4(
   zone_t VAR_5,
   vm_offset_t VAR_6,
   vm_offset_t VAR_7,
   int VAR_8,
   unsigned int *VAR_9)
{
 vm_offset_t VAR_10;
 vm_offset_t VAR_11;
 vm_size_t VAR_12;
 int VAR_13;

 FUNC_1(VAR_8 && VAR_8 <= VAR_2);
 VAR_12 = VAR_5->elem_size;
 VAR_10 = VAR_7 + ((VAR_8 * VAR_12) - VAR_12);
 for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++) {
  FUNC_1(VAR_7 <= VAR_10);
  if (



         FUNC_3(&VAR_4, VAR_9, VAR_1, 1)) {
   VAR_11 = VAR_6 + VAR_7;
   VAR_7 += VAR_12;
  } else {
   VAR_11 = VAR_6 + VAR_10;
   VAR_10 -= VAR_12;
  }
  if (VAR_11 != (vm_offset_t)VAR_5) {
   VAR_5->count++;
   FUNC_2(VAR_5, VAR_11, VAR_0);
  }
  VAR_5->cur_size += VAR_12;
 }
}
