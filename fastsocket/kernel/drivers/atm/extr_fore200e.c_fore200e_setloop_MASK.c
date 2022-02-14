
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fore200e {int loop_mode; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct fore200e*,int ,int,int) ;

__attribute__((used)) static int
FUNC_2(struct fore200e* VAR_6, int VAR_7)
{
    u32 VAR_8, VAR_9;
    int VAR_10;

    if (!FUNC_0(VAR_0))
 return -VAR_2;

    switch (VAR_7) {

    case 129:
 VAR_8 = 0;
 VAR_9 = VAR_4 | VAR_5;
 break;

    case 130:
 VAR_8 = VAR_9 = VAR_4;
 break;

    case 128:
 VAR_8 = VAR_9 = VAR_5;
 break;

    default:
 return -VAR_1;
    }

    VAR_10 = FUNC_1(VAR_6, VAR_3, VAR_8, VAR_9);
    if (VAR_10 == 0)
 VAR_6->loop_mode = VAR_7;

    return VAR_10;
}
