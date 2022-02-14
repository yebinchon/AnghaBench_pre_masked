
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsb_packet {int no_waiter; int generation; } ;
struct hpsb_host {int id; int node_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct hpsb_host*) ;
 struct hpsb_packet* FUNC_3 (struct hpsb_host*,int) ;
 int FUNC_4 (struct hpsb_packet*) ;

__attribute__((used)) static int FUNC_5(struct hpsb_host *VAR_3)
{
 struct hpsb_packet *VAR_4;
 int VAR_5 = -VAR_0;

 VAR_4 = FUNC_3(VAR_3,
   VAR_1 |
   FUNC_1(VAR_3->node_id) << VAR_2);
 if (VAR_4) {
  VAR_4->no_waiter = 1;
  VAR_4->generation = FUNC_2(VAR_3);
  VAR_5 = FUNC_4(VAR_4);
 }
 if (VAR_5)
  FUNC_0("fw-host%d: Failed to broadcast resume packet",
     VAR_3->id);
 return VAR_5;
}
