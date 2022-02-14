
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcom_task {struct bcom_fec_priv* priv; int flags; } ;
struct bcom_fec_priv {int fifo; } ;
struct bcom_fec_bd {int dummy; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bcom_task*) ;
 struct bcom_task* FUNC_1 (int,int,int) ;
 int FUNC_2 (struct bcom_task*) ;

struct bcom_task *
FUNC_3(int VAR_1, phys_addr_t VAR_2)
{
 struct bcom_task *VAR_3;
 struct bcom_fec_priv *VAR_4;

 VAR_3 = FUNC_1(VAR_1, sizeof(struct bcom_fec_bd),
    sizeof(struct bcom_fec_priv));
 if (!VAR_3)
  return ((void*)0);

 VAR_3->flags = VAR_0;

 VAR_4 = VAR_3->priv;
 VAR_4->fifo = VAR_2;

 if (FUNC_0(VAR_3)) {
  FUNC_2(VAR_3);
  return ((void*)0);
 }

 return VAR_3;
}
