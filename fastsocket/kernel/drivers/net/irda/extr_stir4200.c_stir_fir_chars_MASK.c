
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int state; int* data; int* head; scalar_t__ len; scalar_t__ truesize; void* in_frame; } ;
struct stir_cb {TYPE_2__* netdev; TYPE_3__ rx_buff; } ;
typedef TYPE_3__ iobuff_t ;
typedef int __u8 ;
struct TYPE_4__ {int rx_errors; int rx_frame_errors; int rx_over_errors; } ;
struct TYPE_5__ {TYPE_1__ stats; int name; } ;



 void* VAR_0 ;




 int VAR_1 ;


 void* VAR_2 ;
 int FUNC_0 (struct stir_cb*) ;
 int FUNC_1 (char*,int ,...) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct stir_cb *VAR_3,
       const __u8 *VAR_4, int VAR_5)
{
 iobuff_t *VAR_6 = &VAR_3->rx_buff;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  __u8 VAR_8 = VAR_4[VAR_7];

  switch(VAR_6->state) {
  case 128:

   if (FUNC_2(VAR_8 != 132))
    continue;

   VAR_6->state = 134;


   VAR_6->data = VAR_6->head;
   VAR_6->len = 0;
   continue;

  case 129:
   if (VAR_8 == 132) {
    FUNC_1("%s: got EOF after escape\n",
      VAR_3->netdev->name);
    goto frame_error;
   }
   VAR_6->state = 130;
   VAR_8 ^= VAR_1;
   break;

  case 134:

   if (VAR_8 == 132)
    continue;
   VAR_6->state = 130;
   VAR_6->in_frame = VAR_2;


  case 130:
   switch(VAR_8) {
   case 133:
    VAR_6->state = 129;
    continue;
   case 131:

    FUNC_1("%s: got XBOF without escape\n",
      VAR_3->netdev->name);
    goto frame_error;
   case 132:
    VAR_6->state = 128;
    VAR_6->in_frame = VAR_0;
    FUNC_0(VAR_3);
    continue;
   }
   break;
  }


  if (FUNC_2(VAR_6->len >= VAR_6->truesize)) {
   FUNC_1("%s: fir frame exceeds %d\n",
     VAR_3->netdev->name, VAR_6->truesize);
   ++VAR_3->netdev->stats.rx_over_errors;
   goto error_recovery;
  }

  VAR_6->data[VAR_6->len++] = VAR_8;
  continue;

 frame_error:
  ++VAR_3->netdev->stats.rx_frame_errors;

 error_recovery:
  ++VAR_3->netdev->stats.rx_errors;
  VAR_6->state = 128;
  VAR_6->in_frame = VAR_0;
 }
}
