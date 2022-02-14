
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct sci_remote_node_table {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sci_remote_node_table*,scalar_t__) ;
 int FUNC_1 (struct sci_remote_node_table*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct sci_remote_node_table*,scalar_t__) ;

__attribute__((used)) static u16 FUNC_3(
 struct sci_remote_node_table *VAR_3,
 u32 VAR_4)
{
 u32 VAR_5;
 u16 VAR_6 = VAR_0;

 VAR_5 = FUNC_2(
  VAR_3, VAR_4);

 if (VAR_5 != VAR_1) {
  VAR_6 = (u16)VAR_5 * VAR_2;

  FUNC_1(
   VAR_3, VAR_4, VAR_5
   );

  FUNC_0(
   VAR_3, VAR_5
   );
 }

 return VAR_6;
}
