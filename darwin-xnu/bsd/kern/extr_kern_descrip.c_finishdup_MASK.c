
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fileproc {int f_fglob; } ;
struct filedesc {int* fd_ofileflags; scalar_t__* fd_ofiles; int fd_lastfile; } ;
typedef int proc_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct fileproc*) ;
 int FUNC_3 (struct fileproc*) ;
 struct fileproc* FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int,struct fileproc*) ;

int
FUNC_12(proc_t VAR_4,
    struct filedesc *VAR_5, int VAR_6, int VAR_7, int VAR_8, int32_t *VAR_9)
{
 struct fileproc *VAR_10;
 struct fileproc *VAR_11;







 if ((VAR_11 = VAR_5->fd_ofiles[VAR_6]) == ((void*)0) ||
     (VAR_5->fd_ofileflags[VAR_6] & VAR_3)) {
  FUNC_1(VAR_4, VAR_7);
  return (VAR_0);
 }
 FUNC_3(VAR_11);
 FUNC_9(VAR_4);

 VAR_10 = FUNC_4(((void*)0));

 FUNC_7(VAR_4);

 if (VAR_10 == ((void*)0)) {
  FUNC_2(VAR_11);
  FUNC_1(VAR_4, VAR_7);
  return (VAR_1);
 }

 VAR_10->f_fglob = VAR_11->f_fglob;
 if (VAR_7 > VAR_5->fd_lastfile)
  VAR_5->fd_lastfile = VAR_7;
 *FUNC_0(VAR_4, VAR_7) |= VAR_8;
 FUNC_11(VAR_4, VAR_7, VAR_10);
 *VAR_9 = VAR_7;
 return (0);
}
