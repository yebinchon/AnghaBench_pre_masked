
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_14__ {int cnt; size_t rix; TYPE_6__* ri; TYPE_2__* rr; } ;
struct TYPE_10__ {int ampdu; int erp_prot; } ;
struct TYPE_8__ {scalar_t__ set; } ;
struct TYPE_11__ {TYPE_3__ mac; TYPE_1__ phy; } ;
struct TYPE_12__ {TYPE_4__ hdr; } ;
struct carl9170_tx_superframe {TYPE_7__ s; TYPE_5__ f; } ;
struct TYPE_13__ {int tries; int ampdu; int erp_prot; } ;
struct TYPE_9__ {scalar_t__ set; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static bool FUNC_1(struct carl9170_tx_superframe *VAR_1)
{

 if (FUNC_0(VAR_1->s.cnt >= VAR_1->s.ri[VAR_1->s.rix].tries)) {

  if (FUNC_0(VAR_1->s.rix == VAR_0))
   return 0;


  if (!VAR_1->s.rr[VAR_1->s.rix].set)
   return 0;


  VAR_1->f.hdr.phy.set = VAR_1->s.rr[VAR_1->s.rix].set;


  VAR_1->s.rix++;


  VAR_1->f.hdr.mac.erp_prot = VAR_1->s.ri[VAR_1->s.rix].erp_prot;
  VAR_1->f.hdr.mac.ampdu = VAR_1->s.ri[VAR_1->s.rix].ampdu;


  VAR_1->s.cnt = 1;
 } else {

  VAR_1->s.cnt++;
 }

 return 1;
}
