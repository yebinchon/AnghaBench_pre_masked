
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dentry {int i_ino; struct dentry* d_inode; } ;
struct cachefiles_xattr {int len; scalar_t__ type; int data; } ;
struct TYPE_6__ {TYPE_2__* cookie; } ;
struct cachefiles_object {TYPE_3__ fscache; struct dentry* dentry; } ;
typedef enum fscache_checkaux { ____Placeholder_fscache_checkaux } fscache_checkaux ;
struct TYPE_5__ {TYPE_1__* def; } ;
struct TYPE_4__ {int name; scalar_t__ check_aux; } ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int FUNC_2 (char*,int ,unsigned int) ;
 int FUNC_3 (char*,struct cachefiles_object*,int) ;
 int FUNC_4 (char*,...) ;
 int VAR_6 ;
 int FUNC_5 (struct cachefiles_object*,char*,int ,int) ;
 int VAR_7 ;
 int FUNC_6 (TYPE_3__*,int *,unsigned int) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (struct cachefiles_xattr*) ;
 struct cachefiles_xattr* FUNC_9 (int,int ) ;
 int FUNC_10 (struct dentry*,int ,scalar_t__*,int) ;
 int FUNC_11 (struct dentry*,int ,scalar_t__*,int,int ) ;

int FUNC_12(struct cachefiles_object *VAR_8,
      struct cachefiles_xattr *VAR_9)
{
 struct cachefiles_xattr *VAR_10;
 struct dentry *VAR_11 = VAR_8->dentry;
 int VAR_12;

 FUNC_3("%p,#%d", VAR_8, VAR_9->len);

 FUNC_0(VAR_11);
 FUNC_0(VAR_11->d_inode);

 VAR_10 = FUNC_9(sizeof(struct cachefiles_xattr) + 512, VAR_6);
 if (!VAR_10) {
  FUNC_4(" = -ENOMEM");
  return -VAR_2;
 }


 VAR_12 = FUNC_10(VAR_11, VAR_7,
      &VAR_10->type, 512 + 1);
 if (VAR_12 < 0) {
  if (VAR_12 == -VAR_1)
   goto stale;


  if (VAR_12 == -VAR_3)
   goto bad_type_length;

  FUNC_5(VAR_8,
     "Can't read xattr on %lu (err %d)",
     VAR_11->d_inode->i_ino, -VAR_12);
  goto error;
 }


 if (VAR_12 < 1)
  goto bad_type_length;

 if (VAR_10->type != VAR_9->type)
  goto stale;

 VAR_10->len = VAR_12;


 if (VAR_8->fscache.cookie->def->check_aux) {
  enum fscache_checkaux VAR_13;
  unsigned int VAR_14;

  VAR_14 = VAR_10->len - 1;

  FUNC_2("checkaux %s #%u",
         VAR_8->fscache.cookie->def->name, VAR_14);

  VAR_13 = FUNC_6(&VAR_8->fscache,
        &VAR_10->data, VAR_14);

  switch (VAR_13) {

  case 128:
   goto okay;


  case 130:
   break;


  case 129:
   goto stale;

  default:
   FUNC_1();
  }


  VAR_12 = FUNC_11(VAR_11, VAR_7,
       &VAR_9->type, VAR_9->len,
       VAR_5);
  if (VAR_12 < 0) {
   FUNC_5(VAR_8,
      "Can't update xattr on %lu"
      " (error %d)",
      VAR_11->d_inode->i_ino, -VAR_12);
   goto error;
  }
 }

okay:
 VAR_12 = 0;

error:
 FUNC_8(VAR_10);
 FUNC_4(" = %d", VAR_12);
 return VAR_12;

bad_type_length:
 FUNC_7("Cache object %lu xattr length incorrect",
        VAR_11->d_inode->i_ino);
 VAR_12 = -VAR_0;
 goto error;

stale:
 VAR_12 = -VAR_4;
 goto error;
}
