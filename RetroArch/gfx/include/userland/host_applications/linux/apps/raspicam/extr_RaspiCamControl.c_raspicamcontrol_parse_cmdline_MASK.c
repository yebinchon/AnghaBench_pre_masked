
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* swap_eyes; void* decimate; int mode; } ;
struct TYPE_8__ {double x; double y; double w; double h; } ;
struct TYPE_7__ {int enable; int v; int u; } ;
struct TYPE_9__ {double sharpness; double contrast; double brightness; double saturation; double ISO; int videoStabilisation; double exposureCompensation; double rotation; int hflip; int vflip; double shutter_speed; double awb_gains_r; double awb_gains_b; unsigned int enable_annotate; char* annotate_string; double analog_gain; double digital_gain; int settings; TYPE_1__ stereo_mode; int annotate_y; int annotate_x; int annotate_justify; int annotate_bg_colour; int annotate_text_colour; int annotate_text_size; void* stats_pass; int drc_level; TYPE_3__ roi; int exposureMeterMode; TYPE_2__ colourEffects; int imageEffect; int awbMode; int flickerAvoidMode; int exposureMode; } ;
typedef TYPE_4__ RASPICAM_CAMERA_PARAMETERS ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (char const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int ,int ,char const*,int*) ;
 int FUNC_7 (char const*,char*,...) ;
 int FUNC_8 (char const*) ;

