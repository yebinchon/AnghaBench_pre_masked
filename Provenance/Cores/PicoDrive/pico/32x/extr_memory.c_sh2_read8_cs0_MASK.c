
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef int u32 ;
struct TYPE_15__ {scalar_t__ is_slave; } ;
struct TYPE_14__ {int* b; } ;
struct TYPE_13__ {int* b; } ;
struct TYPE_12__ {int* pal; TYPE_2__ sh2_rom_s; TYPE_1__ sh2_rom_m; } ;
typedef TYPE_3__ SH2 ;


 int VAR_0 ;
 TYPE_11__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ,char*,int,int,int ) ;
 int FUNC_1 (int,TYPE_3__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int,int ,int) ;
 int FUNC_6 (int,TYPE_3__*) ;

__attribute__((used)) static u32 FUNC_7(u32 VAR_3, SH2 *VAR_4)
{
  u32 VAR_5 = 0;

  FUNC_3(VAR_4, 1*2);


  if ((VAR_3 & 0x3ffc0) == 0x4000) {
    VAR_5 = FUNC_1(VAR_3, VAR_4);
    goto out_16to8;
  }

  if ((VAR_3 & 0x3fff0) == 0x4100) {
    VAR_5 = FUNC_2(VAR_3);
    FUNC_5(VAR_4, VAR_3, VAR_2, 7);
    goto out_16to8;
  }


  if (!VAR_4->is_slave && VAR_3 < sizeof(VAR_1->sh2_rom_m))
    return VAR_1->sh2_rom_m.b[VAR_3 ^ 1];
  if (VAR_4->is_slave && VAR_3 < sizeof(VAR_1->sh2_rom_s))
    return VAR_1->sh2_rom_s.b[VAR_3 ^ 1];

  if ((VAR_3 & 0x3fe00) == 0x4200) {
    VAR_5 = VAR_1->pal[(VAR_3 & 0x1ff) / 2];
    goto out_16to8;
  }

  return FUNC_6(VAR_3, VAR_4);

out_16to8:
  if (VAR_3 & 1)
    VAR_5 &= 0xff;
  else
    VAR_5 >>= 8;

  FUNC_0(VAR_4, VAR_0, "r8  [%08x]       %02x @%06x",
    VAR_3, VAR_5, FUNC_4(VAR_4));
  return VAR_5;
}
