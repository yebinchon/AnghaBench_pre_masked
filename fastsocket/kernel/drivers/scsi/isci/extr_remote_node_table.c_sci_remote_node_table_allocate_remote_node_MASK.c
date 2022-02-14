
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct sci_remote_node_table {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct sci_remote_node_table*,int) ;
 scalar_t__ FUNC_1 (struct sci_remote_node_table*,int) ;

u16 FUNC_2(
 struct sci_remote_node_table *VAR_3,
 u32 VAR_4)
{
 u16 VAR_5 = VAR_0;

 if (VAR_4 == VAR_1) {
  VAR_5 =
   FUNC_0(
    VAR_3, 0);

  if (VAR_5 == VAR_0) {
   VAR_5 =
    FUNC_0(
     VAR_3, 1);
  }

  if (VAR_5 == VAR_0) {
   VAR_5 =
    FUNC_0(
     VAR_3, 2);
  }
 } else if (VAR_4 == VAR_2) {
  VAR_5 =
   FUNC_1(
    VAR_3, 2);
 }

 return VAR_5;
}
