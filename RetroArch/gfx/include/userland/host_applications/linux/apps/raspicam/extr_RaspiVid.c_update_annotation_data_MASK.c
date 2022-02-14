
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int enable_annotate; char* annotate_string; int annotate_y; int annotate_x; int annotate_justify; int annotate_bg_colour; int annotate_text_colour; int annotate_text_size; } ;
struct TYPE_5__ {scalar_t__ gps; } ;
struct TYPE_7__ {int bitrate; TYPE_2__ camera_parameters; int camera_component; int level; int profile; int intraperiod; int framerate; int intra_refresh_type; TYPE_1__ common_settings; } ;
typedef TYPE_3__ RASPIVID_STATE ;


 int VAR_0 ;
 int FUNC_0 (char**,char*,int,int ,char const*,int ,char*,char*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_2 () ;
 int FUNC_3 (int ,int,char*,int ,int ,int ,int ,int ,int ) ;
 char* FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(RASPIVID_STATE *VAR_7)
{

   if (VAR_7->camera_parameters.enable_annotate & VAR_0)
   {
      char *VAR_8;

      if (VAR_7->common_settings.gps)
      {
         VAR_8 = FUNC_2();
      }
      else
      {
         const char *VAR_9 = FUNC_4(VAR_7->intra_refresh_type, VAR_1, VAR_2);

         FUNC_0(&VAR_8, "%dk,%df,%s,%d,%s,%s",
                  VAR_7->bitrate / 1000, VAR_7->framerate,
                  VAR_9 ? VAR_9 : "(none)",
                  VAR_7->intraperiod,
                  FUNC_4(VAR_7->profile, VAR_5, VAR_6),
                  FUNC_4(VAR_7->level, VAR_3, VAR_4));
      }

      FUNC_3(VAR_7->camera_component, VAR_7->camera_parameters.enable_annotate, VAR_8,
                                   VAR_7->camera_parameters.annotate_text_size,
                                   VAR_7->camera_parameters.annotate_text_colour,
                                   VAR_7->camera_parameters.annotate_bg_colour,
                                   VAR_7->camera_parameters.annotate_justify,
                                   VAR_7->camera_parameters.annotate_x,
                                   VAR_7->camera_parameters.annotate_y
                                  );

      FUNC_1(VAR_8);
   }
   else
   {
      FUNC_3(VAR_7->camera_component, VAR_7->camera_parameters.enable_annotate, VAR_7->camera_parameters.annotate_string,
                                   VAR_7->camera_parameters.annotate_text_size,
                                   VAR_7->camera_parameters.annotate_text_colour,
                                   VAR_7->camera_parameters.annotate_bg_colour,
                                   VAR_7->camera_parameters.annotate_justify,
                                   VAR_7->camera_parameters.annotate_x,
                                   VAR_7->camera_parameters.annotate_y
                                  );
   }
}
