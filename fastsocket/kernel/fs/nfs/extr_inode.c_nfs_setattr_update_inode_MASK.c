
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mode; int i_lock; int i_gid; int i_uid; } ;
struct iattr {int ia_valid; int ia_mode; int ia_size; int ia_gid; int ia_uid; } ;
struct TYPE_2__ {int cache_validity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct inode*,int ) ;
 int FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct inode *VAR_8, struct iattr *VAR_9)
{
 if ((VAR_9->ia_valid & (VAR_1|VAR_3|VAR_0)) != 0) {
  FUNC_3(&VAR_8->i_lock);
  if ((VAR_9->ia_valid & VAR_1) != 0) {
   int VAR_10 = VAR_9->ia_mode & VAR_7;
   VAR_10 |= VAR_8->i_mode & ~VAR_7;
   VAR_8->i_mode = VAR_10;
  }
  if ((VAR_9->ia_valid & VAR_3) != 0)
   VAR_8->i_uid = VAR_9->ia_uid;
  if ((VAR_9->ia_valid & VAR_0) != 0)
   VAR_8->i_gid = VAR_9->ia_gid;
  FUNC_0(VAR_8)->cache_validity |= VAR_5|VAR_6;
  FUNC_4(&VAR_8->i_lock);
 }
 if ((VAR_9->ia_valid & VAR_2) != 0) {
  FUNC_1(VAR_8, VAR_4);
  FUNC_2(VAR_8, VAR_9->ia_size);
 }
}
