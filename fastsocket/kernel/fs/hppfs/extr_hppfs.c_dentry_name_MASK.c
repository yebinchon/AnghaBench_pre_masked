
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; char* name; } ;
struct dentry {struct dentry* d_parent; TYPE_1__ d_name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 char* FUNC_1 (int,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char const*,int) ;

__attribute__((used)) static char *FUNC_4(struct dentry *VAR_1, int VAR_2)
{
 struct dentry *VAR_3;
 char *VAR_4, *VAR_5;
 const char *VAR_6;
 int VAR_7, VAR_8;

 VAR_7 = 0;
 VAR_3 = VAR_1;
 while (VAR_3->d_parent != VAR_3) {
  if (FUNC_0(VAR_3))
   VAR_7 += FUNC_2("pid") + 1;
  else VAR_7 += VAR_3->d_name.len + 1;
  VAR_3 = VAR_3->d_parent;
 }

 VAR_4 = "proc";
 VAR_7 += FUNC_2(VAR_4);
 VAR_5 = FUNC_1(VAR_7 + VAR_2 + 1, VAR_0);
 if (VAR_5 == ((void*)0))
  return ((void*)0);

 VAR_5[VAR_7] = '\0';
 VAR_3 = VAR_1;
 while (VAR_3->d_parent != VAR_3) {
  if (FUNC_0(VAR_3)) {
   VAR_6 = "pid";
   VAR_8 = FUNC_2("pid");
  }
  else {
   VAR_6 = VAR_3->d_name.name;
   VAR_8 = VAR_3->d_name.len;
  }

  VAR_7 -= VAR_8 + 1;
  VAR_5[VAR_7] = '/';
  FUNC_3(&VAR_5[VAR_7 + 1], VAR_6, VAR_8);
  VAR_3 = VAR_3->d_parent;
 }
 FUNC_3(VAR_5, VAR_4, FUNC_2(VAR_4));
 return VAR_5;
}
