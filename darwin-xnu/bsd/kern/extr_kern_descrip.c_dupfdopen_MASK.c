
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fileproc {int f_flag; int f_fglob; } ;
struct filedesc {int fd_nfiles; int* fd_ofileflags; int fd_lastfile; struct fileproc** fd_ofiles; } ;
typedef int proc_t ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int FUNC_0 (struct fileproc*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct fileproc*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

int
FUNC_8(struct filedesc *VAR_9, int VAR_10, int VAR_11, int VAR_12, int VAR_13)
{
 struct fileproc *VAR_14;
 struct fileproc *VAR_15;



 proc_t VAR_16 = FUNC_1();
 FUNC_5(VAR_16);

 VAR_15 = VAR_9->fd_ofiles[VAR_10];
 if (VAR_11 < 0 || VAR_11 >= VAR_9->fd_nfiles ||
   (VAR_14 = VAR_9->fd_ofiles[VAR_11]) == ((void*)0) || VAR_14 == VAR_15 ||
                 (VAR_9->fd_ofileflags[VAR_11] & VAR_8)) {

         FUNC_6(VAR_16);
  return (VAR_1);
 }
 switch (VAR_13) {
 case 128:
  if (FUNC_0(VAR_14, VAR_5)) {
   FUNC_6(VAR_16);
   return (VAR_2);
  }





         if (((VAR_12 & (VAR_3|VAR_4)) | VAR_14->f_flag) != VAR_14->f_flag) {
          FUNC_6(VAR_16);
   return (VAR_0);
  }
  if (VAR_10 > VAR_9->fd_lastfile)
   VAR_9->fd_lastfile = VAR_10;
  (void)FUNC_3(VAR_14);

  if (VAR_15->f_fglob)
          FUNC_2(VAR_15->f_fglob);
  VAR_15->f_fglob = VAR_14->f_fglob;

  VAR_9->fd_ofileflags[VAR_10] = VAR_9->fd_ofileflags[VAR_11] |
   (VAR_12 & VAR_6) ? VAR_7 : 0;

         FUNC_6(VAR_16);
  return (0);

 default:
         FUNC_6(VAR_16);
  return (VAR_13);
 }

}
