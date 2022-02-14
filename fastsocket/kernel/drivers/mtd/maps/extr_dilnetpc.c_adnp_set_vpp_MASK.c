
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_info {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(struct map_info *VAR_3, int VAR_4)
{
 FUNC_3(&VAR_1);

 if (VAR_4)
 {
  if(++VAR_2 == 1)
   FUNC_2(VAR_0, FUNC_1(VAR_0) & ~0x8);
 }
 else
 {
  if(--VAR_2 == 0)
   FUNC_2(VAR_0, FUNC_1(VAR_0) | 0x8);
  else
   FUNC_0(VAR_2 < 0);
 }
 FUNC_4(&VAR_1);
}
