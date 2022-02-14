
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_int ;
struct proc {int p_fpdrainwait; struct filedesc* p_fd; } ;
struct fileproc {int f_iocount; } ;
struct filedesc {int fd_nfiles; int* fd_ofileflags; struct fileproc** fd_ofiles; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct proc*) ;
 int FUNC_3 (struct proc*) ;
 int FUNC_4 (struct proc*,int*,int,int,int*,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct proc *VAR_4, u_int32_t *VAR_5, int VAR_6, int *VAR_7)
{
 struct filedesc *VAR_8 = VAR_4->p_fd;
 int VAR_9, VAR_10, VAR_11, VAR_12;
 u_int32_t VAR_13;
 struct fileproc *VAR_14;
 int VAR_15 = 0;
 u_int32_t *VAR_16;
 u_int VAR_17;
 int VAR_18=0;
 int VAR_19;
 int VAR_20 = 0;





 if (VAR_8 == ((void*)0)) {
  *VAR_7 = 0;
  return(VAR_1);
 }
 VAR_17 = FUNC_1(VAR_6, VAR_2);

 FUNC_2(VAR_4);
 for (VAR_9 = 0; VAR_9 < 3; VAR_9++) {
  VAR_16 = (u_int32_t *)&VAR_5[VAR_9 * VAR_17];
  for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10 += VAR_2) {
   VAR_13 = VAR_16[VAR_10/VAR_2];
   while ((VAR_11 = FUNC_0(VAR_13)) && (VAR_12 = VAR_10 + --VAR_11) < VAR_6) {
    VAR_13 &= ~(1 << VAR_11);

    if (VAR_12 < VAR_8->fd_nfiles)
     VAR_14 = VAR_8->fd_ofiles[VAR_12];
    else
     VAR_14 = ((void*)0);

    if (VAR_14 == ((void*)0) ||
     (VAR_8->fd_ofileflags[VAR_12] & VAR_3)) {
      *VAR_7 = 0;
      VAR_18 = VAR_0;
      goto bad;
    }
    VAR_14->f_iocount++;
    VAR_15++;
   }
  }
 }
 FUNC_3(VAR_4);

 *VAR_7 = VAR_15;
 return (0);

bad:
 VAR_19 = 0;

 if (VAR_15 == 0)
  goto out;

 (void)FUNC_4(VAR_4, VAR_5, VAR_6, VAR_15, &VAR_20, 1);

out:
 FUNC_3(VAR_4);
 if (VAR_20) {
  FUNC_5(&VAR_4->p_fpdrainwait);
 }
 return(VAR_18);
}
