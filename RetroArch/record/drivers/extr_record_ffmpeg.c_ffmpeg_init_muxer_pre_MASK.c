
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_6__* ctx; } ;
struct TYPE_9__ {scalar_t__* format; } ;
struct TYPE_11__ {int filename; } ;
struct TYPE_12__ {TYPE_2__ muxer; TYPE_1__ config; TYPE_3__ params; } ;
typedef TYPE_4__ ffmpeg_t ;
struct TYPE_13__ {int * filename; int pb; void* oformat; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*) ;
 void* FUNC_1 (scalar_t__*,int *,int *) ;
 int FUNC_2 (int *,int ,int) ;
 TYPE_6__* FUNC_3 () ;
 scalar_t__ FUNC_4 (int *,int *,int ) ;
 TYPE_6__* VAR_1 ;

__attribute__((used)) static bool FUNC_5(ffmpeg_t *VAR_2)
{
   VAR_1 = FUNC_3();
   FUNC_2(VAR_1->filename, VAR_2->params.filename, sizeof(VAR_1->filename));

   if (*VAR_2->config.format)
      VAR_1->oformat = FUNC_1(VAR_2->config.format, ((void*)0), ((void*)0));
   else
      VAR_1->oformat = FUNC_1(((void*)0), VAR_1->filename, ((void*)0));

   if (!VAR_1->oformat)
      return 0;

   if (FUNC_4(&VAR_1->pb, VAR_1->filename, VAR_0) < 0)
   {
      FUNC_0(VAR_1);
      return 0;
   }

   VAR_2->muxer.ctx = VAR_1;
   return 1;
}
