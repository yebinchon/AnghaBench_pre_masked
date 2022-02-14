
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ivtv_stream {int s_flags; int name; int * vdev; struct ivtv* itv; } ;
struct TYPE_4__ {TYPE_1__* mbox; } ;
struct ivtv {int decoding; int irqmask; TYPE_2__ dec_mbox; } ;
struct TYPE_3__ {int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct ivtv*,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (struct ivtv_stream*) ;
 int FUNC_7 (struct ivtv*,int ,int,int,...) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int *) ;

int FUNC_10(struct ivtv_stream *VAR_10, int VAR_11)
{
 struct ivtv *VAR_12 = VAR_10->itv;
 int VAR_13;

 if (VAR_10->vdev == ((void*)0))
  return -VAR_3;

 if (FUNC_8(VAR_4, &VAR_10->s_flags))
  return 0;

 FUNC_0("Starting decode stream %s (gop_offset %d)\n", VAR_10->name, VAR_11);

 VAR_13 = FUNC_6(VAR_10);
 if (VAR_13 < 0) {
  FUNC_3(VAR_4, &VAR_10->s_flags);
  return VAR_13;
 }


 FUNC_7(VAR_12, VAR_0, 1, 65536);


 FUNC_3(VAR_5, &VAR_10->s_flags);


 FUNC_9(0, &VAR_12->dec_mbox.mbox[VAR_9].data[0]);
 FUNC_9(0, &VAR_12->dec_mbox.mbox[VAR_9].data[1]);
 FUNC_9(0, &VAR_12->dec_mbox.mbox[VAR_9].data[2]);
 FUNC_9(0, &VAR_12->dec_mbox.mbox[VAR_9].data[3]);
 FUNC_9(0, &VAR_12->dec_mbox.mbox[VAR_8].data[0]);
 FUNC_9(0, &VAR_12->dec_mbox.mbox[VAR_8].data[1]);
 FUNC_9(0, &VAR_12->dec_mbox.mbox[VAR_8].data[2]);
 FUNC_9(0, &VAR_12->dec_mbox.mbox[VAR_8].data[3]);


 FUNC_7(VAR_12, VAR_1, 4, 0, 1, VAR_6, -1);


 FUNC_7(VAR_12, VAR_2, 2, VAR_11, 0);


 FUNC_5(10, 0);


 FUNC_4(VAR_12, VAR_7);
 FUNC_1("IRQ Mask is now: 0x%08x\n", VAR_12->irqmask);


 FUNC_2(&VAR_12->decoding);
 return 0;
}
