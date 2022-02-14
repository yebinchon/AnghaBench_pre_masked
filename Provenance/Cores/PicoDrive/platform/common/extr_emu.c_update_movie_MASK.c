
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int frame_count; } ;
struct TYPE_4__ {TYPE_1__ m; } ;


 TYPE_2__ VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (char*) ;
 int* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(void)
{
 int VAR_4 = VAR_0.m.frame_count*3 + 0x40;
 if (VAR_4+3 > VAR_3) {
  FUNC_1(VAR_2);
  VAR_2 = 0;
  FUNC_0("END OF MOVIE.");
  FUNC_2("END OF MOVIE.\n");
 } else {

  VAR_1[0] = ~VAR_2[VAR_4] & 0x8f;
  if(!(VAR_2[VAR_4] & 0x10)) VAR_1[0] |= 0x40;
  if(!(VAR_2[VAR_4] & 0x20)) VAR_1[0] |= 0x10;
  if(!(VAR_2[VAR_4] & 0x40)) VAR_1[0] |= 0x20;
  VAR_1[1] = ~VAR_2[VAR_4+1] & 0x8f;
  if(!(VAR_2[VAR_4+1] & 0x10)) VAR_1[1] |= 0x40;
  if(!(VAR_2[VAR_4+1] & 0x20)) VAR_1[1] |= 0x10;
  if(!(VAR_2[VAR_4+1] & 0x40)) VAR_1[1] |= 0x20;
  VAR_1[0] |= (~VAR_2[VAR_4+2] & 0x0A) << 8;
  if(!(VAR_2[VAR_4+2] & 0x01)) VAR_1[0] |= 0x0400;
  if(!(VAR_2[VAR_4+2] & 0x04)) VAR_1[0] |= 0x0100;
  VAR_1[1] |= (~VAR_2[VAR_4+2] & 0xA0) << 4;
  if(!(VAR_2[VAR_4+2] & 0x10)) VAR_1[1] |= 0x0400;
  if(!(VAR_2[VAR_4+2] & 0x40)) VAR_1[1] |= 0x0100;
 }
}
