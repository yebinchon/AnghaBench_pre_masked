
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct niu_rdc_tables {int first_table_num; } ;
struct niu_parent {struct niu_rdc_tables* rdc_group_cfg; } ;
struct niu {size_t port; struct niu_parent* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (unsigned long) ;
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
 unsigned long VAR_17 ;
 int FUNC_1 (struct niu*,int,int) ;
 int FUNC_2 (struct niu*,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(struct niu *VAR_18)
{
 struct niu_parent *VAR_19 = VAR_18->parent;
 struct niu_rdc_tables *VAR_20 = &VAR_19->rdc_group_cfg[VAR_18->port];
 int VAR_21 = VAR_20->first_table_num;
 unsigned long VAR_22;
 u64 VAR_23;

 FUNC_4(VAR_2, 0);
 FUNC_4(VAR_4, 0);
 FUNC_4(VAR_6, 0);
 FUNC_4(VAR_5, 0);
 FUNC_4(VAR_3, 0);
 for (VAR_22 = 0; VAR_22 < VAR_17; VAR_22++)
  FUNC_4(FUNC_0(VAR_22), 0);
 FUNC_2(VAR_18, VAR_21, 1);
 FUNC_1(VAR_18, VAR_21, 1);
 FUNC_4(VAR_16, ~(u64)0);

 VAR_23 = FUNC_3(VAR_7);
 VAR_23 &= ~(VAR_10 |
   VAR_15 |
   VAR_14 |
   VAR_12 |
   VAR_13 |
   VAR_8 |
   VAR_9);
 VAR_23 |= (VAR_11);
 FUNC_4(VAR_7, VAR_23);

 VAR_23 = FUNC_3(VAR_0);
 VAR_23 |= VAR_1;
 FUNC_4(VAR_0, VAR_23);
}
