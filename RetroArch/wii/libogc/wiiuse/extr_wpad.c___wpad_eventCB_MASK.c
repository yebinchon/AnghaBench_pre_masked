
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wiimote_t {int unid; } ;
struct _wpad_cb {int queue_length; size_t queue_tail; int queue_full; int queue_head; int idle_time; int * queue_int; int lstate; int * queue_ext; struct wiimote_t* wm; int speaker_enabled; int thresh; int dropped_events; } ;
typedef int s32 ;
typedef int WPADData ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int FUNC_2 (struct wiimote_t*,int *,int*,int *) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 struct _wpad_cb* VAR_5 ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (struct wiimote_t*,int) ;
 int FUNC_6 (struct wiimote_t*,int ) ;
 int FUNC_7 (struct wiimote_t*,int,int *) ;
 int FUNC_8 (struct wiimote_t*,int ) ;
 int * VAR_6 ;

__attribute__((used)) static void FUNC_9(struct wiimote_t *VAR_7,s32 VAR_8)
{
 s32 VAR_9;
 u32 VAR_10;
 WPADData *VAR_11 = ((void*)0);
 struct _wpad_cb *VAR_12 = ((void*)0);

 switch(VAR_8) {
  case 129:
   VAR_9 = VAR_7->unid;
   VAR_12 = &VAR_5[VAR_9];
         {
    VAR_10 = VAR_0;
    VAR_11 = &(VAR_12->queue_int[VAR_12->queue_tail]);
   }
   if(VAR_12->queue_full == VAR_10) {
    VAR_12->queue_head++;
    VAR_12->queue_head %= VAR_10;
    VAR_12->dropped_events++;
   } else {
    VAR_12->queue_full++;
   }

   FUNC_2(VAR_7, VAR_11, &VAR_12->idle_time, &VAR_12->thresh);

   VAR_12->queue_tail++;
   VAR_12->queue_tail %= VAR_10;

   break;
  case 128:
   break;
  case 131:
   VAR_9 = VAR_7->unid;
   VAR_12 = &VAR_5[VAR_9];
   VAR_12->wm = VAR_7;
   VAR_12->queue_head = 0;
   VAR_12->queue_tail = 0;
   VAR_12->queue_full = 0;
   VAR_12->idle_time = 0;
   FUNC_4(&VAR_12->lstate,0,sizeof(WPADData));
   FUNC_4(&VAR_6[VAR_9],0,sizeof(WPADData));
   FUNC_4(VAR_12->queue_int,0,(sizeof(WPADData)*VAR_0));
   FUNC_5(VAR_7,(FUNC_1()^1));
   FUNC_6(VAR_7,FUNC_0());
   FUNC_7(VAR_7,(VAR_1<<(VAR_9%VAR_2)),((void*)0));



   FUNC_3(VAR_9);
   VAR_3 |= (0x01<<VAR_9);
   break;
  case 130:
   VAR_9 = VAR_7->unid;
   VAR_12 = &VAR_5[VAR_9];
   VAR_12->wm = VAR_7;
   VAR_12->queue_head = 0;
   VAR_12->queue_tail = 0;
   VAR_12->queue_full = 0;
   VAR_12->queue_length = 0;



   VAR_12->idle_time = -1;
   FUNC_4(&VAR_12->lstate,0,sizeof(WPADData));
   FUNC_4(&VAR_6[VAR_9],0,sizeof(WPADData));
   FUNC_4(VAR_12->queue_int,0,(sizeof(WPADData)*VAR_0));
   VAR_3 &= ~(0x01<<VAR_9);
   VAR_4 &= ~(0x01<<VAR_9);
   break;
  default:
   break;
 }
}
