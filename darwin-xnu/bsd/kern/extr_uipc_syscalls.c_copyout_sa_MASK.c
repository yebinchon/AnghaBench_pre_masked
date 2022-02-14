
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_addr_t ;
struct sockaddr {scalar_t__ sa_len; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ socklen_t ;


 scalar_t__ FUNC_0 (unsigned int,scalar_t__) ;
 int FUNC_1 (struct sockaddr*,int ,unsigned int) ;

__attribute__((used)) static int
FUNC_2(struct sockaddr *VAR_0, user_addr_t VAR_1, socklen_t *VAR_2)
{
 int VAR_3 = 0;
 socklen_t VAR_4 = 0;
 ssize_t VAR_5;

 VAR_5 = *VAR_2;
 if (VAR_5 <= 0 || VAR_0 == 0) {
  VAR_5 = 0;
 } else {



  VAR_4 = VAR_0->sa_len;
  VAR_5 = (((unsigned int)VAR_5) > (VAR_4) ? (VAR_4) : ((unsigned int)VAR_5));
  VAR_3 = FUNC_1(VAR_0, VAR_1, (unsigned)VAR_5);
  if (VAR_3)
   goto out;
 }
 *VAR_2 = VAR_4;
out:
 return (0);
}
