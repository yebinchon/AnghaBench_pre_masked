
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int emu_status; TYPE_2__* gr; } ;
struct TYPE_6__ {TYPE_1__ ssp1601; } ;
struct TYPE_5__ {int h; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int,int,int ) ;
 TYPE_3__* VAR_5 ;

__attribute__((used)) static void FUNC_2(u32 VAR_6, u32 VAR_7)
{
  FUNC_1(VAR_0, "SVP w16: [%06x] %04x @%06x", VAR_6, VAR_7, VAR_4);

  if ((VAR_6 & ~0x0f) == 0xa15000) {
    if (VAR_6 == 0xa15000 || VAR_6 == 0xa15002) {

      VAR_5->ssp1601.gr[VAR_3].h = VAR_7;
      VAR_5->ssp1601.gr[VAR_1].h |= 2;
      VAR_5->ssp1601.emu_status &= ~VAR_2;
    }


    return;
  }

  FUNC_0(VAR_6, VAR_7);
}
