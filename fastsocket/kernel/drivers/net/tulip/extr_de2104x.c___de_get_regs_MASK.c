
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct de_private {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct de_private*,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct de_private *VAR_1, u8 *VAR_2)
{
 int VAR_3;
 u32 *VAR_4 = (u32 *)VAR_2;


 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  VAR_4[VAR_3] = FUNC_1(VAR_3 * 8);


 FUNC_0(VAR_1, VAR_4[8]);
}
