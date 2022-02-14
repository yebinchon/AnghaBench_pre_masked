
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_transaction {int dummy; } ;
struct kvec {scalar_t__ iov_len; void* iov_base; } ;
typedef enum xsd_sockmsg_type { ____Placeholder_xsd_sockmsg_type } xsd_sockmsg_type ;


 scalar_t__ FUNC_0 (char const*) ;
 void* FUNC_1 (struct xenbus_transaction,int,struct kvec*,int,unsigned int*) ;

__attribute__((used)) static void *FUNC_2(struct xenbus_transaction VAR_0,
         enum xsd_sockmsg_type VAR_1,
         const char *VAR_2,
         unsigned int *VAR_3)
{
 struct kvec VAR_4;

 VAR_4.iov_base = (void *)VAR_2;
 VAR_4.iov_len = FUNC_0(VAR_2) + 1;
 return FUNC_1(VAR_0, VAR_1, &VAR_4, 1, VAR_3);
}
