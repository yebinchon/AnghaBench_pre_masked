
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u16 ;
struct pcap_ts {int read_state; TYPE_1__* input; int work; void* pressure; void* y; void* x; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;

 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (TYPE_1__*,int ,void*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(void *VAR_12, u16 VAR_13[2])
{
 struct pcap_ts *VAR_14 = VAR_12;

 switch (VAR_14->read_state) {
 case 129:

  if (VAR_13[0] > VAR_6 && VAR_13[0] < VAR_5)
   VAR_14->pressure = VAR_13[0];
  VAR_14->read_state = 128;
  FUNC_5(&VAR_14->work, 0);
  break;
 case 128:
  VAR_14->y = VAR_13[0];
  VAR_14->x = VAR_13[1];
  if (VAR_14->x <= VAR_9 || VAR_14->x >= VAR_8 ||
      VAR_14->y <= VAR_11 || VAR_14->y >= VAR_10) {

   FUNC_1(VAR_14->input, VAR_0, 0);
   FUNC_2(VAR_14->input, VAR_3, 0);

   VAR_14->read_state = VAR_4;
   FUNC_5(&VAR_14->work, 0);
  } else {

   FUNC_1(VAR_14->input, VAR_1, VAR_14->x);
   FUNC_1(VAR_14->input, VAR_2, VAR_14->y);
   FUNC_2(VAR_14->input, VAR_3, 1);
   FUNC_1(VAR_14->input, VAR_0,
      VAR_14->pressure);


   VAR_14->read_state = 129;
   FUNC_5(&VAR_14->work,
     FUNC_4(VAR_7));
  }
  FUNC_3(VAR_14->input);
  break;
 default:
  FUNC_0(&VAR_14->input->dev,
    "pcap_ts: Warning, unhandled read_state %d\n",
    VAR_14->read_state);
  break;
 }
}
