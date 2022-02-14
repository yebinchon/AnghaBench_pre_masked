
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct llinfo_arp {int la_holdq; scalar_t__ la_prbreq_cnt; } ;
struct TYPE_2__ {int held; int purged; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static uint32_t
FUNC_5(struct llinfo_arp *VAR_1)
{
 uint32_t VAR_2 = FUNC_4(&VAR_1->la_holdq);

 if (VAR_2 != 0) {
  FUNC_2(&VAR_0.purged, VAR_2);
  FUNC_2(&VAR_0.held, -VAR_2);
  FUNC_1(&VAR_1->la_holdq);
 }
 VAR_1->la_prbreq_cnt = 0;
 FUNC_0(FUNC_3(&VAR_1->la_holdq));
 return (VAR_2);
}
