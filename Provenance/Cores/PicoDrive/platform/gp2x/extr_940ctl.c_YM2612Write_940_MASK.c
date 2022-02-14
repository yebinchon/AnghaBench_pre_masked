
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT16 ;
struct TYPE_5__ {scalar_t__ pal; } ;
struct TYPE_8__ {TYPE_1__ m; } ;
struct TYPE_7__ {int EmuOpt; } ;
struct TYPE_6__ {int* writebuff0; int* writebuff1; scalar_t__ writebuffsel; } ;


 TYPE_4__ VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_0 (char*,unsigned int,unsigned int) ;
 TYPE_2__* VAR_4 ;
 int VAR_5 ;

int FUNC_1(unsigned int VAR_6, unsigned int VAR_7, int VAR_8)
{
 int VAR_9 = 1;

 VAR_6 &= 3;



 switch (VAR_6)
 {
  case 0:
   if (VAR_2 == 0 && VAR_1 == VAR_7)
    return 0;
   VAR_1 = VAR_7;
   VAR_2 = 0;

   if (VAR_7 == 0x24 || VAR_7 == 0x25 || VAR_7 == 0x26 || VAR_7 == 0x2a)
    return 0;
   VAR_9 = 0;
   break;

  case 2:
   if (VAR_2 == 1 && VAR_1 == VAR_7)
    return 0;
   VAR_1 = VAR_7;
   VAR_2 = 1;
   VAR_9 = 0;
   break;
 }



 if (VAR_3.EmuOpt & 4)
 {
  UINT16 *VAR_10 = VAR_4->writebuffsel ? VAR_4->writebuff0 : VAR_4->writebuff1;


  if (VAR_9 && !(VAR_5 & 0x80000000) && VAR_8 < 224)
  {
   int VAR_11 = VAR_0.m.pal ? 68 : 93;
   if (VAR_8 > VAR_11) {

    VAR_10[VAR_5++ & 0xffff] = 0xfffe;
    VAR_5 |= 0x80000000;

   }
  }


  if ((VAR_5&0xffff) < 2047) {
   VAR_10[VAR_5++ & 0xffff] = (VAR_6<<8)|VAR_7;
  } else {
   FUNC_0("warning: writebuff_ptr > 2047 ([%i] %02x)\n", VAR_6, VAR_7);
  }
 }

 return 0;
}
