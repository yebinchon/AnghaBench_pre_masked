
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcom_task {struct bcom_gen_bd_priv* priv; int flags; } ;
struct bcom_gen_bd_priv {int initiator; int ipr; int fifo; } ;
struct bcom_gen_bd {int dummy; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bcom_task*) ;
 struct bcom_task* FUNC_1 (int,int,int) ;
 int FUNC_2 (struct bcom_task*) ;

extern struct bcom_task *
FUNC_3(int VAR_1, phys_addr_t VAR_2,
   int VAR_3, int VAR_4)
{
 struct bcom_task *VAR_5;
 struct bcom_gen_bd_priv *VAR_6;

 VAR_5 = FUNC_1(VAR_1, sizeof(struct bcom_gen_bd),
   sizeof(struct bcom_gen_bd_priv));
 if (!VAR_5)
  return ((void*)0);

 VAR_5->flags = VAR_0;

 VAR_6 = VAR_5->priv;
 VAR_6->fifo = VAR_2;
 VAR_6->initiator = VAR_3;
 VAR_6->ipr = VAR_4;

 if (FUNC_0(VAR_5)) {
  FUNC_2(VAR_5);
  return ((void*)0);
 }

 return VAR_5;
}
