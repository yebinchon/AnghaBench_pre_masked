
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sys_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int ) ;
 int * VAR_5 ;

__attribute__((used)) static int FUNC_1(struct sys_device *VAR_6)
{
 int VAR_7 = 0;
 u32 *VAR_8 = FUNC_0(VAR_4);
 u32 *VAR_9 = FUNC_0(VAR_2);
 u32 *VAR_10 = FUNC_0(VAR_1);
 u32 *VAR_11 = FUNC_0(VAR_3);

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  VAR_8[VAR_7] = VAR_5[VAR_7];
 *VAR_9 = VAR_5[VAR_7++];
 *VAR_10 = VAR_5[VAR_7++];
 *VAR_11 = VAR_5[VAR_7++];

 return 0;
}
