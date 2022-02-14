
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ps; scalar_t__ square; scalar_t__ cross; scalar_t__ circle; scalar_t__ triangle; scalar_t__ l1; scalar_t__ r1; scalar_t__ l2; scalar_t__ r2; scalar_t__ share; scalar_t__ options; scalar_t__ l3; scalar_t__ r3; } ;
struct ps4 {TYPE_1__ btn; } ;
struct hidpad_ps4_data {int data; } ;
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
 scalar_t__ FUNC_2 (struct ps4*,int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_17, input_bits_t* VAR_18)
{
   struct hidpad_ps4_data *VAR_19 = (struct hidpad_ps4_data*)VAR_17;
   struct ps4 *VAR_20 = VAR_19 ?
      (struct ps4*)&VAR_19->data : ((void*)0);

   if (!VAR_19 || !VAR_20)
      return;

   FUNC_0( VAR_18 );

   if (VAR_20->btn.r3)
      FUNC_1( VAR_18, VAR_10 );
   if (VAR_20->btn.l3)
      FUNC_1( VAR_18, VAR_6 );
   if (VAR_20->btn.options)
      FUNC_1( VAR_18, VAR_13 );
   if ( VAR_20->btn.share)
      FUNC_1( VAR_18, VAR_12 );
   if ( VAR_20->btn.r2)
      FUNC_1( VAR_18, VAR_9 );
   if (VAR_20->btn.l2)
      FUNC_1( VAR_18, VAR_5 );
   if (VAR_20->btn.r1)
      FUNC_1( VAR_18, VAR_8 );
   if (VAR_20->btn.l1)
      FUNC_1( VAR_18, VAR_4 );
   if (VAR_20->btn.triangle)
      FUNC_1( VAR_18, VAR_15 );
   if (VAR_20->btn.circle)
      FUNC_1( VAR_18, VAR_1 );
   if (VAR_20->btn.cross)
      FUNC_1( VAR_18, VAR_2 );
   if (VAR_20->btn.square)
      FUNC_1( VAR_18, VAR_16 );
   if ((FUNC_2(VAR_20, VAR_7)))
      FUNC_1( VAR_18, VAR_7 );
   if ((FUNC_2(VAR_20, VAR_3)))
      FUNC_1( VAR_18, VAR_3 );
   if ((FUNC_2(VAR_20, VAR_11)))
      FUNC_1( VAR_18, VAR_11 );
   if ((FUNC_2(VAR_20, VAR_14)))
      FUNC_1( VAR_18, VAR_14 );
   if (VAR_20->btn.ps)
      FUNC_1( VAR_18, VAR_0 );
}
