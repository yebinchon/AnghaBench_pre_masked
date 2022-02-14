
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct flow_divert_pcb {TYPE_1__* so; } ;
typedef int mbuf_t ;
typedef int how ;
typedef int close_error ;
struct TYPE_6__ {void* so_error; } ;


 int FUNC_0 (struct flow_divert_pcb*) ;
 int FUNC_1 (int ,struct flow_divert_pcb*,char*,int) ;
 int FUNC_2 (struct flow_divert_pcb*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int,int ,int,int*,int *) ;
 int FUNC_5 (struct flow_divert_pcb*) ;
 int FUNC_6 (struct flow_divert_pcb*,int,int ) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int FUNC_11 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_12(struct flow_divert_pcb *VAR_8, mbuf_t VAR_9, int VAR_10)
{
 uint32_t VAR_11;
 int VAR_12 = 0;
 int VAR_13;

 VAR_12 = FUNC_4(VAR_9, VAR_10, VAR_0, sizeof(VAR_11), &VAR_11, ((void*)0));
 if (VAR_12) {
  FUNC_1(VAR_2, VAR_8, "failed to get the close error: %d", VAR_12);
  return;
 }

 VAR_12 = FUNC_4(VAR_9, VAR_10, VAR_1, sizeof(VAR_13), &VAR_13, ((void*)0));
 if (VAR_12) {
  FUNC_1(VAR_2, VAR_8, "failed to get the close how flag: %d", VAR_12);
  return;
 }

 VAR_13 = FUNC_7(VAR_13);

 FUNC_1(VAR_3, VAR_8, "close received, how = %d", VAR_13);

 FUNC_0(VAR_8);
 if (VAR_8->so != ((void*)0)) {
  FUNC_10(VAR_8->so, 0);

  VAR_8->so->so_error = FUNC_7(VAR_11);

  FUNC_6(VAR_8, VAR_13, VAR_7);

  VAR_13 = FUNC_5(VAR_8);
  if (VAR_13 == VAR_5) {
   FUNC_3(VAR_8->so);
  } else if (VAR_13 == VAR_4) {
   FUNC_8(VAR_8->so);
  } else if (VAR_13 == VAR_6) {
   FUNC_9(VAR_8->so);
  }

  FUNC_11(VAR_8->so, 0);
 }
 FUNC_2(VAR_8);
}
