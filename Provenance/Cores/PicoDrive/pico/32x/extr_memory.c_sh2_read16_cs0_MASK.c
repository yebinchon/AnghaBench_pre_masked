
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
struct TYPE_14__ {int* w; } ;
struct TYPE_13__ {int* w; } ;
struct TYPE_12__ {int* pal; TYPE_2__ sh2_rom_s; TYPE_1__ sh2_rom_m; } ;
typedef TYPE_3__ SH2 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_11__* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*,int ,char*,int,int,int ) ;
 int FUNC_1 (int,TYPE_3__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int,int ,int) ;
 int FUNC_6 (int,TYPE_3__*) ;

__attribute__((used)) static u32 FUNC_7(u32 VAR_5, SH2 *VAR_6)
{
  u32 VAR_7 = 0;

  FUNC_3(VAR_6, 1*2);

  if ((VAR_5 & 0x3ffc0) == 0x4000) {
    VAR_7 = FUNC_1(VAR_5, VAR_6);
    if (!(VAR_1 & VAR_2) && (VAR_5 & 0x30) == 0x30)
      return VAR_7;
    goto out;
  }

  if ((VAR_5 & 0x3fff0) == 0x4100) {
    VAR_7 = FUNC_2(VAR_5);
    FUNC_5(VAR_6, VAR_5, VAR_4, 7);
    goto out;
  }

  if (!VAR_6->is_slave && VAR_5 < sizeof(VAR_3->sh2_rom_m))
    return VAR_3->sh2_rom_m.w[VAR_5 / 2];
  if (VAR_6->is_slave && VAR_5 < sizeof(VAR_3->sh2_rom_s))
    return VAR_3->sh2_rom_s.w[VAR_5 / 2];

  if ((VAR_5 & 0x3fe00) == 0x4200) {
    VAR_7 = VAR_3->pal[(VAR_5 & 0x1ff) / 2];
    goto out;
  }

  return FUNC_6(VAR_5, VAR_6);

out:
  FUNC_0(VAR_6, VAR_0, "r16 [%08x]     %04x @%06x",
    VAR_5, VAR_7, FUNC_4(VAR_6));
  return VAR_7;
}
