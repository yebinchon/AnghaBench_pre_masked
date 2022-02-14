
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int traffic_class ;
struct flow_divert_pcb {int dummy; } ;
typedef int * mbuf_t ;


 int FUNC_0 (int ,struct flow_divert_pcb*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int,int*) ;
 int FUNC_2 (struct flow_divert_pcb*,int ,int **) ;
 int FUNC_3 (struct flow_divert_pcb*,int *,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct flow_divert_pcb *VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 mbuf_t VAR_7 = ((void*)0);

 VAR_6 = FUNC_2(VAR_4, VAR_0, &VAR_7);
 if (VAR_6) {
  FUNC_0(VAR_2, VAR_4, "failed to create a properties update packet: %d", VAR_6);
  goto done;
 }

 VAR_6 = FUNC_1(VAR_7, VAR_1, sizeof(VAR_5), &VAR_5);
 if (VAR_6) {
  FUNC_0(VAR_2, VAR_4, "failed to add the traffic class: %d", VAR_6);
  goto done;
 }

 VAR_6 = FUNC_3(VAR_4, VAR_7, VAR_3);
 if (VAR_6) {
  goto done;
 }

done:
 if (VAR_6 && VAR_7 != ((void*)0)) {
  FUNC_4(VAR_7);
 }

 return VAR_6;
}
