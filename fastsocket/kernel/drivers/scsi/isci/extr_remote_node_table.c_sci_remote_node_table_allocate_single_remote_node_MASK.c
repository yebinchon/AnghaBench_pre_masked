
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct sci_remote_node_table {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sci_remote_node_table*,int,int) ;
 int FUNC_1 (struct sci_remote_node_table*,scalar_t__) ;
 int FUNC_2 (struct sci_remote_node_table*,int) ;
 int FUNC_3 (struct sci_remote_node_table*,int) ;
 int FUNC_4 (struct sci_remote_node_table*,int,int) ;

__attribute__((used)) static u16 FUNC_5(
 struct sci_remote_node_table *VAR_3,
 u32 VAR_4)
{
 u8 VAR_5;
 u8 VAR_6;
 u32 VAR_7;
 u16 VAR_8 = VAR_0;

 VAR_7 = FUNC_2(
  VAR_3, VAR_4);


 if (VAR_7 != VAR_1) {
  VAR_6 = FUNC_3(
   VAR_3, VAR_7);

  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
   if (((1 << VAR_5) & VAR_6) != 0) {

    VAR_8 = (u16)(VAR_7 * VAR_2
         + VAR_5);

    FUNC_0(
     VAR_3, VAR_4, VAR_7
     );

    FUNC_1(
     VAR_3, VAR_8
     );

    if (VAR_4 > 0) {
     FUNC_4(
      VAR_3, VAR_4 - 1, VAR_7
      );
    }

    break;
   }
  }
 }

 return VAR_8;
}
