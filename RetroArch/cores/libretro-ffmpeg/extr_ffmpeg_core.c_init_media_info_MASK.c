
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int sample_rate; } ;
struct TYPE_7__ {int size; scalar_t__ data; } ;
struct TYPE_6__ {double interpolate_fps; float height; float aspect; scalar_t__ width; int sample_rate; } ;
struct TYPE_5__ {float height; int sample_aspect_ratio; scalar_t__ width; } ;


 int VAR_0 ;
 TYPE_4__** VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char*,int ) ;
 scalar_t__* VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 () ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int *,int *,int,int *,int) ;
 int FUNC_7 (int ,scalar_t__,float) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int *) ;
 int * VAR_7 ;
 TYPE_3__* VAR_8 ;
 unsigned int VAR_9 ;
 float FUNC_10 (int ) ;
 TYPE_2__ VAR_10 ;
 scalar_t__* VAR_11 ;
 scalar_t__ VAR_12 ;
 TYPE_1__* VAR_13 ;

__attribute__((used)) static bool FUNC_11(void)
{
   if (VAR_1[0])
      VAR_10.sample_rate = VAR_1[0]->sample_rate;

   VAR_10.interpolate_fps = 60.0;

   if (VAR_13)
   {
      VAR_10.width = VAR_13->width;
      VAR_10.height = VAR_13->height;
      VAR_10.aspect = (float)VAR_13->width *
         FUNC_10(VAR_13->sample_aspect_ratio) / VAR_13->height;
   }
   return 1;
}
