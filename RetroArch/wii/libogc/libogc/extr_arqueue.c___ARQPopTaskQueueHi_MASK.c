
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int callback; int len; int aram_addr; int mram_addr; int dir; int state; } ;
typedef TYPE_1__ ARQRequest ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static __inline__ void FUNC_2()
{
 ARQRequest *VAR_4;

 VAR_4 = (ARQRequest*)FUNC_1(&VAR_3);
 if(!VAR_4) return;

 VAR_4->state = VAR_0;
 FUNC_0(VAR_4->dir,VAR_4->mram_addr,VAR_4->aram_addr,VAR_4->len);
 VAR_1 = VAR_4->callback;
 VAR_2 = VAR_4;
}
