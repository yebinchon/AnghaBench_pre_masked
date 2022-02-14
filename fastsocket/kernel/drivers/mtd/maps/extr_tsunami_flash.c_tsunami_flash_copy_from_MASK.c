
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_info {int dummy; } ;
typedef scalar_t__ ssize_t ;


 unsigned long VAR_0 ;
 unsigned char FUNC_0 (unsigned long) ;

__attribute__((used)) static void FUNC_1(
 struct map_info *VAR_1, void *VAR_2, unsigned long VAR_3, ssize_t VAR_4)
{
 unsigned char *VAR_5;
 VAR_5 = VAR_2;
 while(VAR_4 && (VAR_3 < VAR_0)) {
  *VAR_5 = FUNC_0(VAR_3);
  VAR_3++;
  VAR_5++;
  VAR_4--;
 }
}
