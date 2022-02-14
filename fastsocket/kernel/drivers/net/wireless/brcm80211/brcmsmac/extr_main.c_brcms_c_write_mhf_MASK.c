
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u16 ;
struct brcms_hardware {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct brcms_hardware*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct brcms_hardware *VAR_6, u16 *VAR_7)
{
 u8 VAR_8;
 u16 VAR_9[] = {
  VAR_1, VAR_2, VAR_3, VAR_4,
  VAR_5
 };

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
  FUNC_0(VAR_6, VAR_9[VAR_8], VAR_7[VAR_8]);
}
