
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef TYPE_1__* c_slot_t ;
typedef TYPE_2__* c_segment_t ;
struct TYPE_8__ {scalar_t__ c_bytes_used; scalar_t__ c_nextslot; int c_populated_offset; int c_nextoffset; scalar_t__ c_firstemptyslot; } ;
struct TYPE_7__ {int c_offset; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (TYPE_2__*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_5 (int ) ;

void
FUNC_6(c_segment_t VAR_3)
{
 c_slot_t VAR_4;
 uint32_t VAR_5;
 uint32_t VAR_6;
 uint32_t VAR_7;
 uint16_t VAR_8;
 uint32_t VAR_9;

 if (VAR_3->c_bytes_used == 0)
  return;
 VAR_8 = VAR_3->c_nextslot;
 VAR_9 = VAR_3->c_populated_offset;

 while (VAR_3->c_nextslot) {

  VAR_4 = FUNC_2(VAR_3, (VAR_3->c_nextslot - 1));

  VAR_5 = FUNC_3(VAR_4);

  if (VAR_5) {
   if (VAR_8 != VAR_3->c_nextslot) {
    VAR_7 = (VAR_5 + VAR_0) & ~VAR_0;
    VAR_6 = VAR_4->c_offset + FUNC_0(VAR_7);

    VAR_3->c_nextoffset = VAR_6;
    VAR_3->c_populated_offset = (VAR_6 + (FUNC_0(VAR_1) - 1)) &
                                           ~(FUNC_0(VAR_1) - 1);

    if (VAR_3->c_firstemptyslot > VAR_3->c_nextslot)
     VAR_3->c_firstemptyslot = VAR_3->c_nextslot;





   }
   break;
  }
  VAR_3->c_nextslot--;
 }
 FUNC_4(VAR_3->c_nextslot);
}
