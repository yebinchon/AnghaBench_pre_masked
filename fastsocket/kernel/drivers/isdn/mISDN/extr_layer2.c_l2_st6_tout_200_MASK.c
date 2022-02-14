
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct layer2 {scalar_t__ rc; scalar_t__ N200; int T200; int t200; scalar_t__ tm; int flag; } ;
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
 int FUNC_0 (struct layer2*,int ,int ) ;
 int FUNC_1 (struct layer2*,int ,void*) ;
 int FUNC_2 (struct layer2*,int ) ;
 int FUNC_3 (int *,int ,int ,int *,int) ;
 int FUNC_4 (struct FsmInst*,int ) ;
 int FUNC_5 (struct layer2*,int *,int,int ) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static void
FUNC_8(struct FsmInst *VAR_10, int VAR_11, void *VAR_12)
{
 struct layer2 *VAR_13 = VAR_10->userdata;

 if (FUNC_7(VAR_5, &VAR_13->flag) &&
  FUNC_7(VAR_4, &VAR_13->flag)) {
  FUNC_3(&VAR_13->t200, VAR_13->T200, VAR_3, ((void*)0), 9);
 } else if (VAR_13->rc == VAR_13->N200) {
  FUNC_4(VAR_10, VAR_9);
  FUNC_6(VAR_6, &VAR_13->flag);
  FUNC_1(VAR_13, VAR_7, (void *) 'H');
  FUNC_2(VAR_13, VAR_2);
  if (VAR_13->tm)
   FUNC_0(VAR_13, VAR_8, 0);
 } else {
  VAR_13->rc++;
  FUNC_3(&VAR_13->t200, VAR_13->T200, VAR_3,
       ((void*)0), 9);
  FUNC_5(VAR_13, ((void*)0), VAR_1 | 0x10, VAR_0);
 }
}
