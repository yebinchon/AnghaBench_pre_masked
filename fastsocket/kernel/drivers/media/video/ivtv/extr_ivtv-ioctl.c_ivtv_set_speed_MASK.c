
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ivtv_stream {int dummy; } ;
struct TYPE_2__ {int video_b_frames; } ;
struct ivtv {int speed; int speed_mute_audio; int dma_waitq; int i_flags; int decoding; TYPE_1__ cxhdl; struct ivtv_stream* streams; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (char*,int,int,int,int,int,int,int) ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_8 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct ivtv*,int ,int,int*) ;
 int FUNC_5 (struct ivtv*,int ,int,int ) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 int FUNC_10 (int ) ;
 int VAR_9 ;

int FUNC_11(struct ivtv *VAR_10, int VAR_11)
{
 u32 VAR_12[VAR_3];
 struct ivtv_stream *VAR_13;
 int VAR_14 = (VAR_11 == 1 || VAR_11 == -1);
 FUNC_0(VAR_9);

 if (VAR_11 == 0) VAR_11 = 1000;


 if (VAR_11 == VAR_10->speed && !VAR_14)
  return 0;

 VAR_13 = &VAR_10->streams[VAR_5];

 if (VAR_14 && (VAR_11 < 0) == (VAR_10->speed < 0)) {

  FUNC_5(VAR_10, VAR_2, 1, 0);
  VAR_10->speed = VAR_11;
  return 0;
 }
 if (VAR_14)

  VAR_11 = VAR_11 < 0 ? -1000 : 1000;

 VAR_12[0] = (VAR_11 > 1000 || VAR_11 < -1000) ? 0x80000000 : 0;
 VAR_12[0] |= (VAR_11 > 1000 || VAR_11 < -1500) ? 0x40000000 : 0;
 VAR_12[1] = (VAR_11 < 0);
 VAR_12[2] = VAR_11 < 0 ? 3 : 7;
 VAR_12[3] = FUNC_10(VAR_10->cxhdl.video_b_frames);
 VAR_12[4] = (VAR_11 == 1500 || VAR_11 == 500) ? VAR_10->speed_mute_audio : 0;
 VAR_12[5] = 0;
 VAR_12[6] = 0;

 if (VAR_11 == 1500 || VAR_11 == -1500) VAR_12[0] |= 1;
 else if (VAR_11 == 2000 || VAR_11 == -2000) VAR_12[0] |= 2;
 else if (VAR_11 > -1000 && VAR_11 < 0) VAR_12[0] |= (-1000 / VAR_11);
 else if (VAR_11 < 1000 && VAR_11 > 0) VAR_12[0] |= (1000 / VAR_11);


 if (FUNC_2(&VAR_10->decoding) > 0) {
  int VAR_15 = 0;


  FUNC_5(VAR_10, VAR_0, 1, 0);


  FUNC_6(&VAR_10->dma_waitq, &VAR_9, VAR_7);
  while (FUNC_9(VAR_6, &VAR_10->i_flags)) {
   VAR_15 = FUNC_8(VAR_8);
   if (VAR_15)
    break;
   VAR_15 = 0;
   FUNC_7();
  }
  FUNC_3(&VAR_10->dma_waitq, &VAR_9);
  if (VAR_15)
   return -VAR_4;


  FUNC_4(VAR_10, VAR_1, 7, VAR_12);
  FUNC_1("Setting Speed to 0x%08x 0x%08x 0x%08x 0x%08x 0x%08x 0x%08x 0x%08x\n",
    VAR_12[0], VAR_12[1], VAR_12[2], VAR_12[3], VAR_12[4], VAR_12[5], VAR_12[6]);
 }
 if (VAR_14) {
  VAR_11 = (VAR_11 < 0) ? -1 : 1;
  FUNC_5(VAR_10, VAR_2, 1, 0);
 }
 VAR_10->speed = VAR_11;
 return 0;
}
