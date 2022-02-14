
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct flow_divert_pcb {size_t bytes_sent; } ;
typedef int * mbuf_t ;
typedef int errno_t ;
typedef int Boolean ;


 int FUNC_0 (int ,struct flow_divert_pcb*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct flow_divert_pcb*,size_t,int ) ;
 int FUNC_2 (int *,struct sockaddr*) ;
 int FUNC_3 (struct flow_divert_pcb*,int ,int **) ;
 int FUNC_4 (struct flow_divert_pcb*,int *,int ) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,size_t) ;
 int FUNC_8 (int *,int *) ;

__attribute__((used)) static errno_t
FUNC_9(struct flow_divert_pcb *VAR_3, mbuf_t VAR_4, size_t VAR_5, struct sockaddr *VAR_6, Boolean VAR_7)
{
 mbuf_t VAR_8;
 mbuf_t VAR_9;
 int VAR_10 = 0;

 VAR_10 = FUNC_3(VAR_3, VAR_0, &VAR_8);
 if (VAR_10) {
  FUNC_0(VAR_1, VAR_3, "flow_divert_packet_init failed: %d", VAR_10);
  return VAR_10;
 }

 if (VAR_6 != ((void*)0)) {
  VAR_10 = FUNC_2(VAR_8, VAR_6);
  if (VAR_10) {
   FUNC_0(VAR_1, VAR_3, "flow_divert_append_target_endpoint_tlv() failed: %d", VAR_10);
   return VAR_10;
  }
 }

 if (VAR_5 > 0 && VAR_4 != ((void*)0)) {
  VAR_9 = FUNC_5(VAR_8);
  FUNC_8(VAR_9, VAR_4);
  FUNC_7(VAR_8, VAR_5);
 }
 VAR_10 = FUNC_4(VAR_3, VAR_8, VAR_7);

 if (VAR_10) {
  FUNC_8(VAR_9, ((void*)0));
  FUNC_6(VAR_8);
 } else {
  VAR_3->bytes_sent += VAR_5;
  FUNC_1(VAR_3, VAR_5, VAR_2);
 }

 return VAR_10;
}
