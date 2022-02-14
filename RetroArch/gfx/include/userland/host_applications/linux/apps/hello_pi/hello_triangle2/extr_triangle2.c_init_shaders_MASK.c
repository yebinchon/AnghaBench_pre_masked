
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vertex_data ;
struct TYPE_3__ {void* attr_vertex2; void* attr_vertex; int buf; int screen_height; int screen_width; int tex; int tex_fb; void* program2; void* unif_centre2; void* unif_offset2; void* unif_scale2; scalar_t__ verbose; void* mshader; void* vshader; void* program; void* unif_centre; void* unif_tex; void* unif_offset; void* unif_scale; void* unif_color; void* fshader; } ;
typedef double GLfloat ;
typedef char GLchar ;
typedef TYPE_1__ CUBE_STATE_T ;


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
 int FUNC_0 () ;
 int FUNC_1 (void*,void*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int,double const*,int ) ;
 int FUNC_6 (double,double,double,double) ;
 int FUNC_7 (void*) ;
 void* FUNC_8 () ;
 void* FUNC_9 (int ) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (int ,int ,int ,int ,int ) ;
 int FUNC_12 (int,int *) ;
 int FUNC_13 (int,int *) ;
 int FUNC_14 (int,int *) ;
 void* FUNC_15 (void*,char*) ;
 void* FUNC_16 (void*,char*) ;
 int FUNC_17 (void*) ;
 int FUNC_18 (void*,int,char const**,int ) ;
 int FUNC_19 (int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_20 (int ,int ,int ) ;
 int FUNC_21 (void*,int,int ,int ,int,int ) ;
 int FUNC_22 (int ,int ,int ,int ) ;
 int FUNC_23 (void*) ;
 int FUNC_24 (void*) ;

__attribute__((used)) static void FUNC_25(CUBE_STATE_T *VAR_13)
{
   static const GLfloat VAR_14[] = {
        -1.0,-1.0,1.0,1.0,
        1.0,-1.0,1.0,1.0,
        1.0,1.0,1.0,1.0,
        -1.0,1.0,1.0,1.0
   };
   const GLchar *VAR_15 =
              "attribute vec4 vertex;"
              "varying vec2 tcoord;"
              "void main(void) {"
              " vec4 pos = vertex;"
              " gl_Position = pos;"
              " tcoord = vertex.xy*0.5+0.5;"
              "}";


   const GLchar *VAR_16 =
"uniform vec4 color;"
"uniform vec2 scale;"
"uniform vec2 centre;"
"varying vec2 tcoord;"
"void main(void) {"
"  float intensity;"
"  vec4 color2;"
"  float cr=(gl_FragCoord.x-centre.x)*scale.x;"
"  float ci=(gl_FragCoord.y-centre.y)*scale.y;"
"  float ar=cr;"
"  float ai=ci;"
"  float tr,ti;"
"  float col=0.0;"
"  float p=0.0;"
"  int i=0;"
"  for(int i2=1;i2<16;i2++)"
"  {"
"    tr=ar*ar-ai*ai+cr;"
"    ti=2.0*ar*ai+ci;"
"    p=tr*tr+ti*ti;"
"    ar=tr;"
"    ai=ti;"
"    if (p>16.0)"
"    {"
"      i=i2;"
"      break;"
"    }"
"  }"
"  color2 = vec4(float(i)*0.0625,0,0,1);"
"  gl_FragColor = color2;"
"}";


   const GLchar *VAR_17 =
"uniform vec4 color;"
"uniform vec2 scale;"
"uniform vec2 centre;"
"uniform vec2 offset;"
"varying vec2 tcoord;"
"uniform sampler2D tex;"
"void main(void) {"
"  float intensity;"
"  vec4 color2;"
"  float ar=(gl_FragCoord.x-centre.x)*scale.x;"
"  float ai=(gl_FragCoord.y-centre.y)*scale.y;"
"  float cr=(offset.x-centre.x)*scale.x;"
"  float ci=(offset.y-centre.y)*scale.y;"
"  float tr,ti;"
"  float col=0.0;"
"  float p=0.0;"
"  int i=0;"
"  vec2 t2;"
"  t2.x=tcoord.x+(offset.x-centre.x)*(0.5/centre.y);"
"  t2.y=tcoord.y+(offset.y-centre.y)*(0.5/centre.x);"
"  for(int i2=1;i2<16;i2++)"
"  {"
"    tr=ar*ar-ai*ai+cr;"
"    ti=2.0*ar*ai+ci;"
"    p=tr*tr+ti*ti;"
"    ar=tr;"
"    ai=ti;"
"    if (p>16.0)"
"    {"
"      i=i2;"
"      break;"
"    }"
"  }"
"  color2 = vec4(0,float(i)*0.0625,0,1);"
"  color2 = color2+texture2D(tex,t2);"
"  gl_FragColor = color2;"
"}";

        VAR_13->vshader = FUNC_9(VAR_12);
        FUNC_18(VAR_13->vshader, 1, &VAR_15, 0);
        FUNC_7(VAR_13->vshader);
        FUNC_0();

        if (VAR_13->verbose)
            FUNC_23(VAR_13->vshader);

        VAR_13->fshader = FUNC_9(VAR_3);
        FUNC_18(VAR_13->fshader, 1, &VAR_17, 0);
        FUNC_7(VAR_13->fshader);
        FUNC_0();

        if (VAR_13->verbose)
            FUNC_23(VAR_13->fshader);

        VAR_13->mshader = FUNC_9(VAR_3);
        FUNC_18(VAR_13->mshader, 1, &VAR_16, 0);
        FUNC_7(VAR_13->mshader);
        FUNC_0();

        if (VAR_13->verbose)
            FUNC_23(VAR_13->mshader);


        VAR_13->program = FUNC_8();
        FUNC_1(VAR_13->program, VAR_13->vshader);
        FUNC_1(VAR_13->program, VAR_13->fshader);
        FUNC_17(VAR_13->program);
        FUNC_0();

        if (VAR_13->verbose)
            FUNC_24(VAR_13->program);

        VAR_13->attr_vertex = FUNC_15(VAR_13->program, "vertex");
        VAR_13->unif_color = FUNC_16(VAR_13->program, "color");
        VAR_13->unif_scale = FUNC_16(VAR_13->program, "scale");
        VAR_13->unif_offset = FUNC_16(VAR_13->program, "offset");
        VAR_13->unif_tex = FUNC_16(VAR_13->program, "tex");
        VAR_13->unif_centre = FUNC_16(VAR_13->program, "centre");


        VAR_13->program2 = FUNC_8();
        FUNC_1(VAR_13->program2, VAR_13->vshader);
        FUNC_1(VAR_13->program2, VAR_13->mshader);
        FUNC_17(VAR_13->program2);
        FUNC_0();

        if (VAR_13->verbose)
            FUNC_24(VAR_13->program2);

        VAR_13->attr_vertex2 = FUNC_15(VAR_13->program2, "vertex");
        VAR_13->unif_scale2 = FUNC_16(VAR_13->program2, "scale");
        VAR_13->unif_offset2 = FUNC_16(VAR_13->program2, "offset");
        VAR_13->unif_centre2 = FUNC_16(VAR_13->program2, "centre");
        FUNC_0();

        FUNC_6 ( 0.0, 1.0, 1.0, 1.0 );

        FUNC_12(1, &VAR_13->buf);

        FUNC_0();


        FUNC_14(1, &VAR_13->tex);
        FUNC_0();
        FUNC_4(VAR_8,VAR_13->tex);
        FUNC_0();

        FUNC_19(VAR_8,0,VAR_6,VAR_13->screen_width,VAR_13->screen_height,0,VAR_6,VAR_11,0);
        FUNC_0();
        FUNC_20(VAR_8, VAR_10, VAR_5);
        FUNC_20(VAR_8, VAR_9, VAR_5);
        FUNC_0();

        FUNC_13(1,&VAR_13->tex_fb);
        FUNC_0();
        FUNC_3(VAR_4,VAR_13->tex_fb);
        FUNC_0();
        FUNC_11(VAR_4,VAR_1,VAR_8,VAR_13->tex,0);
        FUNC_0();
        FUNC_3(VAR_4,0);
        FUNC_0();

        FUNC_22 ( 0, 0, VAR_13->screen_width, VAR_13->screen_height );
        FUNC_0();


        FUNC_2(VAR_0, VAR_13->buf);
        FUNC_5(VAR_0, sizeof(VAR_14),
                             VAR_14, VAR_7);
        FUNC_21(VAR_13->attr_vertex, 4, VAR_2, 0, 16, 0);
        FUNC_10(VAR_13->attr_vertex);
        FUNC_21(VAR_13->attr_vertex2, 4, VAR_2, 0, 16, 0);
        FUNC_10(VAR_13->attr_vertex2);

        FUNC_0();
}
