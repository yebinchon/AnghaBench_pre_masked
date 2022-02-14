
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int nodeid; } ;
struct fuse_dirent {scalar_t__ namelen; int off; int type; int ino; int name; } ;
struct fuse_direntplus {TYPE_1__ entry_out; struct fuse_dirent dirent; } ;
struct file {int f_pos; } ;
typedef int (* filldir_t ) (void*,int ,scalar_t__,int ,int ,int ) ;


 int VAR_0 ;
 size_t FUNC_0 (struct fuse_direntplus*) ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (struct file*,struct fuse_direntplus*,int ) ;
 int FUNC_2 (struct file*,int ) ;

__attribute__((used)) static int FUNC_3(char *VAR_3, size_t VAR_4, struct file *VAR_5,
        void *VAR_6, filldir_t VAR_7, u64 VAR_8)
{
 struct fuse_direntplus *VAR_9;
 struct fuse_dirent *VAR_10;
 size_t VAR_11;
 int VAR_12 = 0;
 int VAR_13;

 while (VAR_4 >= VAR_2) {
  VAR_9 = (struct fuse_direntplus *) VAR_3;
  VAR_10 = &VAR_9->dirent;
  VAR_11 = FUNC_0(VAR_9);

  if (!VAR_10->namelen || VAR_10->namelen > VAR_1)
   return -VAR_0;
  if (VAR_11 > VAR_4)
   break;

  if (!VAR_12) {






   VAR_12 = VAR_7(VAR_6, VAR_10->name, VAR_10->namelen,
           VAR_5->f_pos, VAR_10->ino,
           VAR_10->type);
   VAR_5->f_pos = VAR_10->off;
  }

  VAR_3 += VAR_11;
  VAR_4 -= VAR_11;

  VAR_13 = FUNC_1(VAR_5, VAR_9, VAR_8);
  if (VAR_13)
   FUNC_2(VAR_5, VAR_9->entry_out.nodeid);
 }

 return 0;
}
