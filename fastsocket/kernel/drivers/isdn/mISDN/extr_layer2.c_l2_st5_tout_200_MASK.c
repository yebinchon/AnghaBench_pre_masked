
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct layer2 {scalar_t__ rc; scalar_t__ N200; int flag; int T200; int t200; scalar_t__ tm; int i_queue; } ;
struct FsmInst {struct layer2* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct layer2*) ;
 int FUNC_1 (struct layer2*,int ,int ) ;
 int FUNC_2 (struct layer2*,int ,int ,int ,int *) ;
 int FUNC_3 (struct layer2*,int ,void*) ;
 int FUNC_4 (int *,int ,int ,int *,int) ;
 int FUNC_5 (struct FsmInst*,int ) ;
 int FUNC_6 (struct layer2*,int *,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct layer2*) ;
 int FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;

__attribute__((used)) static void
FUNC_11(struct FsmInst *VAR_13, int VAR_14, void *VAR_15)
{
 struct layer2 *VAR_16 = VAR_13->userdata;

 if (FUNC_10(VAR_4, &VAR_16->flag) &&
  FUNC_10(VAR_2, &VAR_16->flag)) {
  FUNC_4(&VAR_16->t200, VAR_16->T200, VAR_1, ((void*)0), 9);
 } else if (VAR_16->rc == VAR_16->N200) {
  FUNC_5(VAR_13, VAR_12);
  FUNC_9(VAR_6, &VAR_16->flag);
  FUNC_7(&VAR_16->i_queue);
  FUNC_3(VAR_16, VAR_7, (void *) 'G');
  if (FUNC_10(VAR_3, &VAR_16->flag))
   FUNC_2(VAR_16, VAR_9,
    FUNC_0(VAR_16), 0, ((void*)0));
  FUNC_8(VAR_16);
  if (VAR_16->tm)
   FUNC_1(VAR_16, VAR_8, 0);
 } else {
  VAR_16->rc++;
  FUNC_4(&VAR_16->t200, VAR_16->T200, VAR_1, ((void*)0), 9);
  FUNC_6(VAR_16, ((void*)0), (FUNC_10(VAR_5, &VAR_16->flag) ?
   VAR_11 : VAR_10) | 0x10, VAR_0);
 }
}
