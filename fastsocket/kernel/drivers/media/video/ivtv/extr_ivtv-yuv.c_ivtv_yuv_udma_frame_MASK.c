
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ivtv_dma_frame {int dummy; } ;
struct TYPE_2__ {int lock; } ;
struct ivtv {TYPE_1__ udma; int dma_waitq; int i_flags; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct ivtv*) ;
 int FUNC_4 (struct ivtv*) ;
 int FUNC_5 (struct ivtv*) ;
 int FUNC_6 (struct ivtv*,TYPE_1__*,struct ivtv_dma_frame*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int ) ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (int ,int *) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_14(struct ivtv *VAR_6, struct ivtv_dma_frame *VAR_7)
{
 FUNC_0(VAR_5);
 int VAR_8 = 0;
 int VAR_9 = 0;

 FUNC_7(&VAR_6->udma.lock);

 if ((VAR_8 = FUNC_6(VAR_6, &VAR_6->udma, VAR_7)) != 0) {
  FUNC_8(&VAR_6->udma.lock);
  return VAR_8;
 }

 FUNC_3(VAR_6);
 FUNC_9(&VAR_6->dma_waitq, &VAR_5, VAR_3);


 while (FUNC_13(VAR_2, &VAR_6->i_flags) ||
        FUNC_13(VAR_1, &VAR_6->i_flags)) {


  VAR_9 = FUNC_11(VAR_4);
  if (VAR_9 && FUNC_12(VAR_2, &VAR_6->i_flags))
   break;
  VAR_9 = 0;
  FUNC_10();
 }
 FUNC_2(&VAR_6->dma_waitq, &VAR_5);


 FUNC_4(VAR_6);

 if (VAR_9) {
  FUNC_1("User stopped YUV UDMA\n");
  FUNC_8(&VAR_6->udma.lock);
  return -VAR_0;
 }

 FUNC_5(VAR_6);

 FUNC_8(&VAR_6->udma.lock);
 return VAR_8;
}
