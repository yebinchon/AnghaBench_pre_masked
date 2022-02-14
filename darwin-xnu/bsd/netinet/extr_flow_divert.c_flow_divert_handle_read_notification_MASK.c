
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct flow_divert_pcb {int send_window; int * so; } ;
typedef int read_count ;
typedef int mbuf_t ;


 int VAR_0 ;
 int FUNC_0 (struct flow_divert_pcb*) ;
 int FUNC_1 (int ,struct flow_divert_pcb*,char*,int) ;
 int FUNC_2 (struct flow_divert_pcb*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int,int ,int,int *,int *) ;
 int FUNC_4 (struct flow_divert_pcb*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static void
FUNC_8(struct flow_divert_pcb *VAR_4, mbuf_t VAR_5, int VAR_6)
{
 uint32_t VAR_7;
 int VAR_8 = 0;

 VAR_8 = FUNC_3(VAR_5, VAR_6, VAR_1, sizeof(VAR_7), &VAR_7, ((void*)0));
 if (VAR_8) {
  FUNC_1(VAR_3, VAR_4, "failed to get the read count: %d", VAR_8);
  return;
 }

 FUNC_1(VAR_2, VAR_4, "received a read notification for %u bytes", FUNC_5(VAR_7));

 FUNC_0(VAR_4);
 if (VAR_4->so != ((void*)0)) {
  FUNC_6(VAR_4->so, 0);
  VAR_4->send_window += FUNC_5(VAR_7);
  FUNC_4(VAR_4, VAR_0);
  FUNC_7(VAR_4->so, 0);
 }
 FUNC_2(VAR_4);
}
