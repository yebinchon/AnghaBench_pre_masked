
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int* rom; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,int,...) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static u32 FUNC_2(u32 VAR_5)
{


  if (VAR_4 > 0)
    VAR_4--;
  if (VAR_4 == 0) {
    FUNC_0();
    FUNC_1(VAR_0, "prot off on r8 @%06x", VAR_3);
  }
  FUNC_1(VAR_1, "pier r8  [%06x] @%06x", VAR_5, VAR_3);

  return VAR_2.rom[(VAR_5 & 0x7fff) ^ 1];
}
