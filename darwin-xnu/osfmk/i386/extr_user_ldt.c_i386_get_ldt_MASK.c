
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* user_ldt_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
typedef TYPE_2__* task_t ;
struct real_descriptor {int dummy; } ;
typedef int kern_return_t ;
struct TYPE_7__ {TYPE_1__* i386_ldt; } ;
struct TYPE_6__ {unsigned int start; unsigned int count; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (char*,scalar_t__,unsigned int) ;
 scalar_t__ FUNC_1 () ;
 TYPE_2__* FUNC_2 () ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

int
FUNC_5(
 uint32_t *VAR_3,
 uint32_t VAR_4,
 uint32_t VAR_5,
 uint32_t VAR_6)
{
 user_ldt_t VAR_7;
 task_t VAR_8 = FUNC_2();
 unsigned int VAR_9;
 kern_return_t VAR_10;

 if (VAR_4 >= VAR_1)
     return VAR_0;
 if ((uint64_t)VAR_4 + (uint64_t)VAR_6 > VAR_1)
     return VAR_0;
 if (VAR_5 == 0)
     return VAR_0;

 FUNC_3(VAR_8);

 VAR_7 = VAR_8->i386_ldt;
 VAR_10 = 0;





 if (VAR_7 != 0)
     VAR_9 = VAR_7->start + VAR_7->count;
 else
     VAR_9 = VAR_2;


 if (VAR_4 < VAR_9)
 {
     unsigned int VAR_11 = VAR_6;

     if (VAR_4 + VAR_6 > VAR_9)
  VAR_11 = VAR_9 - VAR_4;

     VAR_10 = FUNC_0((char *)(FUNC_1() + VAR_4),
     VAR_5, VAR_11 * sizeof(struct real_descriptor));
 }

 FUNC_4(VAR_8);

 *VAR_3 = VAR_9;

 return VAR_10;
}
