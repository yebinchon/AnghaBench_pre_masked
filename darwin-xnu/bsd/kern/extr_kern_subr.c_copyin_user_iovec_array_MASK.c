
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_addr_t ;
struct user_iovec {int iov_len; int iov_base; } ;
struct user64_iovec {int iov_len; int iov_base; } ;
struct user32_iovec {int iov_len; int iov_base; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct user_iovec*,int) ;

int FUNC_1(user_addr_t VAR_1, int VAR_2, int VAR_3, struct user_iovec *VAR_4)
{
 size_t VAR_5 = ( VAR_2 == VAR_0 ? sizeof(struct user64_iovec) : sizeof(struct user32_iovec));
 int VAR_6;
 int VAR_7;


 VAR_6 = FUNC_0(VAR_1, VAR_4, VAR_3 * VAR_5);
 if (VAR_6)
  return (VAR_6);


 for (VAR_7 = VAR_3 - 1; VAR_7 >= 0; VAR_7--) {
  if (VAR_2 == VAR_0) {
   struct user64_iovec VAR_8 = ((struct user64_iovec *)VAR_4)[VAR_7];
   VAR_4[VAR_7].iov_base = VAR_8.iov_base;
   VAR_4[VAR_7].iov_len = VAR_8.iov_len;
  } else {
   struct user32_iovec VAR_9 = ((struct user32_iovec *)VAR_4)[VAR_7];
   VAR_4[VAR_7].iov_base = VAR_9.iov_base;
   VAR_4[VAR_7].iov_len = VAR_9.iov_len;
  }
 }

 return (0);
}
