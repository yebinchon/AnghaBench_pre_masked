
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct go7007_usb {int * audio_urbs; int * video_urbs; } ;
struct go7007 {scalar_t__ status; scalar_t__ audio_enabled; struct go7007_usb* hpi_context; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct go7007 *VAR_1)
{
 struct go7007_usb *VAR_2 = VAR_1->hpi_context;
 int VAR_3;

 if (VAR_1->status == VAR_0)
  return 0;
 for (VAR_3 = 0; VAR_3 < 8; ++VAR_3)
  FUNC_0(VAR_2->video_urbs[VAR_3]);
 if (VAR_1->audio_enabled)
  for (VAR_3 = 0; VAR_3 < 8; ++VAR_3)
   FUNC_0(VAR_2->audio_urbs[VAR_3]);
 return 0;
}
