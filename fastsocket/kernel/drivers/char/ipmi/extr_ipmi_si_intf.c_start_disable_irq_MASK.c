
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smi_info {int si_state; int si_sm; TYPE_1__* handlers; } ;
struct TYPE_2__ {int (* start_transaction ) (int ,unsigned char*,int) ;} ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,unsigned char*,int) ;

__attribute__((used)) static void FUNC_1(struct smi_info *VAR_3)
{
 unsigned char VAR_4[2];

 VAR_4[0] = (VAR_1 << 2);
 VAR_4[1] = VAR_0;

 VAR_3->handlers->start_transaction(VAR_3->si_sm, VAR_4, 2);
 VAR_3->si_state = VAR_2;
}
