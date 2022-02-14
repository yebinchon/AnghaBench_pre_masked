
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_18__ {TYPE_6__* draw; TYPE_5__* context; TYPE_1__* read; } ;
struct TYPE_15__ {TYPE_3__* draw; TYPE_2__* context; } ;
struct TYPE_19__ {TYPE_7__ opengl; TYPE_4__ openvg; } ;
struct TYPE_17__ {scalar_t__ is_destroyed; int context_binding_count; int serverbuffer; scalar_t__ name; } ;
struct TYPE_16__ {scalar_t__ is_destroyed; scalar_t__ is_current; int servercontext; scalar_t__ name; int type; } ;
struct TYPE_14__ {int serverbuffer; } ;
struct TYPE_13__ {int servercontext; } ;
struct TYPE_12__ {int serverbuffer; } ;
typedef int EGL_VG_CONTEXT_ID_T ;
typedef int EGL_SURFACE_ID_T ;
typedef int EGL_GL_CONTEXT_ID_T ;
typedef TYPE_8__ CLIENT_THREAD_STATE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_8__*,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_8__*) ;
 int FUNC_4 (char*,int,unsigned int,...) ;

void FUNC_5(CLIENT_THREAD_STATE_T *VAR_5)
{
   uint64_t VAR_6 = FUNC_3(VAR_5);
   uint32_t VAR_7 = VAR_5->opengl.context ? FUNC_2(VAR_5->opengl.context->type) : 0;
   EGL_GL_CONTEXT_ID_T VAR_8 = VAR_5->opengl.context ? VAR_5->opengl.context->servercontext : VAR_1;
   EGL_SURFACE_ID_T VAR_9 = VAR_5->opengl.draw ? VAR_5->opengl.draw->serverbuffer : VAR_2;
   EGL_SURFACE_ID_T VAR_10 = VAR_5->opengl.read ? VAR_5->opengl.read->serverbuffer : VAR_2;
   EGL_VG_CONTEXT_ID_T VAR_11 = VAR_5->openvg.context ? VAR_5->openvg.context->servercontext : VAR_3;
   EGL_SURFACE_ID_T VAR_12 = VAR_5->openvg.draw ? VAR_5->openvg.draw->serverbuffer : VAR_2;






   if (!VAR_5->opengl.context || !VAR_5->opengl.draw)
   {
      FUNC_4("Send null make current %x %x",
                 (unsigned int)(char *)VAR_5->opengl.context, (unsigned int)(char *)VAR_5->opengl.draw);
   }
   else
   {
      FUNC_4("Send make current %d[%d %s%s] %d[%d %d%s]",
            (int)VAR_5->opengl.context->name,
            VAR_5->opengl.context->servercontext,
            VAR_5->opengl.context->is_current ? " C" : "",
            VAR_5->opengl.context->is_destroyed ? " D" : "",
            (int)VAR_5->opengl.draw->name,
            VAR_5->opengl.draw->serverbuffer,
            VAR_5->opengl.draw->context_binding_count,
            VAR_5->opengl.draw->is_destroyed ? " D" : "");
   }

   FUNC_0(VAR_4,
                         VAR_5,
                         VAR_0,
                         FUNC_1((uint32_t)VAR_6),
                         FUNC_1((uint32_t)(VAR_6 >> 32)),
                         FUNC_1(VAR_7),
                         FUNC_1(VAR_8),
                         FUNC_1(VAR_9),
                         FUNC_1(VAR_10),
                         FUNC_1(VAR_11),
                         FUNC_1(VAR_12));
}
