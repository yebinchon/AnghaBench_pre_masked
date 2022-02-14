
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int broadcast_channel; } ;
struct hpsb_host {scalar_t__ irm_id; int busmgr_id; int node_count; int resume_packet_sent; int node_id; scalar_t__ is_cycmst; TYPE_1__ csr; int is_irm; } ;
typedef int quadlet_t ;
typedef scalar_t__ nodeid_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct hpsb_host*) ;
 int FUNC_4 (struct hpsb_host*,int,int ,scalar_t__,int *,int) ;
 int FUNC_5 (struct hpsb_host*,int ) ;
 int FUNC_6 (struct hpsb_host*,int,int) ;
 int FUNC_7 (struct hpsb_host*) ;

__attribute__((used)) static int FUNC_8(struct hpsb_host *VAR_5, int VAR_6)
{
 quadlet_t VAR_7;


 if (!VAR_5->is_irm || VAR_5->irm_id == (nodeid_t)-1)
  return 1;


 VAR_5->csr.broadcast_channel |= 0x40000000;




 if (VAR_5->busmgr_id == 0xffff && VAR_5->node_count > 1)
 {
  u16 VAR_8 = VAR_5->node_count - 1;


  if (VAR_5->is_cycmst ||
      (!FUNC_4(VAR_5, VAR_3 | VAR_8, FUNC_3(VAR_5),
    (VAR_2 + VAR_1 + 2 * sizeof(quadlet_t)),
    &VAR_7, sizeof(quadlet_t)) &&
       FUNC_2(VAR_7) & 1 << VAR_0))
   FUNC_6(VAR_5, VAR_8, -1);
  else {
   FUNC_0("The root node is not cycle master capable; "
       "selecting a new root node and resetting...");

   if (VAR_6 >= 5) {

    FUNC_0("Stopping reset loop for IRM sanity");
    return 1;
   }

   FUNC_6(VAR_5, FUNC_1(VAR_5->node_id), -1);
   FUNC_5(VAR_5, VAR_4);

   return 0;
  }
 }





 if (!VAR_5->resume_packet_sent && !FUNC_7(VAR_5))
  VAR_5->resume_packet_sent = 1;

 return 1;
}
