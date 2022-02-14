
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static void FUNC_4(void)
{
 u32 VAR_4;

 FUNC_2(VAR_3.dev, VAR_0, &VAR_4);
 VAR_4 = VAR_4 & 0xFF3FFFFF;
 FUNC_3(VAR_3.dev, VAR_0, VAR_4);

 VAR_4 = FUNC_0(VAR_1);
 VAR_4 |= (0x3 << VAR_2);
 FUNC_1(VAR_4, VAR_1);
}
