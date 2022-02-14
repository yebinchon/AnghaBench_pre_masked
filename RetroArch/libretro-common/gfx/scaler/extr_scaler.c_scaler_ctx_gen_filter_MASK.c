
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scaler_ctx {int unscaled; scalar_t__ in_width; scalar_t__ out_width; scalar_t__ in_height; scalar_t__ out_height; int in_fmt; int out_fmt; void* out_pixconv; void* in_pixconv; int scaler_vert; int scaler_horiz; void* direct_pixconv; int * scaler_special; } ;
 int FUNC_0 (struct scaler_ctx*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (struct scaler_ctx*) ;
 int FUNC_2 (struct scaler_ctx*) ;

bool FUNC_3(struct scaler_ctx *VAR_20)
{
   FUNC_1(VAR_20);

   VAR_20->scaler_special = ((void*)0);
   VAR_20->unscaled = 0;

   if (!FUNC_0(VAR_20))
      return 0;

   if ( VAR_20->in_width == VAR_20->out_width
         && VAR_20->in_height == VAR_20->out_height)
   {
      VAR_20->unscaled = 1;

      if (VAR_20->in_fmt == VAR_20->out_fmt)
         VAR_20->direct_pixconv = VAR_10;
      else
      {


         switch (VAR_20->in_fmt)
         {
            case 134:
               switch (VAR_20->out_fmt)
               {
                  case 132:
                     VAR_20->direct_pixconv = VAR_0;
                     break;
                  case 130:
                     VAR_20->direct_pixconv = VAR_2;
                     break;
                  case 131:
                     VAR_20->direct_pixconv = VAR_1;
                     break;
                  default:
                     break;
               }
               break;
            case 130:
               switch (VAR_20->out_fmt)
               {
                  case 132:
                     VAR_20->direct_pixconv = VAR_13;
                     break;
                  case 133:
                     VAR_20->direct_pixconv = VAR_12;
                     break;
                  case 131:
                     VAR_20->direct_pixconv = VAR_14;
                     break;
                  case 134:
                     VAR_20->direct_pixconv = VAR_11;
                     break;
                  default:
                     break;
               }
               break;
            case 131:
               switch (VAR_20->out_fmt)
               {
                  case 132:
                     VAR_20->direct_pixconv = VAR_8;
                     break;
                  case 130:
                     VAR_20->direct_pixconv = VAR_9;
                  default:
                     break;
               }
               break;
            case 132:
               switch (VAR_20->out_fmt)
               {
                  case 134:
                     VAR_20->direct_pixconv = VAR_4;
                     break;
                  case 131:
                     VAR_20->direct_pixconv = VAR_6;
                     break;
                  case 133:
                     VAR_20->direct_pixconv = VAR_5;
                     break;
                  case 129:
                     VAR_20->direct_pixconv = VAR_7;
                     break;
                  default:
                     break;
               }
               break;
            case 128:
               switch (VAR_20->out_fmt)
               {
                  case 132:
                     VAR_20->direct_pixconv = VAR_17;
                     break;
                  default:
                     break;
               }
               break;
            case 129:
               switch (VAR_20->out_fmt)
               {
                  case 132:
                     VAR_20->direct_pixconv = VAR_15;
                     break;
                  case 130:
                     VAR_20->direct_pixconv = VAR_16;
                     break;
                  default:
                     break;
               }
               break;
            case 133:
               switch (VAR_20->out_fmt)
               {
                  case 131:
                     VAR_20->direct_pixconv = VAR_3;
                     break;
                  default:
                     break;
               }
               break;
         }

         if (!VAR_20->direct_pixconv)
            return 0;
      }
   }
   else
   {
      VAR_20->scaler_horiz = VAR_18;
      VAR_20->scaler_vert = VAR_19;

      switch (VAR_20->in_fmt)
      {
         case 132:

            break;

         case 134:
            VAR_20->in_pixconv = VAR_0;
            break;

         case 130:
            VAR_20->in_pixconv = VAR_13;
            break;

         case 131:
            VAR_20->in_pixconv = VAR_8;
            break;

         case 129:
            VAR_20->in_pixconv = VAR_15;
            break;

         default:
            return 0;
      }

      switch (VAR_20->out_fmt)
      {
         case 132:

            break;

         case 129:
            VAR_20->out_pixconv = VAR_7;
            break;

         case 134:
            VAR_20->out_pixconv = VAR_4;
            break;

         case 131:
            VAR_20->out_pixconv = VAR_6;
            break;

         case 133:
            VAR_20->out_pixconv = VAR_5;
            break;

         default:
            return 0;
      }

      if (!FUNC_2(VAR_20))
         return 0;
   }

   return 1;
}
