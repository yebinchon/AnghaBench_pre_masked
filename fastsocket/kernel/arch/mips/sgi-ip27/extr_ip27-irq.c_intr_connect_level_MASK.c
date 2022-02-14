
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slice_data {int * irq_enable_mask; } ;
typedef int nasid_t ;
struct TYPE_2__ {struct slice_data* data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ) ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int *) ;

__attribute__((used)) static int FUNC_5(int VAR_5, int VAR_6)
{
 nasid_t VAR_7 = FUNC_0(FUNC_2(VAR_5));
 struct slice_data *VAR_8 = VAR_4[VAR_5].data;

 FUNC_4(VAR_6, VAR_8->irq_enable_mask);

 if (!FUNC_3(VAR_5)) {
  FUNC_1(VAR_7, VAR_0, VAR_8->irq_enable_mask[0]);
  FUNC_1(VAR_7, VAR_2, VAR_8->irq_enable_mask[1]);
 } else {
  FUNC_1(VAR_7, VAR_1, VAR_8->irq_enable_mask[0]);
  FUNC_1(VAR_7, VAR_3, VAR_8->irq_enable_mask[1]);
 }

 return 0;
}
