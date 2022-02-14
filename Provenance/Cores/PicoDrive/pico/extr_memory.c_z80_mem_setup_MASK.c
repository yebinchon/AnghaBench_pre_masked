
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ zram; } ;
struct TYPE_3__ {int z80_out; int z80_in; } ;
typedef int FPTR ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ,int,int,scalar_t__,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_4(void)
{
  FUNC_3(VAR_11, 0x0000, 0x1fff, VAR_1.zram, 0);
  FUNC_3(VAR_11, 0x2000, 0x3fff, VAR_1.zram, 0);
  FUNC_3(VAR_11, 0x4000, 0x5fff, VAR_3, 1);
  FUNC_3(VAR_11, 0x6000, 0x7fff, VAR_9, 1);
  FUNC_3(VAR_11, 0x8000, 0xffff, VAR_4, 1);

  FUNC_3(VAR_12, 0x0000, 0x1fff, VAR_1.zram, 0);
  FUNC_3(VAR_12, 0x2000, 0x3fff, VAR_1.zram, 0);
  FUNC_3(VAR_12, 0x4000, 0x5fff, VAR_10, 1);
  FUNC_3(VAR_12, 0x6000, 0x7fff, VAR_8, 1);
  FUNC_3(VAR_12, 0x8000, 0xffff, VAR_5, 1);
}
