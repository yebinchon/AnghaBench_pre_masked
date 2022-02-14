
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
struct TYPE_8__ {TYPE_2__ video; TYPE_1__ m; int cram; } ;
struct TYPE_7__ {int gamma2; int gamma; } ;


 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (int*,int ,int ,int ) ;
 int* VAR_3 ;
 int FUNC_1 (int*,void*,int) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_2(int VAR_6, int VAR_7)
{
 unsigned int *VAR_8=(void *)VAR_3;
 int VAR_9;



 FUNC_0(VAR_3, VAR_1.cram, VAR_2.gamma, VAR_2.gamma2);

 VAR_1.m.dirtyPal = 0;
 VAR_4 = 1;

 if (VAR_6 && (VAR_1.video.reg[0xC]&8))
 {

  for (VAR_9 = 0x3f/2; VAR_9 >= 0; VAR_9--)
   VAR_8[0x20|VAR_9] = VAR_8[0x60|VAR_9] = (VAR_8[VAR_9]>>1)&0x7bcf7bcf;

  for (VAR_9 = 0x3f; VAR_9 >= 0; VAR_9--) {
   int VAR_10=VAR_3[VAR_9]&0xf79e;VAR_10+=0x4208;
   if (VAR_10&0x20) VAR_10|=0x1e;
   if (VAR_10&0x800) VAR_10|=0x780;
   if (VAR_10&0x10000) VAR_10|=0xf000;
   VAR_10&=0xf79e;
   VAR_3[0x80|VAR_9]=(unsigned short)VAR_10;
  }
  VAR_3[0xe0] = 0;
  VAR_3[0xf0] = 0x001f;
 }
 else if (VAR_7 && (VAR_5 & VAR_0))
 {
  FUNC_1((int *)VAR_8+0x80/2, (void *)VAR_3, 0x40*2/4);
 }
}
