
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sys_device {int dummy; } ;
typedef int pm_message_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int* VAR_9 ;

__attribute__((used)) static int FUNC_4(struct sys_device *VAR_10, pm_message_t VAR_11)
{
 int VAR_12 = 0, VAR_13;
 u32 *VAR_14 = FUNC_2(VAR_8);
 u32 *VAR_15 = FUNC_2(VAR_5);
 u32 *VAR_16 = FUNC_2(VAR_4);
 u32 *VAR_17 = FUNC_2(VAR_7);


 VAR_13 = !!FUNC_0(VAR_1);
 FUNC_3(VAR_1,
      VAR_13 ? VAR_2 : VAR_3);

 for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++)
  VAR_9[VAR_12] = VAR_14[VAR_12];
 VAR_9[VAR_12++] = *VAR_15;
 VAR_9[VAR_12++] = *VAR_16;
 VAR_9[VAR_12++] = *VAR_17;

 *VAR_15 = VAR_6;
 *VAR_16 = VAR_13;

 FUNC_1();
 return 0;
}
