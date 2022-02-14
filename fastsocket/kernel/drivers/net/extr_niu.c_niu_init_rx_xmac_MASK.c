
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct niu_rdc_tables {int first_table_num; } ;
struct niu_parent {struct niu_rdc_tables* rdc_group_cfg; } ;
struct niu {size_t port; struct niu_parent* parent; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_0 (unsigned long) ;
 int VAR_35 ;
 int FUNC_1 (struct niu*,int,int) ;
 int FUNC_2 (struct niu*,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(struct niu *VAR_36)
{
 struct niu_parent *VAR_37 = VAR_36->parent;
 struct niu_rdc_tables *VAR_38 = &VAR_37->rdc_group_cfg[VAR_36->port];
 int VAR_39 = VAR_38->first_table_num;
 unsigned long VAR_40;
 u64 VAR_41;

 FUNC_4(VAR_16, 0);
 FUNC_4(VAR_18, 0);
 FUNC_4(VAR_20, 0);
 FUNC_4(VAR_19, 0);
 FUNC_4(VAR_17, 0);
 for (VAR_40 = 0; VAR_40 < VAR_1; VAR_40++)
  FUNC_4(FUNC_0(VAR_40), 0);
 FUNC_4(VAR_35, ~(u64)0);
 FUNC_2(VAR_36, VAR_39, 1);
 FUNC_1(VAR_36, VAR_39, 1);

 VAR_41 = FUNC_3(VAR_21);
 VAR_41 &= ~(VAR_33 |
   VAR_27 |
   VAR_28 |
   VAR_23 |
   VAR_32 |
   VAR_30 |
   VAR_31 |
   VAR_22 |
   VAR_29 |
   VAR_34 |
   VAR_26 |
   VAR_25);
 VAR_41 |= (VAR_24);
 FUNC_4(VAR_21, VAR_41);

 FUNC_4(VAR_3, 0);
 FUNC_4(VAR_2, 0);
 FUNC_4(VAR_14, 0);
 FUNC_4(VAR_6, 0);
 FUNC_4(VAR_7, 0);
 FUNC_4(VAR_8, 0);
 FUNC_4(VAR_9, 0);
 FUNC_4(VAR_10, 0);
 FUNC_4(VAR_11, 0);
 FUNC_4(VAR_12, 0);
 FUNC_4(VAR_13, 0);
 FUNC_4(VAR_15, 0);
 FUNC_4(VAR_5, 0);
 FUNC_4(VAR_4, 0);
 FUNC_4(VAR_0, 0);
}
