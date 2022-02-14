
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_16__ {int alt; scalar_t__* alt_max_pkt_size; scalar_t__ max_pkt_size; } ;
struct TYPE_15__ {TYPE_6__* hs_config_info; } ;
struct TYPE_12__ {int alt; scalar_t__* alt_max_pkt_size; scalar_t__ max_pkt_size; } ;
struct TYPE_11__ {int alt; scalar_t__* alt_max_pkt_size; scalar_t__ max_pkt_size; } ;
struct TYPE_10__ {int alt; scalar_t__* alt_max_pkt_size; scalar_t__ max_pkt_size; } ;
struct TYPE_9__ {int alt; scalar_t__* alt_max_pkt_size; scalar_t__ max_pkt_size; } ;
struct cx231xx {scalar_t__ model; int udev; TYPE_8__ sliced_cc_mode; TYPE_7__ current_pcb_config; TYPE_4__ vbi_mode; TYPE_3__ video_mode; TYPE_2__ adev; TYPE_1__ ts1_mode; } ;
struct TYPE_13__ {int hanc_index; int vanc_index; int video_index; int audio_index; int ts2_index; int ts1_index; } ;
struct TYPE_14__ {TYPE_5__ interface_info; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;






 int FUNC_0 (char*,int,scalar_t__,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__,int,...) ;
 int FUNC_2 (int ,scalar_t__,int) ;

int FUNC_3(struct cx231xx *VAR_2, u8 VAR_3, u8 VAR_4)
{
 int VAR_5 = 0;
 u32 VAR_6 = 0;
 u32 VAR_7 = 0;

 switch (VAR_3) {
 case 131:
  VAR_6 =
      VAR_2->current_pcb_config.hs_config_info[0].interface_info.
      ts1_index + 1;
  VAR_2->ts1_mode.alt = VAR_4;
  if (VAR_2->ts1_mode.alt_max_pkt_size != ((void*)0))
   VAR_7 = VAR_2->ts1_mode.max_pkt_size =
       VAR_2->ts1_mode.alt_max_pkt_size[VAR_2->ts1_mode.alt];
  break;
 case 130:
  VAR_6 =
      VAR_2->current_pcb_config.hs_config_info[0].interface_info.
      ts2_index + 1;
  break;
 case 133:
  VAR_6 =
      VAR_2->current_pcb_config.hs_config_info[0].interface_info.
      audio_index + 1;
  VAR_2->adev.alt = VAR_4;
  if (VAR_2->adev.alt_max_pkt_size != ((void*)0))
   VAR_7 = VAR_2->adev.max_pkt_size =
       VAR_2->adev.alt_max_pkt_size[VAR_2->adev.alt];
  break;
 case 128:
  VAR_6 =
      VAR_2->current_pcb_config.hs_config_info[0].interface_info.
      video_index + 1;
  VAR_2->video_mode.alt = VAR_4;
  if (VAR_2->video_mode.alt_max_pkt_size != ((void*)0))
   VAR_7 = VAR_2->video_mode.max_pkt_size =
       VAR_2->video_mode.alt_max_pkt_size[VAR_2->video_mode.
            alt];
  break;
 case 129:
  VAR_6 =
      VAR_2->current_pcb_config.hs_config_info[0].interface_info.
      vanc_index + 1;
  VAR_2->vbi_mode.alt = VAR_4;
  if (VAR_2->vbi_mode.alt_max_pkt_size != ((void*)0))
   VAR_7 = VAR_2->vbi_mode.max_pkt_size =
       VAR_2->vbi_mode.alt_max_pkt_size[VAR_2->vbi_mode.alt];
  break;
 case 132:
  VAR_6 =
      VAR_2->current_pcb_config.hs_config_info[0].interface_info.
      hanc_index + 1;
  VAR_2->sliced_cc_mode.alt = VAR_4;
  if (VAR_2->sliced_cc_mode.alt_max_pkt_size != ((void*)0))
   VAR_7 = VAR_2->sliced_cc_mode.max_pkt_size =
       VAR_2->sliced_cc_mode.alt_max_pkt_size[VAR_2->
         sliced_cc_mode.
         alt];
  break;
 default:
  break;
 }

 if (VAR_4 > 0 && VAR_7 == 0) {
  FUNC_1
  ("can't change interface %d alt no. to %d: Max. Pkt size = 0\n",
  VAR_6, VAR_4);


  if (VAR_2->model != VAR_0 &&
      VAR_2->model != VAR_1)
   return -1;
 }

 FUNC_0("setting alternate %d with wMaxPacketSize=%u,"
   "Interface = %d\n", VAR_4, VAR_7,
   VAR_6);

 if (VAR_6 > 0) {
  VAR_5 = FUNC_2(VAR_2->udev, VAR_6, VAR_4);
  if (VAR_5 < 0) {
   FUNC_1
   ("can't change interface %d alt no. to %d (err=%i)\n",
   VAR_6, VAR_4, VAR_5);
   return VAR_5;
  }
 }

 return VAR_5;
}
