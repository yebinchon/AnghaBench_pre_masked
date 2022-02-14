
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zero ;
typedef int uint32_t ;
struct flow_divert_pcb {int dummy; } ;
typedef int * mbuf_t ;
typedef int how ;


 int FUNC_0 (int ,struct flow_divert_pcb*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ,int,int*) ;
 int FUNC_2 (struct flow_divert_pcb*,int ,int **) ;
 int FUNC_3 (struct flow_divert_pcb*,int *,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct flow_divert_pcb *VAR_5, int VAR_6)
{
 int VAR_7 = 0;
 mbuf_t VAR_8 = ((void*)0);
 uint32_t VAR_9 = 0;

 VAR_7 = FUNC_2(VAR_5, VAR_0, &VAR_8);
 if (VAR_7) {
  FUNC_0(VAR_3, VAR_5, "failed to create a close packet: %d", VAR_7);
  goto done;
 }

 VAR_7 = FUNC_1(VAR_8, VAR_1, sizeof(VAR_9), &VAR_9);
 if (VAR_7) {
  FUNC_0(VAR_3, VAR_5, "failed to add the error code TLV: %d", VAR_7);
  goto done;
 }

 VAR_6 = FUNC_4(VAR_6);
 VAR_7 = FUNC_1(VAR_8, VAR_2, sizeof(VAR_6), &VAR_6);
 if (VAR_7) {
  FUNC_0(VAR_3, VAR_5, "failed to add the how flag: %d", VAR_7);
  goto done;
 }

 VAR_7 = FUNC_3(VAR_5, VAR_8, VAR_4);
 if (VAR_7) {
  goto done;
 }

done:
 if (VAR_7 && VAR_8 != ((void*)0)) {
  FUNC_5(VAR_8);
 }

 return VAR_7;
}
