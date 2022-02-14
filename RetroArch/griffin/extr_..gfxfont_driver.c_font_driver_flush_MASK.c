
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int video_frame_info_t ;
struct TYPE_4__ {int renderer_data; TYPE_1__* renderer; } ;
typedef TYPE_2__ font_data_t ;
struct TYPE_3__ {int (* flush ) (unsigned int,unsigned int,int ,int *) ;} ;


 int FUNC_0 (unsigned int,unsigned int,int ,int *) ;
 void* VAR_0 ;

void FUNC_1(unsigned VAR_1, unsigned VAR_2, void *VAR_3,
      video_frame_info_t *VAR_4)
{
   font_data_t *VAR_5 = (font_data_t*)(VAR_3 ? VAR_3 : VAR_0);
   if (VAR_5 && VAR_5->renderer && VAR_5->renderer->flush)
      VAR_5->renderer->flush(VAR_1, VAR_2, VAR_5->renderer_data, VAR_4);
}
