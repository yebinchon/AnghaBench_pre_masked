
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_info {int dummy; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;

__attribute__((used)) static void FUNC_2(struct map_info *VAR_1, int VAR_2)
{
 unsigned long VAR_3;

 VAR_3 = FUNC_0(VAR_0);
 if (VAR_2) {
  VAR_3 |= 1;
 } else {
  VAR_3 &= ~1;
 }
 FUNC_1(VAR_3, VAR_0);
}
