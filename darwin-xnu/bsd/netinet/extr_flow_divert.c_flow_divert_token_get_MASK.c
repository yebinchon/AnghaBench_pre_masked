
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct sockopt {scalar_t__ sopt_val; int sopt_valsize; } ;
struct socket {int so_flags; struct flow_divert_pcb* so_fd_pcb; } ;
struct flow_divert_pcb {int app_data_length; size_t control_group_unit; int * app_data; int hash; TYPE_1__* group; } ;
struct flow_divert_group {int lck; int ctl_unit; } ;
typedef int * mbuf_t ;
typedef int hmac ;
typedef int errno_t ;
typedef int ctl_unit ;
struct TYPE_2__ {int ctl_unit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct flow_divert_pcb*,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int,int *) ;
 int FUNC_3 (int *,struct flow_divert_group*,int *) ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 struct flow_divert_group** VAR_16 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,int **) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct socket*,int ) ;
 int FUNC_11 (struct socket*,int ) ;
 int FUNC_12 (struct sockopt*,int *) ;

errno_t
FUNC_13(struct socket *VAR_17, struct sockopt *VAR_18)
{
 uint32_t VAR_19;
 int VAR_20 = 0;
 uint8_t VAR_21[VAR_11];
 struct flow_divert_pcb *VAR_22 = VAR_17->so_fd_pcb;
 mbuf_t VAR_23 = ((void*)0);
 struct flow_divert_group *VAR_24 = ((void*)0);

 if (!(VAR_17->so_flags & VAR_12)) {
  VAR_20 = VAR_0;
  goto done;
 }

 FUNC_1((VAR_17->so_flags & VAR_12) && VAR_17->so_fd_pcb != ((void*)0));

 if (VAR_22->group == ((void*)0)) {
  VAR_20 = VAR_0;
  goto done;
 }

 VAR_20 = FUNC_8(VAR_9, VAR_10, &VAR_23);
 if (VAR_20) {
  FUNC_0(VAR_8, VAR_22, "failed to allocate the header mbuf: %d", VAR_20);
  goto done;
 }

 VAR_19 = FUNC_4(VAR_22->group->ctl_unit);

 VAR_20 = FUNC_2(VAR_23, VAR_3, sizeof(VAR_19), &VAR_19);
 if (VAR_20) {
  goto done;
 }

 VAR_20 = FUNC_2(VAR_23, VAR_4, sizeof(VAR_22->hash), &VAR_22->hash);
 if (VAR_20) {
  goto done;
 }

 if (VAR_22->app_data != ((void*)0)) {
  VAR_20 = FUNC_2(VAR_23, VAR_2, VAR_22->app_data_length, VAR_22->app_data);
  if (VAR_20) {
   goto done;
  }
 }

 FUNC_11(VAR_17, 0);
 FUNC_6(&VAR_15);

 if (VAR_16 != ((void*)0) && VAR_14 > 0 &&
     VAR_22->control_group_unit > 0 && VAR_22->control_group_unit < VAR_7)
 {
  VAR_24 = VAR_16[VAR_22->control_group_unit];
 }

 if (VAR_24 != ((void*)0)) {
  FUNC_6(&VAR_24->lck);
  VAR_19 = FUNC_4(VAR_24->ctl_unit);
  VAR_20 = FUNC_2(VAR_23, VAR_6, sizeof(VAR_19), &VAR_19);
  if (!VAR_20) {
   VAR_20 = FUNC_3(VAR_23, VAR_24, VAR_21);
  }
  FUNC_5(&VAR_24->lck);
 } else {
  VAR_20 = VAR_1;
 }

 FUNC_5(&VAR_15);
 FUNC_10(VAR_17, 0);

 if (VAR_20) {
  goto done;
 }

 VAR_20 = FUNC_2(VAR_23, VAR_5, sizeof(VAR_21), VAR_21);
 if (VAR_20) {
  goto done;
 }

 if (VAR_18->sopt_val == VAR_13) {

  VAR_18->sopt_valsize = FUNC_9(VAR_23);
  goto done;
 }

 VAR_20 = FUNC_12(VAR_18, VAR_23);
 if (VAR_20) {
  VAR_23 = ((void*)0);
  goto done;
 }

done:
 if (VAR_23 != ((void*)0)) {
  FUNC_7(VAR_23);
 }

 return VAR_20;
}
