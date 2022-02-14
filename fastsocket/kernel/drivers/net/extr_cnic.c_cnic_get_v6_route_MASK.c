
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_scope_id; int sin6_addr; } ;
struct flowi {int oif; int fl6_dst; } ;
struct dst_entry {int dummy; } ;
typedef int fl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dst_entry* FUNC_0 (int *,int *,struct flowi*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct flowi*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct sockaddr_in6 *VAR_3,
        struct dst_entry **VAR_4)
{
 return -VAR_0;
}
