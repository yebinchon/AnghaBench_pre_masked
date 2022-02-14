
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tblock {int flag; int xflag; int gcwait; } ;
struct jfs_log {int cflag; int gcrtc; int flag; int cqueue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct jfs_log*) ;
 int FUNC_1 (struct jfs_log*) ;
 int FUNC_2 (int ,int,int ,int ) ;
 int FUNC_3 (char*,struct tblock*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct jfs_log*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_6 (int ,int *) ;

int FUNC_7(struct jfs_log * VAR_9, struct tblock * VAR_10)
{
 int VAR_11 = 0;

 FUNC_0(VAR_9);


 if (VAR_10->flag & VAR_5) {
  if (VAR_10->flag & VAR_6)
   VAR_11 = -VAR_1;

  FUNC_1(VAR_9);
  return VAR_11;
 }
 FUNC_3("lmGroup Commit: tblk = 0x%p, gcrtc = %d", VAR_10, VAR_9->gcrtc);

 if (VAR_10->xflag & VAR_0)
  VAR_10->flag |= VAR_7;

 if ((!(VAR_9->cflag & VAR_3)) && (!FUNC_4(&VAR_9->cqueue)) &&
     (!(VAR_10->xflag & VAR_0) || FUNC_6(VAR_4, &VAR_9->flag)
      || VAR_2)) {





  VAR_9->cflag |= VAR_3;

  FUNC_5(VAR_9, 0);
 }

 if (VAR_10->xflag & VAR_0) {



  FUNC_1(VAR_9);
  return 0;
 }



 if (VAR_10->flag & VAR_5) {
  if (VAR_10->flag & VAR_6)
   VAR_11 = -VAR_1;

  FUNC_1(VAR_9);
  return VAR_11;
 }



 VAR_9->gcrtc++;
 VAR_10->flag |= VAR_8;

 FUNC_2(VAR_10->gcwait, (VAR_10->flag & VAR_5),
       FUNC_0(VAR_9), FUNC_1(VAR_9));


 if (VAR_10->flag & VAR_6)
  VAR_11 = -VAR_1;

 FUNC_1(VAR_9);
 return VAR_11;
}
