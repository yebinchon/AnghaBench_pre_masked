
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int stream_index; } ;
struct TYPE_6__ {int * frame; int frame_size; } ;
typedef TYPE_1__ PayloadContext ;
typedef TYPE_2__ AVPacket ;


 int FUNC_0 (int **) ;
 int FUNC_1 (TYPE_2__*,int *,int ) ;

__attribute__((used)) static int FUNC_2(PayloadContext *VAR_0, AVPacket *VAR_1,
                                   int VAR_2)
{
   int VAR_3;

   VAR_1->stream_index = VAR_2;
   VAR_3 = FUNC_1(VAR_1, VAR_0->frame, VAR_0->frame_size);
   if (VAR_3 < 0) {
       FUNC_0(&VAR_0->frame);
   }

   VAR_0->frame = ((void*)0);

   return VAR_3;
}
