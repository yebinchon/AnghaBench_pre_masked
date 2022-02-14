
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;


struct TYPE_20__ {int width; int height; } ;
typedef TYPE_5__ video_frame_info_t ;
typedef float uint32_t ;
struct TYPE_18__ {scalar_t__ vertices; } ;
struct TYPE_19__ {TYPE_3__ coords; } ;
struct TYPE_16__ {scalar_t__ vertices; } ;
struct TYPE_17__ {TYPE_1__ coords; } ;
struct TYPE_15__ {TYPE_4__ carr; } ;
struct TYPE_14__ {TYPE_2__ carr; } ;


 float FUNC_0 (int,float) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int,int ,TYPE_5__*) ;
 TYPE_12__ VAR_2 ;
 TYPE_11__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 float VAR_6 ;
 float VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 float* VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int ,int ,int,int,int,int,float,int ,int,int,int ,int) ;
 int FUNC_5 (float*,int ) ;
 int FUNC_6 (TYPE_5__*,float) ;
 int FUNC_7 (TYPE_5__*,int,int,int ,int,int,int,int,int ,int,float*) ;

__attribute__((used)) static void FUNC_8(video_frame_info_t *VAR_12)
{


   int VAR_13 = (int) VAR_11;
   uint32_t VAR_14 = VAR_6 * 255.0f;
   uint32_t VAR_15 = FUNC_0(0xB8B8B800, VAR_14);
   unsigned VAR_16 = -25 * VAR_6;
   float *VAR_17 = VAR_10;


   FUNC_6(VAR_12, VAR_6);


   FUNC_5(VAR_17, VAR_9);
   FUNC_2(VAR_12);
   FUNC_7(VAR_12, VAR_13,
      VAR_13, VAR_8,
      VAR_12->width/2 - VAR_13/2,
      VAR_12->height/2 - VAR_13/2,
      VAR_12->width,
      VAR_12->height,
      0, 1, VAR_17
   );
   FUNC_3(VAR_12);


   FUNC_4(VAR_1,
      VAR_5,
      VAR_12->width/2,
      VAR_12->height/2 + 175 + 25 + VAR_16,
      VAR_12->width,
      VAR_12->height,
      VAR_15,
      VAR_0,
      1,
      0,
      0,
      0
   );


   FUNC_1(VAR_12->width, VAR_12->height, VAR_4, VAR_12);
   FUNC_1(VAR_12->width, VAR_12->height, VAR_1, VAR_12);

   VAR_3.carr.coords.vertices = 0;
   VAR_2.carr.coords.vertices = 0;


   FUNC_6(VAR_12, VAR_7);
}
