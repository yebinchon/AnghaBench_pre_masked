
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int fifo_bytes; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,int ) ;

__attribute__((used)) static u32 FUNC_1(u32 VAR_3)
{
  u32 VAR_4 = 0;

  if (VAR_3 == 0x800010)
    VAR_4 = (VAR_1.fifo_bytes > 0x3f) ? 0 : (0x3f - VAR_1.fifo_bytes);
  else if (VAR_3 == 0x800012)
    VAR_4 = VAR_1.fifo_bytes == 0 ? 0x8000 : 0;
  else
    FUNC_0(VAR_0, "m68k unmapped r16 [%06x] @%06x", VAR_3, VAR_2);

  return VAR_4;
}
