
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* uthread_t ;
typedef int u_int32_t ;
typedef int u_int ;
struct proc {scalar_t__ p_fpdrainwait; struct filedesc* p_fd; } ;
struct fileproc {scalar_t__ f_iocount; int f_flags; } ;
struct filedesc {struct fileproc** fd_ofiles; } ;
struct _select_data {int * wqp; } ;
struct TYPE_4__ {struct _select_data uus_select_data; } ;
struct TYPE_5__ {int uu_wqset; TYPE_1__ uu_save; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct fileproc*,int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct proc *VAR_4, u_int32_t *VAR_5, int VAR_6, int VAR_7, int *VAR_8, int VAR_9)
{
 struct filedesc *VAR_10 = VAR_4->p_fd;
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 u_int32_t VAR_16;
 struct fileproc *VAR_17;
 u_int32_t *VAR_18;
 u_int VAR_19;
 int VAR_20 = 0;
 int VAR_21 = 0;
 uthread_t VAR_22 = FUNC_2(FUNC_0());
 struct _select_data *VAR_23;

 *VAR_8 = 0;





 if (VAR_10 == ((void*)0)) {
  return(VAR_1);
 }

 VAR_19 = FUNC_3(VAR_6, VAR_3);
 VAR_23 = &VAR_22->uu_save.uus_select_data;

 VAR_14 = 0;
 for (VAR_11 = 0; VAR_11 < 3; VAR_11++) {
  VAR_18 = (u_int32_t *)&VAR_5[VAR_11 * VAR_19];
  for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12 += VAR_3) {
   VAR_16 = VAR_18[VAR_12/VAR_3];
   while ((VAR_13 = FUNC_1(VAR_16)) && (VAR_15 = VAR_12 + --VAR_13) < VAR_6) {
    VAR_16 &= ~(1 << VAR_13);
    VAR_17 = VAR_10->fd_ofiles[VAR_15];




    if ((VAR_9 != 0) && (++VAR_21 > VAR_7))
     goto done;






    FUNC_5(VAR_17,
         VAR_23->wqp ? VAR_23->wqp[VAR_14] : 0,
         VAR_22->uu_wqset);

    VAR_14++;

    if (VAR_17 == ((void*)0)) {

     VAR_20 = VAR_0;
     continue;
    }

    VAR_17->f_iocount--;
    if (VAR_17->f_iocount < 0)
     FUNC_4("f_iocount overdecrement!");

    if (VAR_17->f_iocount == 0) {






     if (VAR_17->f_flags & VAR_2)
      VAR_17->f_flags &= ~VAR_2;
     if (VAR_4->p_fpdrainwait) {
      VAR_4->p_fpdrainwait = 0;
      *VAR_8 = 1;
     }
    }
   }
  }
 }
done:
 return (VAR_20);
}
