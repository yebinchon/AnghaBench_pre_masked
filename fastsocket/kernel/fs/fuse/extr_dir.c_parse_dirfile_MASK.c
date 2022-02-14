
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_dirent {scalar_t__ namelen; int off; int type; int ino; int name; } ;
struct file {int f_pos; } ;
typedef int (* filldir_t ) (void*,int ,scalar_t__,int ,int ,int ) ;


 int VAR_0 ;
 size_t FUNC_0 (struct fuse_dirent*) ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static int FUNC_1(char *VAR_3, size_t VAR_4, struct file *VAR_5,
    void *VAR_6, filldir_t VAR_7)
{
 while (VAR_4 >= VAR_2) {
  struct fuse_dirent *VAR_8 = (struct fuse_dirent *) VAR_3;
  size_t VAR_9 = FUNC_0(VAR_8);
  int VAR_10;
  if (!VAR_8->namelen || VAR_8->namelen > VAR_1)
   return -VAR_0;
  if (VAR_9 > VAR_4)
   break;

  VAR_10 = VAR_7(VAR_6, VAR_8->name, VAR_8->namelen,
          VAR_5->f_pos, VAR_8->ino, VAR_8->type);
  if (VAR_10)
   break;

  VAR_3 += VAR_9;
  VAR_4 -= VAR_9;
  VAR_5->f_pos = VAR_8->off;
 }

 return 0;
}
