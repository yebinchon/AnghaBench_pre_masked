
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int bcram_reg; } ;
struct TYPE_6__ {TYPE_1__ m; } ;
struct TYPE_5__ {int* data; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,int ) ;

__attribute__((used)) static u32 FUNC_1(u32 VAR_4)
{
  u32 VAR_5 = 0;
  if (VAR_4 == 0x400001) {
    if (VAR_2.data != ((void*)0))
      VAR_5 = 3;
    return VAR_5;
  }

  if ((VAR_4 & 0xfe0000) == 0x600000) {
    if (VAR_2.data != ((void*)0))
      VAR_5 = VAR_2.data[((VAR_4 >> 1) & 0xffff) + 0x2000];
    return VAR_5;
  }

  if (VAR_4 == 0x7fffff)
    return VAR_1->m.bcram_reg;

  FUNC_0(VAR_0, "m68k unmapped r8  [%06x] @%06x", VAR_4, VAR_3);
  return VAR_5;
}
