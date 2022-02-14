
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {size_t len; scalar_t__* name; } ;
struct TYPE_10__ {int flags; } ;
struct TYPE_11__ {TYPE_4__ open; } ;
struct TYPE_9__ {TYPE_2__* dentry; } ;
struct nameidata {scalar_t__ last_type; int flags; TYPE_6__ last; TYPE_5__ intent; TYPE_3__ path; } ;
struct dentry {scalar_t__ d_inode; } ;
struct TYPE_8__ {TYPE_1__* d_inode; } ;
struct TYPE_7__ {int i_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct dentry*) ;
 struct dentry* FUNC_3 (struct nameidata*) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int) ;

struct dentry *FUNC_6(struct nameidata *VAR_8, int VAR_9)
{
 struct dentry *VAR_10 = FUNC_0(-VAR_0);

 FUNC_4(&VAR_8->path.dentry->d_inode->i_mutex, VAR_2);




 if (VAR_8->last_type != VAR_3)
  goto fail;
 VAR_8->flags &= ~VAR_6;
 VAR_8->flags |= VAR_4 | VAR_5;
 VAR_8->intent.open.flags = VAR_7;




 VAR_10 = FUNC_3(VAR_8);
 if (FUNC_1(VAR_10))
  goto fail;

 if (VAR_10->d_inode)
  goto eexist;






 if (FUNC_5(!VAR_9 && VAR_8->last.name[VAR_8->last.len])) {
  FUNC_2(VAR_10);
  VAR_10 = FUNC_0(-VAR_1);
 }
 return VAR_10;
eexist:
 FUNC_2(VAR_10);
 VAR_10 = FUNC_0(-VAR_0);
fail:
 return VAR_10;
}
