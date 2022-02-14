
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_info {struct cfi_private* fldrv_priv; } ;
struct flchip {scalar_t__ state; int mutex; int ref_point_counter; scalar_t__ start; } ;
struct cfi_private {int dummy; } ;
typedef int loff_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct map_info*,struct flchip*,unsigned long,scalar_t__) ;
 int FUNC_2 (struct map_info*) ;
 int FUNC_3 (struct map_info*,int ,unsigned long) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6 (struct map_info *VAR_2, struct flchip *VAR_3, loff_t VAR_4, size_t VAR_5)
{
 unsigned long VAR_6;
 struct cfi_private *VAR_7 = VAR_2->fldrv_priv;
 int VAR_8 = 0;

 VAR_4 += VAR_3->start;


 VAR_6 = VAR_4 & ~(FUNC_2(VAR_2)-1);

 FUNC_4(VAR_3->mutex);

 VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_6, VAR_0);

 if (!VAR_8) {
  if (VAR_3->state != VAR_0 && VAR_3->state != VAR_1)
   FUNC_3(VAR_2, FUNC_0(0xff), VAR_6);

  VAR_3->state = VAR_0;
  VAR_3->ref_point_counter++;
 }
 FUNC_5(VAR_3->mutex);

 return VAR_8;
}
