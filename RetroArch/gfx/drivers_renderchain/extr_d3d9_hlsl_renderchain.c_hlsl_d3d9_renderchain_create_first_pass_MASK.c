
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct unsigned_vector_list {int dummy; } ;
struct LinkInfo {TYPE_3__* pass; int tex_h; int tex_w; } ;
struct shader_pass {struct unsigned_vector_list* attrib_map; scalar_t__ last_height; scalar_t__ last_width; struct LinkInfo info; } ;
struct D3D9Vertex {int dummy; } ;
struct TYPE_7__ {int ** tex; scalar_t__* vertex_buf; scalar_t__* last_height; scalar_t__* last_width; scalar_t__ ptr; } ;
struct TYPE_10__ {int passes; int dev; TYPE_1__ prev; } ;
typedef TYPE_4__ d3d9_renderchain_t ;
struct TYPE_8__ {int path; } ;
struct TYPE_9__ {TYPE_2__ source; int filter; } ;
typedef scalar_t__ LPDIRECT3DVERTEXBUFFER9 ;
typedef int * LPDIRECT3DTEXTURE9 ;
typedef int LPDIRECT3DDEVICE9 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int FUNC_0 () ;
 unsigned int FUNC_1 () ;
 int FUNC_2 (int ,struct shader_pass*,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int *) ;
 scalar_t__ FUNC_8 (int ,int *,int ,int ,int,int ,unsigned int,int ,int ,int ,int ,int *,int *,int) ;
 scalar_t__ FUNC_9 (int ,int,int ,int ,int ,int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_4__*,struct shader_pass*) ;
 int FUNC_12 (int ,struct shader_pass) ;
 scalar_t__ FUNC_13 () ;

__attribute__((used)) static bool FUNC_14(
      LPDIRECT3DDEVICE9 VAR_6,
      d3d9_renderchain_t *VAR_7,
      const struct LinkInfo *VAR_8,
      unsigned VAR_9)
{
   unsigned VAR_10;
   struct shader_pass VAR_11;
   unsigned VAR_12 =
      (VAR_9 == VAR_4) ?
      FUNC_0() : FUNC_1();

   VAR_11.info = *VAR_8;
   VAR_11.last_width = 0;
   VAR_11.last_height = 0;
   VAR_11.attrib_map = (struct unsigned_vector_list*)
      FUNC_13();

   VAR_7->prev.ptr = 0;

   for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++)
   {
      VAR_7->prev.last_width[VAR_10] = 0;
      VAR_7->prev.last_height[VAR_10] = 0;
      VAR_7->prev.vertex_buf[VAR_10] = (LPDIRECT3DVERTEXBUFFER9)
         FUNC_9(
            VAR_7->dev, 4 * sizeof(struct D3D9Vertex),
            VAR_3, 0, VAR_0, ((void*)0));

      if (!VAR_7->prev.vertex_buf[VAR_10])
         return 0;

      VAR_7->prev.tex[VAR_10] = (LPDIRECT3DTEXTURE9)
         FUNC_8(VAR_7->dev, ((void*)0),
            VAR_8->tex_w, VAR_8->tex_h, 1, 0, VAR_12,
            VAR_1, 0, 0, 0, ((void*)0), ((void*)0), 0);

      if (!VAR_7->prev.tex[VAR_10])
         return 0;

      FUNC_7(VAR_7->dev, 0, VAR_7->prev.tex[VAR_10]);
      FUNC_6(VAR_6, 0,
            FUNC_10(VAR_8->pass->filter));
      FUNC_5(VAR_6, 0,
            FUNC_10(VAR_8->pass->filter));
      FUNC_3(VAR_6, 0, VAR_2);
      FUNC_4(VAR_6, 0, VAR_2);
      FUNC_7(VAR_7->dev, 0, ((void*)0));
   }

   FUNC_2(VAR_7->dev, &VAR_11, VAR_8->pass->source.path);

   if (!FUNC_11(VAR_7, &VAR_11))
      return 0;
   FUNC_12(VAR_7->passes, VAR_11);
   return 1;
}
