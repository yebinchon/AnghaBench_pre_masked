
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int z; int y; int x; } ;
struct lis3lv02d {int (* read_data ) (struct lis3lv02d*,int ) ;TYPE_1__ ac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int*) ;
 int FUNC_1 (struct lis3lv02d*,int ) ;
 int FUNC_2 (struct lis3lv02d*,int ) ;
 int FUNC_3 (struct lis3lv02d*,int ) ;

__attribute__((used)) static void FUNC_4(struct lis3lv02d *VAR_3, int *VAR_4, int *VAR_5, int *VAR_6)
{
 int VAR_7[3];

 VAR_7[0] = VAR_3->read_data(VAR_3, VAR_0);
 VAR_7[1] = VAR_3->read_data(VAR_3, VAR_1);
 VAR_7[2] = VAR_3->read_data(VAR_3, VAR_2);

 *VAR_4 = FUNC_0(VAR_3->ac.x, VAR_7);
 *VAR_5 = FUNC_0(VAR_3->ac.y, VAR_7);
 *VAR_6 = FUNC_0(VAR_3->ac.z, VAR_7);
}
