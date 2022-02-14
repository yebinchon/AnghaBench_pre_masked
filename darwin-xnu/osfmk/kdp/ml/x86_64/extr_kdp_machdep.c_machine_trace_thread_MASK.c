
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int eip; int ebp; } ;
typedef TYPE_2__ x86_saved_state32_t ;
typedef scalar_t__ vm_offset_t ;
typedef int vm_map_t ;
typedef int uint32_t ;
typedef TYPE_3__* thread_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_9__ {TYPE_1__* task; } ;
struct TYPE_7__ {int map; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int,int ,int*) ;
 int FUNC_4 (char*) ;

int
FUNC_5(thread_t VAR_3,
                     char * VAR_4,
                     char * VAR_5,
                     int VAR_6,
                     boolean_t VAR_7,
                     boolean_t VAR_8,
                     uint32_t * VAR_9)
{
 uint32_t * VAR_10 = (uint32_t *)VAR_4;
 uint32_t VAR_11 = (VAR_8 ? 2 : 1) * sizeof(uint32_t);

 uint32_t VAR_12 = 0;
 uint32_t VAR_13 = 0;
 uint32_t VAR_14 = 0xfc000000;
 int VAR_15 = 0;
 uint32_t VAR_16 = 0;
 uint32_t VAR_17 = 0;
 vm_offset_t VAR_18 = 0;
 vm_map_t VAR_19 = VAR_1;

 VAR_6 = (VAR_5 > VAR_4) ? FUNC_0(VAR_6, (int)((VAR_5 - VAR_4) / VAR_11)) : 0;

 if (VAR_7) {
      x86_saved_state32_t *VAR_20;

  VAR_20 = FUNC_1(VAR_3);
  VAR_16 = VAR_20->eip;
  VAR_13 = VAR_20->ebp;

  VAR_14 = 0xffffffff;
  VAR_19 = VAR_3->task->map;
 }
 else
  FUNC_4("32-bit trace attempted on 64-bit kernel");

 for (VAR_15 = 0; VAR_15 < VAR_6; VAR_15++) {

  *VAR_10++ = VAR_16;
  if (VAR_8) {
   *VAR_10++ = VAR_13;
  }


  if (!VAR_13 || (VAR_13 == VAR_12)) {
   break;
  }


  if (VAR_13 & 0x0000003) {
   break;
  }

  if (VAR_13 <= VAR_17) {
   break;
  }

  if (VAR_13 > VAR_14) {
   break;
  }

  VAR_18 = FUNC_3(VAR_13 + VAR_0, VAR_19, VAR_9);

  if (!VAR_18) {
   if (VAR_9) {
    *VAR_9 |= VAR_2;
   }
   break;
  }

  VAR_16 = *(uint32_t *)VAR_18;

  VAR_17 = VAR_13;

  VAR_18 = FUNC_3(VAR_13, VAR_19, VAR_9);

  if (VAR_18) {
   VAR_13 = *(uint32_t *)VAR_18;
  } else {
   VAR_13 = 0;
   if (VAR_9) {
    *VAR_9 |= VAR_2;
   }
  }
 }

 FUNC_2();

 return (uint32_t) (((char *) VAR_10) - VAR_4);
}
