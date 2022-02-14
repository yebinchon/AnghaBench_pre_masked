
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct bd_addr {int dummy; } ;
struct TYPE_4__ {int num_registered; TYPE_1__* registered; } ;
struct TYPE_3__ {int * bdaddr; } ;


 int FUNC_0 (struct bd_addr*,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 TYPE_2__ VAR_3 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (struct bd_addr*,struct bd_addr*) ;

void FUNC_4(struct bd_addr *VAR_5, u8 VAR_6)
{
 struct bd_addr VAR_7;
 int VAR_8;

 if(VAR_4 == VAR_2) {
        for(VAR_8=0;VAR_8<VAR_3.num_registered;VAR_8++) {
            FUNC_0(&(VAR_7),VAR_3.registered[VAR_8].bdaddr[5],VAR_3.registered[VAR_8].bdaddr[4],VAR_3.registered[VAR_8].bdaddr[3],VAR_3.registered[VAR_8].bdaddr[2],VAR_3.registered[VAR_8].bdaddr[1],VAR_3.registered[VAR_8].bdaddr[0]);
   if(FUNC_3(VAR_5,&VAR_7)) {
    if(VAR_6 == VAR_0) {
     if(&FUNC_1) FUNC_1(VAR_8);
    } else if(VAR_6 == VAR_1)
     FUNC_2(VAR_8);
    break;
   }
  }
 }
}
