
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {scalar_t__ state; int modifier; scalar_t__ UTF16; int scancode; } ;
typedef TYPE_1__ KBDKeyEvent ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int,unsigned int,char,int ,int ) ;
 unsigned int FUNC_1 (int ) ;
 int* VAR_14 ;

void FUNC_2(KBDKeyEvent *VAR_15)
{
   uint16_t VAR_16 = 0;
   unsigned VAR_17 = 0;
   bool VAR_18 = 0;

   if (VAR_15->state > 0)
      VAR_18 = 1;

   VAR_17 = FUNC_1(VAR_15->scancode);
   if (VAR_17 < VAR_12)
      VAR_14[VAR_17] = VAR_18;

   if (VAR_15->modifier & VAR_5)
      VAR_16 |= VAR_11;

   if (VAR_15->modifier & VAR_2)
      VAR_16 |= VAR_8;

   if (VAR_15->modifier & VAR_0)
      VAR_16 |= VAR_6;

   if (VAR_15->modifier & VAR_3)
      VAR_16 |= VAR_9;

   if (VAR_15->modifier & VAR_1)
      VAR_16 |= VAR_7;

   if (VAR_15->modifier & VAR_4)
      VAR_16 |= VAR_10;

   FUNC_0(VAR_18, VAR_17, (char)VAR_15->UTF16, VAR_16,
         VAR_13);
}
