
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_sec; int tv_nsec; } ;
struct nfsbuf {int nb_lflags; } ;
typedef scalar_t__ errno_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct nfsbuf*,int ,int,char*,struct timespec*) ;
 int VAR_8 ;
 int FUNC_3 (struct nfsbuf*) ;

errno_t
FUNC_4(struct nfsbuf *VAR_9, int VAR_10, int VAR_11, int VAR_12)
{
 errno_t VAR_13;
 struct timespec VAR_14;

 if (FUNC_0(VAR_9->nb_lflags, VAR_4)) {





         if (VAR_10 & VAR_2)
   return (VAR_1);
         FUNC_1(VAR_9->nb_lflags, VAR_5);

  VAR_14.tv_sec = (VAR_12/100);

  VAR_14.tv_nsec = (VAR_12 % 100) * 10 * VAR_6 * 1000;

  VAR_13 = FUNC_2(VAR_9, VAR_8, VAR_11 | (VAR_7 + 1),
   "nfs_buf_acquire", &VAR_14);
  if (VAR_13)
   return (VAR_13);
  return (VAR_0);
 }
 if (VAR_10 & VAR_3)
         FUNC_3(VAR_9);
 FUNC_1(VAR_9->nb_lflags, VAR_4);

 return (0);
}
