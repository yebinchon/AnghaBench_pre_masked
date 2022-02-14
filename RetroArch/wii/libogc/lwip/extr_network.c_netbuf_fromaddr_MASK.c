
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netbuf {struct ip_addr* fromaddr; } ;
struct ip_addr {int dummy; } ;



__attribute__((used)) static __inline__ struct ip_addr* FUNC_0(struct netbuf *VAR_0)
{
 return (VAR_0?VAR_0->fromaddr:((void*)0));
}
