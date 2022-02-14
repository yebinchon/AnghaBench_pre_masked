
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct pmcraid_config_table_entry {scalar_t__ resource_type; int unique_flags1; int unique_flags0; int resource_address; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_1(u16 VAR_4,
       struct pmcraid_config_table_entry *VAR_5)
{
 int VAR_6 = 0;

 if (VAR_5->resource_type == VAR_3) {
  if (VAR_4 <= VAR_0)
   VAR_6 = ((VAR_5->unique_flags1 & 0x80) == 0);
  else
   VAR_6 = ((VAR_5->unique_flags0 & 0x80) == 0 &&
      (VAR_5->unique_flags1 & 0x80) == 0);

 } else if (VAR_5->resource_type == VAR_2)
  VAR_6 = (FUNC_0(VAR_5->resource_address) !=
    VAR_1);
 return VAR_6;
}
