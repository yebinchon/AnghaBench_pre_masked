
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ib_cm_compare_data {int mask; int data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static int FUNC_2(struct ib_cm_compare_data *VAR_1,
      struct ib_cm_compare_data *VAR_2)
{
 u8 VAR_3[VAR_0];
 u8 VAR_4[VAR_0];

 if (!VAR_1 || !VAR_2)
  return 0;

 FUNC_0(VAR_3, VAR_1->data, VAR_2->mask);
 FUNC_0(VAR_4, VAR_2->data, VAR_1->mask);
 return FUNC_1(VAR_3, VAR_4, VAR_0);
}
