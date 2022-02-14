
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct de_private {int media_type; } ;


 scalar_t__ FUNC_0 (struct de_private*,int ) ;

__attribute__((used)) static void FUNC_1 (struct de_private *VAR_0, u32 *VAR_1,
      unsigned int VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  if (FUNC_0(VAR_0, VAR_1[VAR_3])) {
   VAR_0->media_type = VAR_1[VAR_3];
   return;
  }
 }
}
