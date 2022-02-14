
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iosapic_intr_info {unsigned long trigger; unsigned long polarity; scalar_t__ dmode; int count; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int,int ) ;
 struct iosapic_intr_info* VAR_7 ;

__attribute__((used)) static int FUNC_1(unsigned long VAR_8, unsigned long VAR_9)
{
 int VAR_10, VAR_11 = -VAR_1, VAR_12 = -1;
 struct iosapic_intr_info *VAR_13;





 if (VAR_8 == VAR_2)
  return -VAR_0;

 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
  VAR_13 = &VAR_7[VAR_10];
  if (VAR_13->trigger == VAR_8 && VAR_13->polarity == VAR_9 &&
      (VAR_13->dmode == VAR_3 ||
       VAR_13->dmode == VAR_4) &&
      FUNC_0(VAR_10, VAR_5)) {
   if (VAR_12 == -1 || VAR_13->count < VAR_12) {
    VAR_11 = VAR_10;
    VAR_12 = VAR_13->count;
   }
  }
 }
 return VAR_11;
}
