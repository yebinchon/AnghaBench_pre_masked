
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {char* name; int len; } ;
struct gfs2_dirent {int de_rec_len; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(const struct gfs2_dirent *VAR_0,
       const struct qstr *VAR_1,
       void *VAR_2)
{
 const char *VAR_3 = VAR_1->name;
 const char *VAR_4 = (const char *)VAR_0 + FUNC_0(VAR_0->de_rec_len);
 if (VAR_1->len == (VAR_4 - VAR_3))
  return 1;
 return 0;
}
