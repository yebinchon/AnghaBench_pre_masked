
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct flow_divert_pcb {TYPE_2__* so; } ;
typedef int rbuff_space ;
typedef int * mbuf_t ;
struct TYPE_3__ {int sb_hiwat; } ;
struct TYPE_4__ {TYPE_1__ so_rcv; } ;


 int FUNC_0 (int ,struct flow_divert_pcb*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int,int*) ;
 int FUNC_2 (struct flow_divert_pcb*,int ,int **) ;
 int FUNC_3 (struct flow_divert_pcb*,int *,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct flow_divert_pcb *VAR_4)
{
 int VAR_5 = 0;
 mbuf_t VAR_6 = ((void*)0);
 int VAR_7 = 0;

 VAR_5 = FUNC_2(VAR_4, VAR_0, &VAR_6);
 if (VAR_5) {
  FUNC_0(VAR_2, VAR_4, "failed to create a connect result packet: %d", VAR_5);
  goto done;
 }

 VAR_7 = VAR_4->so->so_rcv.sb_hiwat;
 if (VAR_7 < 0) {
  VAR_7 = 0;
 }
 VAR_7 = FUNC_4(VAR_7);
 VAR_5 = FUNC_1(VAR_6,
                                       VAR_1,
                                       sizeof(VAR_7),
                                       &VAR_7);
 if (VAR_5) {
  goto done;
 }

 VAR_5 = FUNC_3(VAR_4, VAR_6, VAR_3);
 if (VAR_5) {
  goto done;
 }

done:
 if (VAR_5 && VAR_6 != ((void*)0)) {
  FUNC_5(VAR_6);
 }

 return VAR_5;
}
