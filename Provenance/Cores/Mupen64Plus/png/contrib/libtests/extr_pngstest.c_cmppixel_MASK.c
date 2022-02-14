
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef void* png_uint_16 ;
typedef int png_const_voidp ;
typedef char* png_const_charp ;
struct TYPE_16__ {int* error; scalar_t__ in_opaque; scalar_t__ accumulate; scalar_t__ output_8bit; int (* out_gp ) (TYPE_2__*,int ) ;int (* from_linear ) (TYPE_2__*,TYPE_2__*,int *) ;int background; int (* transform ) (TYPE_2__*,TYPE_2__*,int ) ;int (* in_gp ) (TYPE_2__*,int ) ;} ;
typedef TYPE_1__ Transform ;
struct TYPE_17__ {scalar_t__ a; scalar_t__ r; scalar_t__ g; scalar_t__ b; } ;
typedef TYPE_2__ Pixel ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int ,int ,TYPE_2__*,TYPE_2__*,TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__*,int *) ;
 int FUNC_6 (TYPE_2__*,int ) ;

__attribute__((used)) static int
FUNC_7(Transform *VAR_0, png_const_voidp VAR_1, png_const_voidp VAR_2,
   png_uint_32 VAR_3, png_uint_32 VAR_4 )
{
   int VAR_5;
   png_const_charp VAR_6;
   Pixel VAR_7, VAR_8, VAR_9;

   VAR_0->in_gp(&VAR_7, VAR_1);

   if (VAR_0->from_linear == ((void*)0))
      VAR_0->transform(&VAR_8, &VAR_7, VAR_0->background);

   else
   {
      VAR_0->transform(&VAR_9, &VAR_7, VAR_0->background);
      VAR_0->from_linear(&VAR_8, &VAR_9, ((void*)0));
   }

   VAR_0->out_gp(&VAR_9, VAR_2);


   if (VAR_8.a == VAR_9.a && VAR_8.r == VAR_9.r &&
      VAR_8.g == VAR_9.g && VAR_8.b == VAR_9.b)
      return 1;





   if (VAR_0->output_8bit && VAR_8.a == 0 && VAR_9.a == 0)
      return 1;




   VAR_6 = ((void*)0);
   {
      int VAR_10 = FUNC_0(VAR_8.a-VAR_9.a);

      if (VAR_10 > VAR_0->error[3])
      {

         if (VAR_0->accumulate)
            VAR_0->error[3] = (png_uint_16)VAR_10;

         else
            VAR_6 = "alpha";
      }
   }




   if (VAR_6 == ((void*)0) && VAR_0->output_8bit &&
      (VAR_8.a == 0 || VAR_9.a == 0))
      return 1;

   if (VAR_6 == ((void*)0))
   {
      int VAR_11 = FUNC_0(VAR_8.r - VAR_9.r);
      int VAR_12 = FUNC_0(VAR_8.g - VAR_9.g);
      int VAR_13 = FUNC_0(VAR_8.b - VAR_9.b);
      int VAR_14;

      if ((VAR_11 | VAR_12 | VAR_13) == 0)
         return 1;


      if (VAR_7.a >= VAR_0->in_opaque)
      {
         VAR_6 = "opaque component";
         VAR_14 = 2;
      }

      else if (VAR_7.a > 0)
      {
         VAR_6 = "alpha component";
         VAR_14 = 1;
      }

      else
      {
         VAR_6 = "transparent component (background)";
         VAR_14 = 0;
      }

      VAR_5 = VAR_11;
      if (VAR_5 < VAR_12) VAR_5 = VAR_12;
      if (VAR_5 < VAR_13) VAR_5 = VAR_13;

      if (VAR_5 <= VAR_0->error[VAR_14])
         return 1;




      if (VAR_0->accumulate)
      {
         VAR_0->error[VAR_14] = (png_uint_16)VAR_5;
         return 1;
      }
   }


   return FUNC_1(VAR_0, VAR_3, VAR_4, &VAR_7, &VAR_8, &VAR_9, VAR_6);
}
