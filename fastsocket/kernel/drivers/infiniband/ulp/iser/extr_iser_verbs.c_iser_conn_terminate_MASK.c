
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iser_conn {scalar_t__ state; int wait; int cma_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iser_conn*,int) ;
 int FUNC_1 (struct iser_conn*,int ,int ) ;
 int FUNC_2 (char*,struct iser_conn*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

void FUNC_5(struct iser_conn *VAR_3)
{
 int VAR_4 = 0;






 FUNC_1(VAR_3, VAR_2, VAR_1);
 VAR_4 = FUNC_3(VAR_3->cma_id);
 if (VAR_4)
  FUNC_2("Failed to disconnect, conn: 0x%p err %d\n",
    VAR_3,VAR_4);

 FUNC_4(VAR_3->wait,
     VAR_3->state == VAR_0);

 FUNC_0(VAR_3, 1);
}
