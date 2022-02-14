
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pb; } ;
typedef TYPE_1__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,unsigned int) ;
 int FUNC_4 (int ,unsigned int) ;
 int VAR_1 ;
 unsigned int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(AVFormatContext *VAR_2)
{
    unsigned VAR_3 = FUNC_5(FUNC_1(VAR_2->pb));
    if (VAR_3) {
        FUNC_2(VAR_2->pb, VAR_1, 16);
        VAR_3 -= 16 + 4;
        FUNC_4(VAR_2->pb, VAR_3);
        FUNC_3(VAR_2->pb, 0, VAR_3);
        FUNC_0(!(FUNC_1(VAR_2->pb) & (VAR_0-1)));
    }
}
