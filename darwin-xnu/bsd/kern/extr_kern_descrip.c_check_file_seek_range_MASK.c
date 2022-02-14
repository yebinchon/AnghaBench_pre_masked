
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flock {scalar_t__ l_whence; scalar_t__ l_start; scalar_t__ l_len; } ;
typedef scalar_t__ off_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int
FUNC_1(struct flock *VAR_4, off_t VAR_5)
{
 if (VAR_4->l_whence == VAR_2) {

  if (FUNC_0(VAR_4->l_start, VAR_5)) {

   if (VAR_4->l_start < 0) {
    return VAR_0;
   }
   return VAR_1;
  }

  if (VAR_4->l_start + VAR_5 < 0) {
   return VAR_0;
  }

  if ((VAR_4->l_len > 0) && (FUNC_0(VAR_4->l_start +
   VAR_5, VAR_4->l_len - 1))) {
   return VAR_1;
  }

  if ((VAR_4->l_len <= 0) && (VAR_4->l_start + VAR_5 +
   VAR_4->l_len < 0)) {
   return VAR_0;
  }
 } else if (VAR_4->l_whence == VAR_3) {

  if (VAR_4->l_start < 0) {
   return VAR_0;
  }

  if ((VAR_4->l_len > 0) &&
      FUNC_0(VAR_4->l_start, VAR_4->l_len - 1)) {
   return VAR_1;
  }

  if ((VAR_4->l_len < 0) && VAR_4->l_start + VAR_4->l_len < 0) {
   return VAR_0;
  }
 }
 return 0;
}
