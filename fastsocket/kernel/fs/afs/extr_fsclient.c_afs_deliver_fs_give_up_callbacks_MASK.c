
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ len; } ;
struct afs_call {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_1(struct afs_call *VAR_1,
         struct sk_buff *VAR_2, bool VAR_3)
{
 FUNC_0(",{%u},%d", VAR_2->len, VAR_3);

 if (VAR_2->len > 0)
  return -VAR_0;
 return 0;
}
