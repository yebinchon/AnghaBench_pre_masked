
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {unsigned int i_flags; } ;
struct gfs2_inode {int i_diskflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct gfs2_inode* FUNC_0 (struct inode*) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;

void FUNC_1(struct inode *VAR_9)
{
 struct gfs2_inode *VAR_10 = FUNC_0(VAR_9);
 unsigned int VAR_11 = VAR_9->i_flags;

 VAR_11 &= ~(VAR_8|VAR_4|VAR_6|VAR_7|VAR_5);
 if (VAR_10->i_diskflags & VAR_1)
  VAR_11 |= VAR_6;
 if (VAR_10->i_diskflags & VAR_0)
  VAR_11 |= VAR_4;
 if (VAR_10->i_diskflags & VAR_2)
  VAR_11 |= VAR_7;
 if (VAR_10->i_diskflags & VAR_3)
  VAR_11 |= VAR_8;
 VAR_9->i_flags = VAR_11;
}
