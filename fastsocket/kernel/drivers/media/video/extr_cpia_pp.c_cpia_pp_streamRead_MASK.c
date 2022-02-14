
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct pp_cam_entry {int image_complete; int port; int image_ready; int wq_stream; scalar_t__ stream_irq; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct pp_cam_entry*) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct pp_cam_entry*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,scalar_t__*,int) ;
 int VAR_7 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(void *VAR_8, u8 *VAR_9, int VAR_10)
{
 struct pp_cam_entry *VAR_11 = VAR_8;
 int VAR_12 = 0;
 int VAR_13, VAR_14, VAR_15, VAR_16;

 if(VAR_11 == ((void*)0)) {
  FUNC_0("Internal driver error: cam is NULL\n");
  return -VAR_2;
 }
 if(VAR_9 == ((void*)0)) {
  FUNC_0("Internal driver error: buffer is NULL\n");
  return -VAR_2;
 }

 if( VAR_11->stream_irq ) {
  FUNC_0("%d\n", VAR_11->image_ready);
  VAR_11->image_ready--;
 }
 VAR_11->image_complete=0;
 if (0 ) {
  if(!VAR_11->image_ready) {
   if(VAR_10) return -VAR_5;
   FUNC_5(&VAR_11->wq_stream);
   if( FUNC_6(VAR_7) ) return -VAR_1;
   FUNC_0("%d\n", VAR_11->image_ready);
  }
 } else {
  if (FUNC_2(VAR_11, 1)) {
   FUNC_0("unable to ReverseSetup\n");
   return -VAR_3;
  }
 }
 VAR_14 = 0;
 VAR_15 = VAR_6;
 while( !VAR_11->image_complete ) {
  FUNC_3();

  VAR_16 = FUNC_4(VAR_11->port, VAR_9, VAR_15 );
  if( VAR_16 <= 0 ) {
   break;
  }
  VAR_13=-1;
  while(++VAR_13<VAR_16 && VAR_14<4) {
   if(*VAR_9==VAR_4) {
    VAR_14++;
   } else {
    VAR_14=0;
   }
   VAR_9++;
  }
  VAR_12 += VAR_13;
  if( VAR_14==4 ) {
   VAR_11->image_complete=1;
   break;
  }
  if( VAR_0-VAR_12 <= VAR_6 ) {
   VAR_15=VAR_0-VAR_12;
  }
 }
 FUNC_1(VAR_11);
 return VAR_11->image_complete ? VAR_12 : -VAR_3;
}
