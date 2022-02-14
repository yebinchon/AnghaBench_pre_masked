
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct hpsb_packet {int tlabel; TYPE_2__* host; int node_id; } ;
struct TYPE_4__ {int* next_tl; TYPE_1__* tl_pool; } ;
struct TYPE_3__ {unsigned long* map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,unsigned long*) ;
 int FUNC_2 (unsigned long*,int) ;
 int FUNC_3 (unsigned long*,int,int) ;
 int VAR_2 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct hpsb_packet *VAR_3)
{
 unsigned long VAR_4, *VAR_5;
 u8 *VAR_6;
 int VAR_7, VAR_8 = FUNC_0(VAR_3->node_id);



 if (FUNC_6(VAR_8 == VAR_0)) {
  VAR_3->tlabel = 0;
  return 0;
 }
 VAR_5 = VAR_3->host->tl_pool[VAR_8].map;
 VAR_6 = &VAR_3->host->next_tl[VAR_8];

 FUNC_4(&VAR_2, VAR_4);
 VAR_7 = FUNC_3(VAR_5, 64, *VAR_6);
 if (VAR_7 > 63)
  VAR_7 = FUNC_2(VAR_5, 64);
 if (VAR_7 > 63) {
  FUNC_5(&VAR_2, VAR_4);
  return -VAR_1;
 }
 FUNC_1(VAR_7, VAR_5);
 *VAR_6 = (VAR_7 + 1) & 63;
 FUNC_5(&VAR_2, VAR_4);

 VAR_3->tlabel = VAR_7;
 return 0;
}
