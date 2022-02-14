
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* zone_t ;
typedef int vm_offset_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_5__ {scalar_t__ elem_size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int,int,int,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2(zone_t VAR_4,
                          vm_offset_t VAR_5,
                          vm_offset_t VAR_6,
                          vm_offset_t VAR_7)
{
 vm_offset_t VAR_8;
 vm_offset_t VAR_9;

 VAR_9 = VAR_6 ^ VAR_2;
 boolean_t VAR_10;
 boolean_t VAR_11 = FUNC_0(VAR_4, VAR_9);
 boolean_t VAR_12 = (VAR_7 & 0x1) ? VAR_1 : VAR_0;



 if ((VAR_7 & 0xFFFFFF0000000000) == 0xFACADE0000000000)
  VAR_12 = VAR_1;
 else if ((VAR_7 & 0xFFFFFF0000000000) == 0xC0FFEE0000000000)
  VAR_12 = VAR_0;


 if (VAR_12) {
  VAR_8 = VAR_7 ^ VAR_3;
  VAR_10 = FUNC_0(VAR_4, VAR_8);
 } else {
  VAR_8 = VAR_7 ^ VAR_2;
  VAR_10 = FUNC_0(VAR_4, VAR_8);
 }


 if (!VAR_11 && VAR_10)
  FUNC_1(VAR_4, VAR_5, VAR_6, (VAR_8 ^ VAR_2), 0);


 if (VAR_11 && !VAR_10)
  FUNC_1(VAR_4, VAR_5, VAR_7,
                                  (VAR_9 ^ (VAR_12 ? VAR_3 : VAR_2)),
                                  VAR_4->elem_size - sizeof(vm_offset_t));







 if (VAR_11 && VAR_10)
  FUNC_1(VAR_4, VAR_5, VAR_6, (VAR_8 ^ VAR_2), 0);


 FUNC_1(VAR_4, VAR_5, VAR_6, (VAR_8 ^ VAR_2), 0);
}
