
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char uint32_t ;
typedef int uint16_t ;
typedef int keybuf ;
typedef int XIC ;
struct TYPE_7__ {unsigned int state; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_3__ xkey; } ;
typedef TYPE_1__ XEvent ;
typedef int Status ;
typedef scalar_t__ KeySym ;


 int FUNC_0 (char*) ;
 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*,char*,int,scalar_t__*,int *) ;
 int FUNC_3 (int ,TYPE_3__*,char*,int ,scalar_t__*,int *) ;
 int FUNC_4 (int,unsigned int,char,int ,int ) ;
 unsigned int FUNC_5 (unsigned int) ;
 int FUNC_6 (char*,int ,char*,int) ;

__attribute__((used)) static void FUNC_7(unsigned VAR_18, XEvent *VAR_19, XIC VAR_20, bool VAR_21)
{
   int VAR_22;
   Status VAR_23;
   uint32_t VAR_24[32];
   unsigned VAR_25 = 0;
   uint16_t VAR_26 = 0;
   unsigned VAR_27 = VAR_19->xkey.state;
   bool VAR_28 = VAR_19->type == VAR_1;
   int VAR_29 = 0;
   KeySym VAR_30 = 0;

   VAR_24[0] = '\0';


   if (!VAR_21)
   {
      if (VAR_28)
      {
         char VAR_31[32];

         VAR_31[0] = '\0';
         (void)VAR_20;
         VAR_29 = FUNC_2(&VAR_19->xkey, VAR_31,
               sizeof(VAR_31), &VAR_30, ((void*)0));
         for (VAR_22 = 0; VAR_22 < VAR_29; VAR_22++)
            VAR_24[VAR_22] = VAR_31[VAR_22] & 0x7f;

      }
      else
         VAR_30 = FUNC_1(&VAR_19->xkey, (VAR_27 & VAR_14) || (VAR_27 & VAR_2));
   }



   if (VAR_30 >= VAR_15 && VAR_30 <= VAR_16)
       VAR_30 += VAR_17 - VAR_16;



   VAR_25 = FUNC_5(VAR_18);

   if (VAR_27 & VAR_14)
      VAR_26 |= VAR_11;
   if (VAR_27 & VAR_2)
      VAR_26 |= VAR_7;
   if (VAR_27 & VAR_0)
      VAR_26 |= VAR_8;
   if (VAR_27 & VAR_3)
      VAR_26 |= VAR_6;
   if (VAR_27 & VAR_4)
      VAR_26 |= VAR_10;
   if (VAR_27 & VAR_5)
      VAR_26 |= VAR_9;

   FUNC_4(VAR_28, VAR_25, VAR_24[0], VAR_26, VAR_13);

   for (VAR_22 = 1; VAR_22 < VAR_29; VAR_22++)
      FUNC_4(VAR_28, VAR_12,
            VAR_24[VAR_22], VAR_26, VAR_13);
}
