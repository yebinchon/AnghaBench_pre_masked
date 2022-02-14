
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int* reg; } ;
struct TYPE_5__ {scalar_t__ dirtyPal; } ;
struct TYPE_8__ {TYPE_2__ video; int cram; TYPE_1__ m; } ;
struct TYPE_7__ {int EmuOpt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 TYPE_3__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int* VAR_9 ;
 int FUNC_1 (void*,void*,int) ;
 int FUNC_2 (int*,int,int) ;
 int FUNC_3 (int,int,char const*) ;
 int FUNC_4 (int*,int ,int) ;
 int FUNC_5 (unsigned short*,scalar_t__,int*,int) ;

__attribute__((used)) static void FUNC_6(const char *VAR_10, const char *VAR_11)
{
 int VAR_12 = VAR_7.EmuOpt;

 if (VAR_6&0x10)
 {
  int VAR_13 = 224;

  if (VAR_3.m.dirtyPal) {
   VAR_3.m.dirtyPal = 0;
   FUNC_4(VAR_9, VAR_3.cram, 0x40);
  }

  if (VAR_4 & VAR_2)
   FUNC_2((int *)(VAR_5+328*8+328*223), 0xe0e0e0e0, 328);
  if (!(VAR_3.video.reg[12]&1)) VAR_13|=0x10000;
  if (VAR_7.EmuOpt&0x4000)
   VAR_13|=0x40000;
  FUNC_5((unsigned short *)VAR_8+321*8, VAR_5+328*8, VAR_9, VAR_13);
 }
 else if (!(VAR_12&0x80))
 {
  int VAR_14;

  if (VAR_3.m.dirtyPal) {
   VAR_3.m.dirtyPal = 0;
   FUNC_4(VAR_9, VAR_3.cram, 0x40);
   if (VAR_3.video.reg[0xC]&8) {


    FUNC_1((void *)(VAR_9+0xc0), (void *)(VAR_9+0x40), 0x40*2/4);
    VAR_9[0xc0] = 0x0600;
    VAR_9[0xd0] = 0xc000;
    VAR_9[0xe0] = 0x0000;
    VAR_9[0xf0] = 0xffff;
   }





  }
  VAR_14 = (VAR_3.video.reg[1]&8) ? 240 : 224;
  if (!(VAR_3.video.reg[12]&1)) VAR_14|=0x10000;
  if (VAR_7.EmuOpt&0x4000)
   VAR_14|=0x40000;
  FUNC_5((unsigned short *)VAR_8+321*8, VAR_5+328*8, VAR_9, VAR_14);
 }

 if (VAR_11 || (VAR_12 & 2)) {
  int VAR_15 = 232;
  if (VAR_11) FUNC_3(4, VAR_15, VAR_11);
  if (VAR_12 & 2) FUNC_3(VAR_0, VAR_15, VAR_10);
 }

 if ((VAR_12 & 0x400) && (VAR_4 & VAR_1))
  FUNC_0();
}
