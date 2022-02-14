
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct SwsContext {int dummy; } ;
struct TYPE_9__ {int height; int width; } ;
struct TYPE_8__ {int linesize; scalar_t__ data; } ;
typedef int AVPacket ;
typedef TYPE_1__ AVFrame ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_1__*,int*,int *) ;
 TYPE_2__ VAR_0 ;
 int FUNC_3 (struct SwsContext*,int ,int ,int ,int ) ;
 int FUNC_4 (struct SwsContext*,int const* const*,int ,int ,int ,scalar_t__,int ) ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_5(AVPacket *VAR_2, AVFrame *VAR_3,
      AVFrame *VAR_4, struct SwsContext *VAR_5)
{
   int VAR_6 = 0;
   int VAR_7 = FUNC_2(VAR_1, VAR_3, &VAR_6, VAR_2);

   if (VAR_7 < 0)
      return 0;

   if (VAR_6)
   {
      FUNC_3(VAR_5, VAR_0.width, VAR_0.height,
            FUNC_1(VAR_3), FUNC_0(VAR_3));
      FUNC_4(VAR_5, (const uint8_t * const*)VAR_3->data,
            VAR_3->linesize, 0, VAR_0.height,
            VAR_4->data, VAR_4->linesize);
      return 1;
   }

   return 0;
}
