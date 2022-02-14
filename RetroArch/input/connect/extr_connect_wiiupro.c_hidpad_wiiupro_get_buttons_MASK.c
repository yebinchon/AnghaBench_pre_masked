
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ home; scalar_t__ up; scalar_t__ right; scalar_t__ down; scalar_t__ left; scalar_t__ y; scalar_t__ b; scalar_t__ a; scalar_t__ x; scalar_t__ l; scalar_t__ r; scalar_t__ zl; scalar_t__ zr; scalar_t__ minus; scalar_t__ plus; scalar_t__ l3; scalar_t__ r3; } ;
struct wiiupro {TYPE_1__ btn; } ;
struct hidpad_wiiupro_data {int data; } ;
typedef int input_bits_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static void FUNC_2(void *VAR_17, input_bits_t *VAR_18)
{
   struct hidpad_wiiupro_data *VAR_19 = (struct hidpad_wiiupro_data*)VAR_17;
   struct wiiupro *VAR_20 = VAR_19 ?
      (struct wiiupro*)&VAR_19->data : ((void*)0);

   if (!VAR_19 || !VAR_20)
      return;

   FUNC_0(VAR_18);

   if (VAR_20->btn.r3)
      FUNC_1(VAR_18, VAR_10);
   if (VAR_20->btn.l3)
      FUNC_1(VAR_18, VAR_6);
   if (VAR_20->btn.plus)
      FUNC_1(VAR_18, VAR_13);
   if ( VAR_20->btn.minus)
      FUNC_1(VAR_18, VAR_12);
   if ( VAR_20->btn.zr)
      FUNC_1(VAR_18, VAR_9);
   if ( VAR_20->btn.zl)
      FUNC_1(VAR_18, VAR_5);
   if ( VAR_20->btn.r)
      FUNC_1(VAR_18, VAR_8);
   if ( VAR_20->btn.l)
      FUNC_1(VAR_18, VAR_4);
   if ( VAR_20->btn.x)
      FUNC_1(VAR_18, VAR_15);
   if ( VAR_20->btn.a)
      FUNC_1(VAR_18, VAR_1);
   if ( VAR_20->btn.b)
      FUNC_1(VAR_18, VAR_2);
   if ( VAR_20->btn.y)
      FUNC_1(VAR_18, VAR_16);
   if ( VAR_20->btn.left)
      FUNC_1(VAR_18, VAR_7);
   if ( VAR_20->btn.down)
      FUNC_1(VAR_18, VAR_3);
   if ( VAR_20->btn.right)
      FUNC_1(VAR_18, VAR_11);
   if ( VAR_20->btn.up)
      FUNC_1(VAR_18, VAR_14);
   if ( VAR_20->btn.home)
      FUNC_1(VAR_18, VAR_0);
}
