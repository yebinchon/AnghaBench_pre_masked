
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__** streams; } ;
struct TYPE_7__ {int codec_id; } ;
struct TYPE_6__ {TYPE_2__* codec; } ;
typedef TYPE_2__ AVCodecContext ;
typedef int AVCodec ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int *,int *) ;
 TYPE_4__* VAR_1 ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static bool FUNC_3(AVCodecContext **VAR_2, unsigned VAR_3)
{
   AVCodec *VAR_4 = FUNC_0(VAR_1->streams[VAR_3]->codec->codec_id);

   if (!VAR_4)
   {
      FUNC_2(VAR_0, "Couldn't find suitable decoder, exiting ... \n");
      return 0;
   }

   *VAR_2 = VAR_1->streams[VAR_3]->codec;
   if (FUNC_1(*VAR_2, VAR_4, ((void*)0)) < 0)
      return 0;

   return 1;
}
