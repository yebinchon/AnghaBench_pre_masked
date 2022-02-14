
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_filter_spec {int type; int flags; } ;
typedef enum efx_filter_table_id { ____Placeholder_efx_filter_table_id } efx_filter_table_id ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static enum efx_filter_table_id
FUNC_2(const struct efx_filter_spec *VAR_11)
{
 FUNC_0(VAR_3 != (VAR_6 >> 2));
 FUNC_0(VAR_3 != (VAR_7 >> 2));
 FUNC_0(VAR_3 != (VAR_8 >> 2));
 FUNC_0(VAR_3 != (VAR_9 >> 2));
 FUNC_0(VAR_4 != (VAR_1 >> 2));
 FUNC_0(VAR_4 != (VAR_2 >> 2));
 FUNC_0(VAR_5 != VAR_4 + 2);
 FUNC_1(VAR_11->type == VAR_10);
 return (VAR_11->type >> 2) + ((VAR_11->flags & VAR_0) ? 2 : 0);
}
