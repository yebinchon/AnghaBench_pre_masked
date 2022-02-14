
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct cword {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int const*,int) ;
 int FUNC_2 (int *,int *,int *,struct cword*,int) ;

__attribute__((used)) static void FUNC_3(const u8 *VAR_3, u8 *VAR_4, u32 *VAR_5,
      struct cword *VAR_6, int VAR_7)
{




 u8 VAR_8[VAR_0 * (VAR_1 - 1) + VAR_2 - 1];
 u8 *VAR_9 = FUNC_0(&VAR_8[0], VAR_2);

 FUNC_1(VAR_9, VAR_3, VAR_7 * VAR_0);
 FUNC_2(VAR_9, VAR_4, VAR_5, VAR_6, VAR_7);
}
