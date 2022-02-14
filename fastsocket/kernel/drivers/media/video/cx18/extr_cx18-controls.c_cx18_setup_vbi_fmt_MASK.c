
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int insert_mpeg; TYPE_2__* sliced_in; int ** sliced_mpeg_data; } ;
struct cx18 {int v4l2_cap; int is_50hz; TYPE_1__ vbi; scalar_t__ is_60hz; int ana_capturing; } ;
typedef enum v4l2_mpeg_stream_vbi_fmt { ____Placeholder_v4l2_mpeg_stream_vbi_fmt } v4l2_mpeg_stream_vbi_fmt ;
typedef enum v4l2_mpeg_stream_type { ____Placeholder_v4l2_mpeg_stream_type } v4l2_mpeg_stream_type ;
struct TYPE_5__ {int service_set; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct cx18 *VAR_14,
         enum v4l2_mpeg_stream_vbi_fmt VAR_15,
         enum v4l2_mpeg_stream_type VAR_16)
{
 if (!(VAR_14->v4l2_cap & VAR_6))
  return -VAR_3;
 if (FUNC_2(&VAR_14->ana_capturing) > 0)
  return -VAR_2;

 if (VAR_15 != VAR_10 ||
     !(VAR_16 == VAR_8 ||
       VAR_16 == VAR_7 ||
       VAR_16 == VAR_9)) {

  VAR_14->vbi.insert_mpeg = VAR_11;
  FUNC_0("disabled insertion of sliced VBI data into "
    "the MPEG stream\n");
  return 0;
 }


 if (VAR_14->vbi.sliced_mpeg_data[0] == ((void*)0)) {
  int VAR_17;

  for (VAR_17 = 0; VAR_17 < VAR_1; VAR_17++) {
   VAR_14->vbi.sliced_mpeg_data[VAR_17] =
          FUNC_6(VAR_0, VAR_5);
   if (VAR_14->vbi.sliced_mpeg_data[VAR_17] == ((void*)0)) {
    while (--VAR_17 >= 0) {
     FUNC_5(VAR_14->vbi.sliced_mpeg_data[VAR_17]);
     VAR_14->vbi.sliced_mpeg_data[VAR_17] = ((void*)0);
    }
    VAR_14->vbi.insert_mpeg =
        VAR_11;
    FUNC_1("Unable to allocate buffers for "
       "sliced VBI data insertion\n");
    return -VAR_4;
   }
  }
 }

 VAR_14->vbi.insert_mpeg = VAR_15;
 FUNC_0("enabled insertion of sliced VBI data into the MPEG PS,"
   "when sliced VBI is enabled\n");





 if (FUNC_4(VAR_14->vbi.sliced_in) == 0) {
  if (VAR_14->is_60hz)
   VAR_14->vbi.sliced_in->service_set =
       VAR_12;
  else
   VAR_14->vbi.sliced_in->service_set = VAR_13;
  FUNC_3(VAR_14->vbi.sliced_in, VAR_14->is_50hz);
 }
 return 0;
}
