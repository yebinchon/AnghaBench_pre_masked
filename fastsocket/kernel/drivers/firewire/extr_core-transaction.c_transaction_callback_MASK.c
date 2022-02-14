
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transaction_callback_data {int rcode; int done; int payload; } ;
struct fw_card {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,void*,size_t) ;

__attribute__((used)) static void FUNC_2(struct fw_card *VAR_1, int VAR_2,
     void *VAR_3, size_t VAR_4, void *VAR_5)
{
 struct transaction_callback_data *VAR_6 = VAR_5;

 if (VAR_2 == VAR_0)
  FUNC_1(VAR_6->payload, VAR_3, VAR_4);
 VAR_6->rcode = VAR_2;
 FUNC_0(&VAR_6->done);
}
