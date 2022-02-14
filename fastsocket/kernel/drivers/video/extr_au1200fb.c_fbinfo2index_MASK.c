
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_info {int dummy; } ;
struct TYPE_2__ {int fb_info; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1 (struct fb_info *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
  if (VAR_2 == (struct fb_info *)(&VAR_1[VAR_3].fb_info))
   return VAR_3;
 }
 FUNC_0("au1200fb: ERROR: fbinfo2index failed!\n");
 return -1;
}
