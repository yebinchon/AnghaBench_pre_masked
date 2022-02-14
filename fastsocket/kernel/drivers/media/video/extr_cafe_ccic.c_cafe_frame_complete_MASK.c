
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cafe_camera {int next_buf; int state; int s_tasklet; int iowait; int nbufs; int specframes; scalar_t__ sequence; scalar_t__* buf_seq; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct cafe_camera*) ;
 int FUNC_1 (struct cafe_camera*) ;
 int FUNC_2 (struct cafe_camera*,char*,...) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int,int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct cafe_camera *VAR_2, int VAR_3)
{



 if (FUNC_7(VAR_3, &VAR_2->flags) && FUNC_4())
  FUNC_2(VAR_2, "Frame overrun on %d, frames lost\n", VAR_3);
 FUNC_5(VAR_3, &VAR_2->flags);
 FUNC_3(VAR_0, &VAR_2->flags);
 if (VAR_2->next_buf < 0)
  VAR_2->next_buf = VAR_3;
 VAR_2->buf_seq[VAR_3] = ++(VAR_2->sequence);

 switch (VAR_2->state) {



     case 130:
  VAR_2->state = 129;
  VAR_2->specframes = 0;
  FUNC_8(&VAR_2->iowait);
  break;





     case 129:
  if (++(VAR_2->specframes) >= VAR_2->nbufs) {
   FUNC_1(VAR_2);
   FUNC_0(VAR_2);
   VAR_2->state = VAR_1;
  }
  FUNC_8(&VAR_2->iowait);
  break;
     case 128:
  FUNC_6(&VAR_2->s_tasklet);
  break;

     default:
  FUNC_2(VAR_2, "Frame interrupt in non-operational state\n");
  break;
 }
}
