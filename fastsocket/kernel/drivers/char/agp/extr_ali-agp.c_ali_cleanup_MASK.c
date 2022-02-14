
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct aper_size_info_32 {int size_value; } ;
struct TYPE_2__ {int dev; int previous_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct aper_size_info_32* FUNC_0 (int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(void)
{
 struct aper_size_info_32 *VAR_4;
 u32 VAR_5;

 VAR_4 = FUNC_0(VAR_3->previous_size);

 FUNC_1(VAR_3->dev, VAR_2, &VAR_5);

 FUNC_2(VAR_3->dev, VAR_1,
   ((VAR_5 & 0xffffff00) | 0x00000001|0x00000002));

 FUNC_1(VAR_3->dev, VAR_0, &VAR_5);
 FUNC_2(VAR_3->dev, VAR_0,
   ((VAR_5 & 0x00000ff0) | VAR_4->size_value));
}
