
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xpc_partition {scalar_t__ act_state; int reason; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (unsigned long const) ;
 int FUNC_2 (struct xpc_partition*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ,char*,int ,int) ;
 int VAR_1 ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int ,unsigned long const,size_t) ;
 int VAR_2 ;

__attribute__((used)) static enum xp_retval
FUNC_6(struct xpc_partition *VAR_3, void *VAR_4,
          const unsigned long VAR_5, size_t VAR_6)
{
 enum xp_retval VAR_7;

 FUNC_0(VAR_5 != FUNC_1(VAR_5));
 FUNC_0((unsigned long)VAR_4 != FUNC_1((unsigned long)VAR_4));
 FUNC_0(VAR_6 != FUNC_1(VAR_6));

 if (VAR_3->act_state == VAR_0)
  return VAR_3->reason;

 VAR_7 = FUNC_5(FUNC_4(VAR_4), VAR_5, VAR_6);
 if (VAR_7 != VAR_1) {
  FUNC_3(VAR_2, "xp_remote_memcpy() from partition %d failed,"
   " ret=%d\n", FUNC_2(VAR_3), VAR_7);
 }
 return VAR_7;
}
