
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_23__ {float font_msg_pos_x; float font_msg_pos_y; scalar_t__ height; scalar_t__ width; } ;
typedef TYPE_7__ video_frame_info_t ;
struct TYPE_24__ {float* color; float* vertex; float* tex_coord; float* lut_tex_coord; unsigned int vertices; } ;
typedef TYPE_8__ video_coords_t ;
struct TYPE_21__ {float v0; float v1; float v2; float v3; } ;
struct TYPE_22__ {TYPE_5__ f; } ;
struct TYPE_19__ {char* ident; int add_prefix; int enable; int idx; int type; } ;
struct uniform_info {int enabled; TYPE_6__ result; TYPE_3__ lookup; scalar_t__ count; scalar_t__ location; int type; } ;
struct TYPE_18__ {float video_font_size; float video_msg_bgcolor_opacity; } ;
struct TYPE_17__ {float video_msg_bgcolor_red; float video_msg_bgcolor_green; float video_msg_bgcolor_blue; } ;
struct TYPE_25__ {TYPE_2__ floats; TYPE_1__ uints; } ;
typedef TYPE_9__ settings_t ;
struct TYPE_16__ {int shader_data; TYPE_4__* shader; int mvp_no_rot; } ;
typedef TYPE_10__ gl_t ;
struct TYPE_20__ {int (* set_uniform_parameter ) (int ,struct uniform_info*,int *) ;int (* set_mvp ) (int ,int *) ;int (* set_coords ) (int ,TYPE_8__*) ;int (* use ) (TYPE_10__*,int ,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int,int) ;
 TYPE_9__* FUNC_1 () ;
 int FUNC_2 (int *,char const*,unsigned int,float) ;
 int FUNC_3 (float*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,unsigned int) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (char const*) ;
 int FUNC_10 (TYPE_10__*,int ,int ,int) ;
 int FUNC_11 (int ,TYPE_8__*) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int ,struct uniform_info*,int *) ;
 int FUNC_14 (int ,struct uniform_info*,int *) ;
 int FUNC_15 (scalar_t__,scalar_t__,int,int) ;

__attribute__((used)) static void FUNC_16(
      gl_t *VAR_8, video_frame_info_t *VAR_9,
      const char *VAR_10)
{
   video_coords_t VAR_11;
   struct uniform_info VAR_12;
   float VAR_13[4];
   const unsigned
      VAR_14 = 6;
   float *VAR_15 = (float*)FUNC_0(4 * VAR_14, sizeof(float));
   float *VAR_16 = (float*)FUNC_8(2 * VAR_14 * sizeof(float));
   settings_t *VAR_17 = FUNC_1();
   int VAR_18 =
      FUNC_2(((void*)0), VAR_10, (unsigned)FUNC_9(VAR_10), 1.0f);


   float VAR_19 = VAR_9->font_msg_pos_x;
   float VAR_20 = VAR_9->font_msg_pos_y;
   float VAR_21 = VAR_18 / (float)VAR_9->width;
   float VAR_22 =
      VAR_17->floats.video_font_size / (float)VAR_9->height;

   float VAR_23 = 0.005f;
   float VAR_24 = 0.005f;

   VAR_19 -= VAR_23;
   VAR_20 -= VAR_24;
   VAR_21 += VAR_23;
   VAR_22 += VAR_24;

   VAR_13[0] = VAR_17->uints.video_msg_bgcolor_red / 255.0f;
   VAR_13[1] = VAR_17->uints.video_msg_bgcolor_green / 255.0f;
   VAR_13[2] = VAR_17->uints.video_msg_bgcolor_blue / 255.0f;
   VAR_13[3] = VAR_17->floats.video_msg_bgcolor_opacity;


   VAR_16[0] = VAR_19;
   VAR_16[1] = VAR_20;

   VAR_16[2] = VAR_19;
   VAR_16[3] = VAR_20 + VAR_22;

   VAR_16[4] = VAR_19 + VAR_21;
   VAR_16[5] = VAR_20 + VAR_22;


   VAR_16[6] = VAR_19;
   VAR_16[7] = VAR_20;

   VAR_16[8] = VAR_19 + VAR_21;
   VAR_16[9] = VAR_20 + VAR_22;

   VAR_16[10] = VAR_19 + VAR_21;
   VAR_16[11] = VAR_20;

   VAR_11.color = VAR_15;
   VAR_11.vertex = VAR_16;
   VAR_11.tex_coord = VAR_15;
   VAR_11.lut_tex_coord = VAR_15;
   VAR_11.vertices = VAR_14;

   FUNC_15(VAR_9->width,
         VAR_9->height, 1, 0);

   VAR_8->shader->use(VAR_8, VAR_8->shader_data,
         VAR_7, 1);

   VAR_8->shader->set_coords(VAR_8->shader_data, &VAR_11);

   FUNC_7(VAR_0);
   FUNC_5(VAR_3, VAR_2);
   FUNC_4(VAR_1);

   VAR_8->shader->set_mvp(VAR_8->shader_data, &VAR_8->mvp_no_rot);

   VAR_12.type = VAR_6;
   VAR_12.enabled = 1;
   VAR_12.location = 0;
   VAR_12.count = 0;

   VAR_12.lookup.type = VAR_5;
   VAR_12.lookup.ident = "bgcolor";
   VAR_12.lookup.idx = VAR_7;
   VAR_12.lookup.add_prefix = 1;
   VAR_12.lookup.enable = 1;

   VAR_12.result.f.v0 = VAR_13[0];
   VAR_12.result.f.v1 = VAR_13[1];
   VAR_12.result.f.v2 = VAR_13[2];
   VAR_12.result.f.v3 = VAR_13[3];

   VAR_8->shader->set_uniform_parameter(VAR_8->shader_data,
         &VAR_12, ((void*)0));

   FUNC_6(VAR_4, 0, VAR_11.vertices);


   VAR_12.result.f.v0 = 0.0f;
   VAR_12.result.f.v1 = 0.0f;
   VAR_12.result.f.v2 = 0.0f;
   VAR_12.result.f.v3 = 0.0f;

   VAR_8->shader->set_uniform_parameter(VAR_8->shader_data,
         &VAR_12, ((void*)0));

   FUNC_3(VAR_15);
   FUNC_3(VAR_16);

   FUNC_15(VAR_9->width,
         VAR_9->height, 0, 1);
}
