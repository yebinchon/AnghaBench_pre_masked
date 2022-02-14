
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct cmac {int adapter; TYPE_1__* instance; } ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct cmac* VAR_4, u8 VAR_5[6])
{
 u32 VAR_6;
 int VAR_7 = VAR_4->instance->index;

 FUNC_3(VAR_4->adapter, FUNC_1(VAR_7),
    (VAR_5[3] << 16) | (VAR_5[4] << 8) | VAR_5[5]);
 FUNC_3(VAR_4->adapter, FUNC_0(VAR_7),
    (VAR_5[0] << 16) | (VAR_5[1] << 8) | VAR_5[2]);

 FUNC_2(VAR_4->adapter, VAR_3, &VAR_6);
 VAR_6 &= ~0xf0000000;
 FUNC_3(VAR_4->adapter, VAR_3, VAR_6 | (VAR_7 << 28));

 FUNC_3(VAR_4->adapter, VAR_0,
    0xffff0000 | (VAR_5[4] << 8) | VAR_5[5]);
 FUNC_3(VAR_4->adapter, VAR_1,
    0xffff0000 | (VAR_5[2] << 8) | VAR_5[3]);
 FUNC_3(VAR_4->adapter, VAR_2,
    0xffff0000 | (VAR_5[0] << 8) | VAR_5[1]);
 return 0;
}
