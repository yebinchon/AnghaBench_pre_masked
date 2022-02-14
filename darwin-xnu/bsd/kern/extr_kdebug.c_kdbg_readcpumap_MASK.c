
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int user_addr_t ;
typedef int uint8_t ;
typedef size_t uint32_t ;
struct TYPE_2__ {int kdebug_flags; int kdebug_cpus; int kdebug_iops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ,size_t) ;
 TYPE_1__ VAR_4 ;
 int FUNC_1 (int ,int ,int **,size_t*) ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,size_t) ;

int
FUNC_3(user_addr_t VAR_6, size_t *VAR_7)
{
 uint8_t* VAR_8 = ((void*)0);
 uint32_t VAR_9 = 0;
 int VAR_10 = VAR_3;

 if (VAR_4.kdebug_flags & VAR_2) {
  if (FUNC_1(VAR_4.kdebug_iops, VAR_4.kdebug_cpus, &VAR_8, &VAR_9) == VAR_3) {
   if (VAR_6) {
    size_t VAR_11 = (*VAR_7 >= VAR_9) ? VAR_9 : *VAR_7;
    if (FUNC_0(VAR_8, VAR_6, (size_t)VAR_11)) {
     VAR_10 = VAR_0;
    }
   }
   *VAR_7 = VAR_9;
   FUNC_2(VAR_5, (vm_offset_t)VAR_8, VAR_9);
  } else
   VAR_10 = VAR_1;
 } else
  VAR_10 = VAR_1;

 return (VAR_10);
}
