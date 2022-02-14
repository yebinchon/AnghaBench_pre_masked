
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timespec {int tv_sec; int tv_nsec; } ;
struct TYPE_3__ {int* cmd; int sector_size; int timeout_svc; } ;
typedef TYPE_1__ card_block ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct timespec*,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(card_block *VAR_2)
{
 struct timespec VAR_3;
 FUNC_0(VAR_2->timeout_svc);

 if(VAR_2->cmd[0]==0xf1 || VAR_2->cmd[0]==0xf4) {
  VAR_3.tv_sec = 1*(VAR_2->sector_size/8192);
  VAR_3.tv_nsec = 0;
  FUNC_1(VAR_2->timeout_svc,&VAR_3,VAR_1,((void*)0));
 } else if(VAR_2->cmd[0]==0xf2) {
  VAR_3.tv_sec = 0;
  VAR_3.tv_nsec = 100*VAR_0;
  FUNC_1(VAR_2->timeout_svc,&VAR_3,VAR_1,((void*)0));
 }
}
