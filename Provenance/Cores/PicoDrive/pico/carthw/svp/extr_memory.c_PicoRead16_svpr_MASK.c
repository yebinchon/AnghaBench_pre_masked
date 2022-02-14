
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {TYPE_1__* gr; } ;
struct TYPE_6__ {TYPE_2__ ssp1601; } ;
struct TYPE_4__ {int h; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;

__attribute__((used)) static u32 FUNC_2(u32 VAR_6)
{
  u32 VAR_7 = 0;


  if ((VAR_6 & ~0x0f) == 0xa15000) {
    switch (VAR_6 & 0xf) {
      case 0:
      case 2:
        VAR_7 = VAR_5->ssp1601.gr[VAR_2].h;
        break;

      case 4:
        VAR_7 = VAR_5->ssp1601.gr[VAR_1].h;
        VAR_5->ssp1601.gr[VAR_1].h &= ~1;
 break;
    }
    return VAR_7;
  }




  return FUNC_0(VAR_6);
}
