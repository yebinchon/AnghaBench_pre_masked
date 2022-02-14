
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct nameidata {int dummy; } ;
struct TYPE_6__ {int tv_sec; } ;
struct TYPE_8__ {int tv_sec; } ;
struct TYPE_7__ {int tv_sec; } ;
struct inode {TYPE_1__ i_mtime; TYPE_3__ i_atime; TYPE_2__ i_ctime; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_10__ {int tz_secondswest; } ;
struct TYPE_9__ {int tz_minuteswest; } ;


 TYPE_5__* FUNC_0 (struct inode*) ;
 TYPE_4__ VAR_0 ;

__attribute__((used)) static int FUNC_1(struct dentry *VAR_1, struct nameidata *VAR_2)
{
 struct inode *VAR_3 = VAR_1->d_inode;
 int VAR_4;

 if(!VAR_3)
  return 1;


 VAR_4 = VAR_0.tz_minuteswest * 60 - FUNC_0(VAR_3)->tz_secondswest;
 if (VAR_4) {
  VAR_3->i_ctime.tv_sec += VAR_4;
  VAR_3->i_atime.tv_sec += VAR_4;
  VAR_3->i_mtime.tv_sec += VAR_4;
  FUNC_0(VAR_3)->tz_secondswest += VAR_4;
 }
 return 1;
}
