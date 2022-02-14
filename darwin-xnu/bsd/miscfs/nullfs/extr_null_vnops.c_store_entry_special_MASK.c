
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int dummy; } ;
struct dirent {size_t d_namlen; scalar_t__ d_reclen; int d_name; int d_type; int d_ino; } ;
typedef int ino_t ;
typedef int e ;
typedef int caddr_t ;


 scalar_t__ FUNC_0 (struct dirent*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (struct dirent*,int ,int) ;
 int FUNC_2 (int ,char const*,size_t) ;
 size_t FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (struct uio*) ;
 int FUNC_5 (int ,scalar_t__,struct uio*) ;

__attribute__((used)) static int
FUNC_6(ino_t VAR_4, const char * VAR_5, struct uio * VAR_6)
{
 struct dirent VAR_7;
 size_t VAR_8 = FUNC_3(VAR_5);
 int VAR_9 = VAR_1;

 if (VAR_8 + 1 <= VAR_3) {
  FUNC_1(&VAR_7, 0, sizeof(VAR_7));

  VAR_7.d_ino = VAR_4;
  VAR_7.d_type = VAR_0;

  VAR_7.d_namlen = VAR_8;
  VAR_7.d_reclen = FUNC_0(&VAR_7);
  if (FUNC_4(VAR_6) >= VAR_7.d_reclen) {
   FUNC_2(VAR_7.d_name, VAR_5, VAR_3);
   VAR_9 = FUNC_5((caddr_t)&VAR_7, VAR_7.d_reclen, VAR_6);
  } else {
   VAR_9 = VAR_2;
  }
 }
 return VAR_9;
}
