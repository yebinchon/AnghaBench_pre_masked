
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {scalar_t__ sa_len; } ;


 scalar_t__ FUNC_0 (struct sockaddr const*,struct sockaddr const*,scalar_t__) ;

__attribute__((used)) static inline int
FUNC_1(const struct sockaddr *VAR_0, const struct sockaddr *VAR_1)
{

 if (!VAR_0 || !VAR_1)
  return 0;
 if (VAR_0->sa_len != VAR_1->sa_len)
  return 0;

 return (FUNC_0(VAR_0, VAR_1, VAR_0->sa_len) == 0);
}
