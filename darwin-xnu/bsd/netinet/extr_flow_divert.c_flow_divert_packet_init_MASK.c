
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct flow_divert_pcb {int hash; } ;
struct flow_divert_packet_header {int conn_id; int packet_type; } ;
typedef int * mbuf_t ;
typedef int hdr ;


 int FUNC_0 (int ,struct flow_divert_pcb*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int,struct flow_divert_packet_header*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int **) ;

__attribute__((used)) static int
FUNC_5(struct flow_divert_pcb *VAR_3, uint8_t VAR_4, mbuf_t *VAR_5)
{
 struct flow_divert_packet_header VAR_6;
 int VAR_7 = 0;

 VAR_7 = FUNC_4(VAR_1, VAR_2, VAR_5);
 if (VAR_7) {
  FUNC_0(VAR_0, VAR_3, "failed to allocate the header mbuf: %d", VAR_7);
  return VAR_7;
 }

 VAR_6.packet_type = VAR_4;
 VAR_6.conn_id = FUNC_1(VAR_3->hash);


 VAR_7 = FUNC_2(*VAR_5, 0, sizeof(VAR_6), &VAR_6, VAR_1);
 if (VAR_7) {
  FUNC_0(VAR_0, VAR_3, "mbuf_copyback(hdr) failed: %d", VAR_7);
  FUNC_3(*VAR_5);
  *VAR_5 = ((void*)0);
  return VAR_7;
 }

 return 0;
}
