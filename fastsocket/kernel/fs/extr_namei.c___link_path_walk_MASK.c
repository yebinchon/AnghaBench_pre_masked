
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct qstr {char const* name; int len; int hash; } ;
struct path {TYPE_5__* dentry; } ;
struct TYPE_12__ {TYPE_6__* dentry; } ;
struct nameidata {unsigned int flags; TYPE_10__ path; int last_type; struct qstr last; scalar_t__ depth; } ;
struct inode {TYPE_3__* i_op; } ;
struct filename {char* name; } ;
struct TYPE_18__ {struct inode* d_inode; TYPE_4__* d_op; TYPE_2__* d_sb; } ;
struct TYPE_17__ {struct inode* d_inode; } ;
struct TYPE_16__ {int (* d_hash ) (TYPE_6__*,struct qstr*) ;int (* d_revalidate ) (TYPE_6__*,struct nameidata*) ;int (* d_weak_revalidate ) (TYPE_6__*,struct nameidata*) ;} ;
struct TYPE_15__ {int lookup; scalar_t__ follow_link; } ;
struct TYPE_14__ {TYPE_1__* s_type; } ;
struct TYPE_13__ {int fs_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int FUNC_0 () ;
 int FUNC_1 (struct filename*,TYPE_6__*,unsigned int) ;
 int FUNC_2 (struct path*,struct nameidata*) ;
 int FUNC_3 (struct nameidata*,struct qstr*,struct path*) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct nameidata*) ;
 scalar_t__ FUNC_7 (struct inode*,unsigned int) ;
 unsigned long FUNC_8 () ;
 unsigned long FUNC_9 (unsigned int,unsigned long) ;
 int FUNC_10 (TYPE_10__*) ;
 int FUNC_11 (struct path*,struct nameidata*) ;
 int FUNC_12 (struct path*,struct nameidata*) ;
 int FUNC_13 (TYPE_6__*,struct qstr*) ;
 int FUNC_14 (TYPE_6__*,struct qstr*) ;
 int FUNC_15 (TYPE_6__*,struct nameidata*) ;
 int FUNC_16 (TYPE_6__*,struct nameidata*) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static int FUNC_18(struct filename *VAR_12, struct nameidata *VAR_13)
{
 struct path VAR_14;
 struct inode *VAR_15;
 int VAR_16;
 unsigned int VAR_17 = VAR_13->flags;
 const char *VAR_18 = VAR_12->name;

 while (*VAR_18=='/')
  VAR_18++;
 if (!*VAR_18)
  goto return_reval;

 VAR_15 = VAR_13->path.dentry->d_inode;
 if (VAR_13->depth)
  VAR_17 = VAR_10 | (VAR_13->flags & VAR_8);


 for(;;) {
  unsigned long VAR_19;
  struct qstr VAR_20;
  unsigned int VAR_21;

  VAR_13->flags |= VAR_8;
  VAR_16 = FUNC_5(VAR_15);
   if (VAR_16)
   break;

  VAR_20.name = VAR_18;
  VAR_21 = *(const unsigned char *)VAR_18;

  VAR_19 = FUNC_8();
  do {
   VAR_18++;
   VAR_19 = FUNC_9(VAR_21, VAR_19);
   VAR_21 = *(const unsigned char *)VAR_18;
  } while (VAR_21 && (VAR_21 != '/'));
  VAR_20.len = VAR_18 - (const char *) VAR_20.name;
  VAR_20.hash = FUNC_4(VAR_19);


  if (!VAR_21)
   goto last_component;
  while (*++VAR_18 == '/');
  if (!*VAR_18)
   goto last_with_slashes;






  if (VAR_20.name[0] == '.') switch (VAR_20.len) {
   default:
    break;
   case 2:
    if (VAR_20.name[1] != '.')
     break;
    FUNC_6(VAR_13);
    VAR_15 = VAR_13->path.dentry->d_inode;

   case 1:
    continue;
  }




  if (VAR_13->path.dentry->d_op && VAR_13->path.dentry->d_op->d_hash) {
   VAR_16 = VAR_13->path.dentry->d_op->d_hash(VAR_13->path.dentry,
           &VAR_20);
   if (VAR_16 < 0)
    break;
  }

  VAR_16 = FUNC_3(VAR_13, &VAR_20, &VAR_14);
  if (VAR_16)
   break;

  VAR_16 = -VAR_0;
  VAR_15 = VAR_14.dentry->d_inode;
  if (!VAR_15)
   goto out_dput;

  if (VAR_15->i_op->follow_link) {
   VAR_16 = FUNC_2(&VAR_14, VAR_13);
   if (VAR_16)
    goto return_err;
   VAR_16 = -VAR_0;
   VAR_15 = VAR_13->path.dentry->d_inode;
   if (!VAR_15)
    break;
  } else
   FUNC_12(&VAR_14, VAR_13);
  VAR_16 = -VAR_1;
  if (!VAR_15->i_op->lookup)
   break;
  continue;


last_with_slashes:
  VAR_17 |= VAR_10 | VAR_9;
last_component:

  VAR_13->flags &= VAR_17 | ~VAR_8;
  if (VAR_17 & VAR_11)
   goto lookup_parent;
  if (VAR_20.name[0] == '.') switch (VAR_20.len) {
   default:
    break;
   case 2:
    if (VAR_20.name[1] != '.')
     break;
    FUNC_6(VAR_13);
    VAR_15 = VAR_13->path.dentry->d_inode;

   case 1:
    goto return_reval;
  }
  if (VAR_13->path.dentry->d_op && VAR_13->path.dentry->d_op->d_hash) {
   VAR_16 = VAR_13->path.dentry->d_op->d_hash(VAR_13->path.dentry,
           &VAR_20);
   if (VAR_16 < 0)
    break;
  }
  VAR_16 = FUNC_3(VAR_13, &VAR_20, &VAR_14);
  if (VAR_16)
   break;
  VAR_15 = VAR_14.dentry->d_inode;
  if (FUNC_7(VAR_15, VAR_17)) {
   VAR_16 = FUNC_2(&VAR_14, VAR_13);
   if (VAR_16)
    goto return_err;
   VAR_15 = VAR_13->path.dentry->d_inode;
  } else
   FUNC_12(&VAR_14, VAR_13);
  VAR_16 = -VAR_0;
  if (!VAR_15)
   break;
  if (VAR_17 & VAR_9) {
   VAR_16 = -VAR_1;
   if (!VAR_15->i_op->lookup)
    break;
  }
  goto return_base;
lookup_parent:
  VAR_13->last = VAR_20;
  VAR_13->last_type = VAR_7;
  if (VAR_20.name[0] != '.')
   goto return_base;
  if (VAR_20.len == 1)
   VAR_13->last_type = VAR_5;
  else if (VAR_20.len == 2 && VAR_20.name[1] == '.')
   VAR_13->last_type = VAR_6;
  else
   goto return_base;
return_reval:




  if (VAR_13->path.dentry && VAR_13->path.dentry->d_sb) {
   int VAR_22 = VAR_13->path.dentry->d_sb->s_type->fs_flags;

   if (VAR_22 & VAR_3) {
    VAR_16 = -VAR_2;


    if (VAR_22 & VAR_4) {
     if (!VAR_13->path.dentry->d_op->d_weak_revalidate(VAR_13->path.dentry, VAR_13))
      break;
    } else {
     if (!VAR_13->path.dentry->d_op->d_revalidate(VAR_13->path.dentry, VAR_13))
      break;
    }
   }
  }
return_base:
  return 0;
out_dput:
  FUNC_11(&VAR_14, VAR_13);
  break;
 }
 if (FUNC_17(!FUNC_0()) && VAR_13->path.dentry->d_inode)
  FUNC_1(VAR_12, VAR_13->path.dentry,
    VAR_13->flags & VAR_11);
 FUNC_10(&VAR_13->path);
return_err:
 return VAR_16;
}
