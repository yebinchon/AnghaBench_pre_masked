
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint16_t ;
struct map_info {scalar_t__ pfow_base; } ;


 int FUNC_0 (unsigned long) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned long FUNC_2 (struct map_info*,char*) ;
 int FUNC_3 (struct map_info*) ;
 int FUNC_4 (struct map_info*,scalar_t__) ;
 int FUNC_5 (struct map_info*,int ,scalar_t__) ;
 int FUNC_6 (int) ;

__attribute__((used)) static uint16_t FUNC_7(struct map_info *VAR_9, char *VAR_10)
{
 unsigned int VAR_11, VAR_12;
 int VAR_13 = FUNC_3(VAR_9) * 8;
 unsigned long VAR_14 = FUNC_2(VAR_9, VAR_10);
 int VAR_15 = 20;


 FUNC_5(VAR_9, FUNC_0(VAR_1),
   VAR_9->pfow_base + VAR_5);
 FUNC_5(VAR_9, FUNC_0(VAR_14 & ((1 << VAR_13) - 1)),
   VAR_9->pfow_base + VAR_4);
 FUNC_5(VAR_9, FUNC_0(VAR_14 >> VAR_13),
   VAR_9->pfow_base + VAR_3);
 FUNC_5(VAR_9, FUNC_0(VAR_2),
   VAR_9->pfow_base + VAR_7);

 while ((VAR_15--) > 0) {
  VAR_11 = FUNC_1(FUNC_4(VAR_9, VAR_9->pfow_base + VAR_8));
  if (VAR_11 & VAR_0)
   break;
  FUNC_6(10);
 }

 VAR_12 = FUNC_1(FUNC_4(VAR_9, VAR_9->pfow_base + VAR_6));
 return VAR_12;
}
