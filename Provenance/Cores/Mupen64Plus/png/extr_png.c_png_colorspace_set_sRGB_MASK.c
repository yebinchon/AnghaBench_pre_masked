
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int png_uint_16 ;
typedef int png_const_structrp ;
typedef TYPE_1__* png_colorspacerp ;
struct TYPE_7__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; int member_8; } ;
typedef TYPE_2__ png_XYZ ;
struct TYPE_6__ {int flags; int rendering_intent; int gamma; TYPE_2__ end_points_XYZ; int end_points_xy; } ;


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
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,TYPE_1__*,int ,int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int ,TYPE_1__*,char*,unsigned int,char*) ;
 int VAR_10 ;

int
FUNC_5(png_const_structrp VAR_11, png_colorspacerp VAR_12,
    int VAR_13)
{
   static const png_XYZ VAR_14 =
   {

                  41239, 21264, 1933,
                  35758, 71517, 11919,
                  18048, 7219, 95053
   };


   if ((VAR_12->flags & VAR_6) != 0)
      return 0;
   if (VAR_13 < 0 || VAR_13 >= VAR_9)
      return FUNC_4(VAR_11, VAR_12, "sRGB",
          (unsigned)VAR_13, "invalid sRGB rendering intent");

   if ((VAR_12->flags & VAR_5) != 0 &&
       VAR_12->rendering_intent != VAR_13)
      return FUNC_4(VAR_11, VAR_12, "sRGB",
         (unsigned)VAR_13, "inconsistent rendering intents");

   if ((VAR_12->flags & VAR_2) != 0)
   {
      FUNC_0(VAR_11, "duplicate sRGB information ignored");
      return 0;
   }




   if ((VAR_12->flags & VAR_3) != 0 &&
       !FUNC_3(&VAR_10, &VAR_12->end_points_xy,
       100))
      FUNC_1(VAR_11, "cHRM chunk does not match sRGB",
         VAR_0);




   (void)FUNC_2(VAR_11, VAR_12, VAR_8,
       2 );


   VAR_12->rendering_intent = (png_uint_16)VAR_13;
   VAR_12->flags |= VAR_5;


   VAR_12->end_points_xy = VAR_10;
   VAR_12->end_points_XYZ = VAR_14;
   VAR_12->flags |=
      (VAR_3|VAR_1);


   VAR_12->gamma = VAR_8;
   VAR_12->flags |= VAR_4;


   VAR_12->flags |=
      (VAR_7|VAR_2);

   return 1;
}
