
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {scalar_t__ left_setid; scalar_t__ right_setid; } ;
struct TYPE_3__ {scalar_t__ id; } ;
struct waitq_link {TYPE_2__ wql_link; TYPE_1__ wql_setid; } ;
struct waitq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (struct waitq_link*) ;

__attribute__((used)) static int FUNC_2(struct waitq *VAR_4, void *VAR_5, struct waitq_link *VAR_6)
{
 uint64_t VAR_7 = *(uint64_t *)VAR_5;
 int VAR_8 = FUNC_1(VAR_6);
 (void)VAR_4;
 if (VAR_8 == VAR_1 && VAR_6->wql_setid.id == VAR_7) {
  FUNC_0("  waitq already in set 0x%llx", VAR_7);
  return VAR_3;
 } else if (VAR_8 == VAR_0) {





  FUNC_0("  waitq already in set 0x%llx (WQL_LINK)", VAR_7);
  if (VAR_6->wql_link.left_setid == VAR_7 ||
      VAR_6->wql_link.right_setid == VAR_7)
   return VAR_3;
 }

 return VAR_2;
}
