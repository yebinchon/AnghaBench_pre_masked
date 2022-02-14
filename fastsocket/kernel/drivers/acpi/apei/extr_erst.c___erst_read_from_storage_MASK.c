
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct apei_exec_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct apei_exec_context*) ;
 int FUNC_1 (struct apei_exec_context*,scalar_t__) ;
 int FUNC_2 (struct apei_exec_context*,int ) ;
 int FUNC_3 (struct apei_exec_context*,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct apei_exec_context*) ;
 scalar_t__ FUNC_6 (scalar_t__*,int ) ;

__attribute__((used)) static int FUNC_7(u64 VAR_10, u64 VAR_11)
{
 struct apei_exec_context VAR_12;
 u64 VAR_13 = VAR_8;
 u64 VAR_14;
 int VAR_15;

 FUNC_5(&VAR_12);
 VAR_15 = FUNC_3(&VAR_12, VAR_0);
 if (VAR_15)
  return VAR_15;
 FUNC_1(&VAR_12, VAR_11);
 VAR_15 = FUNC_2(&VAR_12, VAR_6);
 if (VAR_15)
  return VAR_15;
 FUNC_1(&VAR_12, VAR_10);
 VAR_15 = FUNC_2(&VAR_12, VAR_5);
 if (VAR_15)
  return VAR_15;
 VAR_15 = FUNC_2(&VAR_12, VAR_3);
 if (VAR_15)
  return VAR_15;
 for (;;) {
  VAR_15 = FUNC_2(&VAR_12, VAR_1);
  if (VAR_15)
   return VAR_15;
  VAR_14 = FUNC_0(&VAR_12);
  if (!VAR_14)
   break;
  if (FUNC_6(&VAR_13, VAR_9))
   return -VAR_7;
 };
 VAR_15 = FUNC_2(&VAR_12, VAR_4);
 if (VAR_15)
  return VAR_15;
 VAR_14 = FUNC_0(&VAR_12);
 VAR_15 = FUNC_3(&VAR_12, VAR_2);
 if (VAR_15)
  return VAR_15;

 return FUNC_4(VAR_14);
}