int FUNC_9(RASPICAM_CAMERA_PARAMETERS *VAR_5, const char *VAR_6, const char *VAR_7)
{
   int VAR_8, VAR_9 = 0, VAR_10;

   if (!VAR_6)
      return 0;

   VAR_8 = FUNC_6(VAR_3, VAR_4, VAR_6, &VAR_10);


   if (VAR_8==-1 || (VAR_8 != -1 && VAR_10 > 0 && VAR_7 == ((void*)0)))
      return 0;

   switch (VAR_8)
   {
   case 135 :
      FUNC_7(VAR_7, "%d", &VAR_5->sharpness);
      VAR_9 = 2;
      break;

   case 149 :
      FUNC_7(VAR_7, "%d", &VAR_5->contrast);
      VAR_9 = 2;
      break;

   case 151 :
      FUNC_7(VAR_7, "%d", &VAR_5->brightness);
      VAR_9 = 2;
      break;

   case 137 :
      FUNC_7(VAR_7, "%d", &VAR_5->saturation);
      VAR_9 = 2;
      break;

   case 142 :
      FUNC_7(VAR_7, "%d", &VAR_5->ISO);
      VAR_9 = 2;
      break;

   case 128 :
      VAR_5->videoStabilisation = 1;
      VAR_9 = 1;
      break;

   case 146 :
      FUNC_7(VAR_7, "%d", &VAR_5->exposureCompensation);
      VAR_9 = 2;
      break;

   case 145 :
      VAR_5->exposureMode = FUNC_2(VAR_7);
      VAR_9 = 2;
      break;

   case 144 :
      VAR_5->flickerAvoidMode = FUNC_3(VAR_7);
      VAR_9 = 2;
      break;

   case 156 :
      VAR_5->awbMode = FUNC_0(VAR_7);
      VAR_9 = 2;
      break;

   case 141 :
      VAR_5->imageEffect = FUNC_4(VAR_7);
      VAR_9 = 2;
      break;

   case 150 :
      FUNC_7(VAR_7, "%d:%d", &VAR_5->colourEffects.u, &VAR_5->colourEffects.v);
      VAR_5->colourEffects.enable = 1;
      VAR_9 = 2;
      break;

   case 140:
      VAR_5->exposureMeterMode = FUNC_5(VAR_7);
      VAR_9 = 2;
      break;

   case 138 :
      FUNC_7(VAR_7, "%d", &VAR_5->rotation);
      VAR_9 = 2;
      break;

   case 143 :
      VAR_5->hflip = 1;
      VAR_9 = 1;
      break;

   case 129 :
      VAR_5->vflip = 1;
      VAR_9 = 1;
      break;

   case 139 :
   {
      double VAR_11,VAR_12,VAR_13,VAR_14;
      int VAR_15;

      VAR_15 = FUNC_7(VAR_7, "%lf,%lf,%lf,%lf", &VAR_11,&VAR_12,&VAR_13,&VAR_14);

      if (VAR_15 != 4 || VAR_11 > 1.0 || VAR_12 > 1.0 || VAR_13 > 1.0 || VAR_14 > 1.0)
      {
         return 0;
      }


      if (VAR_11 + VAR_13 > 1.0)
         VAR_13 = 1 - VAR_11;

      if (VAR_12 + VAR_14 > 1.0)
         VAR_14 = 1 - VAR_12;

      VAR_5->roi.x = VAR_11;
      VAR_5->roi.y = VAR_12;
      VAR_5->roi.w = VAR_13;
      VAR_5->roi.h = VAR_14;

      VAR_9 = 2;
      break;
   }

   case 134 :
   {
      FUNC_7(VAR_7, "%d", &VAR_5->shutter_speed);
      VAR_9 = 2;
      break;
   }

   case 152 :
   {
      double VAR_16,VAR_17;
      int VAR_18;

      VAR_18 = FUNC_7(VAR_7, "%lf,%lf", &VAR_16,&VAR_17);

      if (VAR_18 != 2 || VAR_16 > 8.0 || VAR_17 > 8.0)
      {
         return 0;
      }

      VAR_5->awb_gains_r = VAR_16;
      VAR_5->awb_gains_b = VAR_17;

      VAR_9 = 2;
      break;
   }

   case 148:
   {
      VAR_5->drc_level = FUNC_1(VAR_7);
      VAR_9 = 2;
      break;
   }

   case 133:
   {
      VAR_5->stats_pass = VAR_2;
      VAR_9 = 1;
      break;
   }

   case 154:
   {
      char VAR_19;
      unsigned int VAR_20;

      if (FUNC_7(VAR_7, "%u%c", &VAR_20, &VAR_19) == 1)
      {
         VAR_5->enable_annotate |= VAR_20;
      }
      else
      {
         VAR_5->enable_annotate |= VAR_0;

         unsigned char VAR_21;
         char const *VAR_22 = VAR_7;
         char *VAR_23 = &VAR_5->annotate_string[0];
         int VAR_24=0;
         while ((VAR_21 = *VAR_22++) && VAR_24 < VAR_1-1)
         {
            if (VAR_21 == '\\' && *VAR_22)
            {
               switch (VAR_21 = *VAR_22++)
               {
               case 'n':
                  VAR_21 = '\n';
                  break;

               default:
                  VAR_21 = '\\';
                  VAR_22--;
                  break;
               }
            }
            *(VAR_23++) = VAR_21;
            VAR_24++;
         }
         *VAR_23='\0';


      }
      VAR_9=2;
      break;
   }

   case 153:
   {

      FUNC_7(VAR_7, "%u,%X,%X,%u,%u,%u", &VAR_5->annotate_text_size,
             &VAR_5->annotate_text_colour,
             &VAR_5->annotate_bg_colour,
             &VAR_5->annotate_justify,
             &VAR_5->annotate_x,
             &VAR_5->annotate_y
            );
      VAR_9=2;
      break;
   }

   case 131:
   {
      VAR_5->stereo_mode.mode = FUNC_8(VAR_7);
      VAR_9 = 2;
      break;
   }

   case 132:
   {
      VAR_5->stereo_mode.decimate = VAR_2;
      VAR_9 = 1;
      break;
   }

   case 130:
   {
      VAR_5->stereo_mode.swap_eyes = VAR_2;
      VAR_9 = 1;
      break;
   }

   case 155:
   {
      double VAR_25;
      int VAR_26;

      VAR_26 = FUNC_7(VAR_7, "%lf", &VAR_25);

      if (VAR_26 != 1 || VAR_25 > 16.0)
      {
         return 0;
      }

      VAR_5->analog_gain = VAR_25;

      VAR_9 = 2;
      break;
   }
   case 147:
   {
      double VAR_27;
      int VAR_28;

      VAR_28 = FUNC_7(VAR_7, "%lf", &VAR_27);

      if (VAR_28 != 1 || VAR_27 > 64.0)
      {
         return 0;
      }

      VAR_5->digital_gain = VAR_27;

      VAR_9 = 2;
      break;
   }

   case 136:
   {
      VAR_5->settings = 1;
      VAR_9 = 1;
      break;
   }

   }

   return VAR_9;
}
