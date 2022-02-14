
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct TYPE_2__ {int video_std; int audio_std; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_0(v4l2_std_id VAR_3)
{
 int VAR_4 = 0;

 for (; VAR_4 < VAR_1; VAR_4++) {
  if (VAR_3 & VAR_2[VAR_4].video_std)
   return VAR_2[VAR_4].audio_std;
 }
 return VAR_0;
}
