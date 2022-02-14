
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_4__* mb_free; } ;
struct TYPE_8__ {TYPE_1__ mbuf_pool; } ;
struct TYPE_9__ {TYPE_2__ hwm; } ;
struct s_smc {TYPE_3__ os; } ;
struct TYPE_10__ {int sm_off; int sm_use_count; struct TYPE_10__* sm_next; } ;
typedef TYPE_4__ SMbuf ;


 int FUNC_0 (char*,void*,int ,int) ;
 TYPE_4__* VAR_0 ;

SMbuf *FUNC_1(struct s_smc *VAR_1)
{
 register SMbuf *VAR_2 ;


 VAR_2 = VAR_1->os.hwm.mbuf_pool.mb_free ;



 if (VAR_2) {

  VAR_1->os.hwm.mbuf_pool.mb_free = VAR_2->sm_next ;



  VAR_2->sm_off = 8 ;
  VAR_2->sm_use_count = 1 ;
 }
 FUNC_0("get SMbuf: mb = %x",(void *)VAR_2,0,3) ;
 return (VAR_2) ;
}
