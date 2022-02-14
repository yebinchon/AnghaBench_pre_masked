
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_short ;
typedef int u_char ;
struct TYPE_3__ {size_t byte; scalar_t__ bit; } ;
typedef TYPE_1__ bitmap_offset_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(u_char * VAR_4, uint32_t VAR_5, uint32_t VAR_6)
{
    bitmap_offset_t VAR_7;
    bitmap_offset_t VAR_8;

    VAR_7 = FUNC_0(VAR_5);
    VAR_8 = FUNC_0(VAR_5 + VAR_6);
    if (VAR_7.byte < VAR_8.byte) {
 uint32_t VAR_9;

 if (VAR_7.bit) {
     VAR_4[VAR_7.byte] |= FUNC_1(VAR_7.bit, VAR_0 - 1);
     VAR_7.bit = 0;
     VAR_7.byte++;
     if (VAR_7.byte == VAR_8.byte)
  goto end;
 }

 VAR_9 = VAR_8.byte - VAR_7.byte;

 while (VAR_9 >= (sizeof(uint32_t))) {
     *((uint32_t *)(VAR_4 + VAR_7.byte)) = VAR_2;
     VAR_7.byte += sizeof(uint32_t);
     VAR_9 -= sizeof(uint32_t);
 }
 if (VAR_9 >= sizeof(u_short)) {
     *((u_short *)(VAR_4 + VAR_7.byte)) = VAR_3;
     VAR_7.byte += sizeof(u_short);
     VAR_9 -= sizeof(u_short);
 }
 if (VAR_9 == 1) {
     VAR_4[VAR_7.byte] = VAR_1;
     VAR_7.byte++;
     VAR_9 = 0;
 }
    }

 end:
    if (VAR_8.bit > VAR_7.bit) {
 VAR_4[VAR_7.byte] |= FUNC_1(VAR_7.bit, VAR_8.bit - 1);
    }

    return;
}
