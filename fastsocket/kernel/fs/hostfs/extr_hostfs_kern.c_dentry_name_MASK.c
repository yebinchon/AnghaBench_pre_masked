
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; scalar_t__ len; } ;
struct dentry {struct dentry* d_parent; TYPE_1__ d_name; int d_inode; } ;
struct TYPE_4__ {char* host_filename; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ) ;
 char* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,scalar_t__) ;

__attribute__((used)) static char *FUNC_4(struct dentry *VAR_1, int VAR_2)
{
 struct dentry *VAR_3;
 char *VAR_4, *VAR_5;
 int VAR_6;

 VAR_6 = 0;
 VAR_3 = VAR_1;
 while (VAR_3->d_parent != VAR_3) {
  VAR_6 += VAR_3->d_name.len + 1;
  VAR_3 = VAR_3->d_parent;
 }

 VAR_4 = FUNC_0(VAR_3->d_inode)->host_filename;
 VAR_6 += FUNC_2(VAR_4);
 VAR_5 = FUNC_1(VAR_6 + VAR_2 + 1, VAR_0);
 if (VAR_5 == ((void*)0))
  return ((void*)0);

 VAR_5[VAR_6] = '\0';
 VAR_3 = VAR_1;
 while (VAR_3->d_parent != VAR_3) {
  VAR_6 -= VAR_3->d_name.len + 1;
  VAR_5[VAR_6] = '/';
  FUNC_3(&VAR_5[VAR_6 + 1], VAR_3->d_name.name,
   VAR_3->d_name.len);
  VAR_3 = VAR_3->d_parent;
 }
 FUNC_3(VAR_5, VAR_4, FUNC_2(VAR_4));
 return VAR_5;
}
