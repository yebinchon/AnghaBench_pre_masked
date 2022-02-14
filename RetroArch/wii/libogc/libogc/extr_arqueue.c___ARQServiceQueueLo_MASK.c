
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ len; int mram_addr; int aram_addr; int dir; int callback; int state; } ;
typedef TYPE_1__ ARQRequest ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2()
{
 ARQRequest *VAR_5;

 if(!VAR_3) {
  VAR_5 = (ARQRequest*)FUNC_1(&VAR_4);
  VAR_3 = VAR_5;
 }

 VAR_5 = VAR_3;
 if(VAR_5) {
  VAR_5->state = VAR_0;
  if(VAR_5->len<=VAR_2) {
   FUNC_0(VAR_5->dir,VAR_5->mram_addr,VAR_5->aram_addr,VAR_5->len);
   VAR_1 = VAR_3->callback;
  } else {
   FUNC_0(VAR_5->dir,VAR_5->mram_addr,VAR_5->aram_addr,VAR_2);
   VAR_3->len -= VAR_2;
   VAR_3->aram_addr += VAR_2;
   VAR_3->mram_addr += VAR_2;
  }
 }
}
