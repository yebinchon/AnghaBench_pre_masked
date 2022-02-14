
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int* bram; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,int ) ;

__attribute__((used)) static u32 FUNC_1(u32 VAR_3)
{
  u32 VAR_4;
  FUNC_0(VAR_0, "FIXME: s68k_bram r16: [%06x] @%06x", VAR_3, VAR_2);
  VAR_3 = (VAR_3 >> 1) & 0x1fff;
  VAR_4 = VAR_1->bram[VAR_3++];
  VAR_4|= VAR_1->bram[VAR_3++] << 8;
  return VAR_4;
}
