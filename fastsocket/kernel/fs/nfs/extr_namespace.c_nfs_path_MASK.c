
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; char const* name; } ;
struct dentry {struct dentry* d_parent; TYPE_1__ d_name; } ;
typedef int ssize_t ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (struct dentry const*) ;
 int VAR_1 ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const*) ;

char *FUNC_6(const char *VAR_2,
        const struct dentry *VAR_3,
        const struct dentry *VAR_4,
        char *VAR_5, ssize_t VAR_6)
{
 char *VAR_7 = VAR_5+VAR_6;
 int VAR_8;

 *--VAR_7 = '\0';
 VAR_6--;
 FUNC_3(&VAR_1);
 while (!FUNC_1(VAR_4) && VAR_4 != VAR_3) {
  VAR_8 = VAR_4->d_name.len;
  VAR_6 -= VAR_8 + 1;
  if (VAR_6 < 0)
   goto Elong_unlock;
  VAR_7 -= VAR_8;
  FUNC_2(VAR_7, VAR_4->d_name.name, VAR_8);
  *--VAR_7 = '/';
  VAR_4 = VAR_4->d_parent;
 }
 FUNC_4(&VAR_1);
 if (*VAR_7 != '/') {
  if (--VAR_6 < 0)
   goto Elong;
  *--VAR_7 = '/';
 }
 VAR_8 = FUNC_5(VAR_2);

 while (VAR_8 > 0 && VAR_2[VAR_8 - 1] == '/')
  VAR_8--;
 VAR_6 -= VAR_8;
 if (VAR_6 < 0)
  goto Elong;
 VAR_7 -= VAR_8;
 FUNC_2(VAR_7, VAR_2, VAR_8);
 return VAR_7;
Elong_unlock:
 FUNC_4(&VAR_1);
Elong:
 return FUNC_0(-VAR_0);
}
