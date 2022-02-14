
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vert ;
typedef int uint64_t ;
typedef int d3d8_video_t ;
struct TYPE_5__ {unsigned int last_width; unsigned int last_height; float tex_w; float tex_h; int vertex_buf; } ;
typedef TYPE_1__ d3d8_renderchain_t ;
struct TYPE_6__ {float x; float y; float z; float u; float v; int color; } ;
typedef TYPE_2__ Vertex ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*,TYPE_2__*,int) ;
 int FUNC_3 (unsigned int*,unsigned int*) ;

__attribute__((used)) static void FUNC_4(
      d3d8_video_t *VAR_0,
      d3d8_renderchain_t *VAR_1,
      unsigned VAR_2,
      unsigned VAR_3, unsigned VAR_4, uint64_t VAR_5)
{
   unsigned VAR_6, VAR_7;

   FUNC_3(&VAR_6, &VAR_7);

   if (VAR_1->last_width != VAR_3 || VAR_1->last_height != VAR_4)
   {
      Vertex VAR_8[4];
      float VAR_9, VAR_10;
      void *VAR_11 = ((void*)0);

      VAR_1->last_width = VAR_3;
      VAR_1->last_height = VAR_4;

      VAR_9 = VAR_3;
      VAR_10 = VAR_4;

      VAR_8[0].x = 0.0f;
      VAR_8[0].y = 1.0f;
      VAR_8[0].z = 1.0f;

      VAR_8[1].x = 1.0f;
      VAR_8[1].y = 1.0f;
      VAR_8[1].z = 1.0f;

      VAR_8[2].x = 0.0f;
      VAR_8[2].y = 0.0f;
      VAR_8[2].z = 1.0f;

      VAR_8[3].x = 1.0f;
      VAR_8[3].y = 0.0f;
      VAR_8[3].z = 1.0f;

      VAR_8[0].u = 0.0f;
      VAR_8[0].v = 0.0f;
      VAR_8[1].v = 0.0f;
      VAR_8[2].u = 0.0f;
      VAR_8[1].u = VAR_9;
      VAR_8[2].v = VAR_10;
      VAR_8[3].u = VAR_9;
      VAR_8[3].v = VAR_10;

      VAR_8[1].u /= VAR_1->tex_w;
      VAR_8[2].v /= VAR_1->tex_h;
      VAR_8[3].u /= VAR_1->tex_w;
      VAR_8[3].v /= VAR_1->tex_h;


      VAR_8[0].color = 0xFFFFFFFF;
      VAR_8[1].color = 0xFFFFFFFF;
      VAR_8[2].color = 0xFFFFFFFF;
      VAR_8[3].color = 0xFFFFFFFF;

      VAR_11 = FUNC_0(VAR_1->vertex_buf);
      FUNC_2(VAR_11, VAR_8, sizeof(VAR_8));
      FUNC_1(VAR_1->vertex_buf);
   }
}
