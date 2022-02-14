
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_8__ {int * pb; } ;
struct TYPE_7__ {TYPE_1__* codecpar; } ;
struct TYPE_6__ {int profile; int level; } ;
typedef TYPE_2__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int ) ;
 int VAR_1 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_7(AVFormatContext *VAR_2, AVStream *VAR_3)
{
    AVIOContext *VAR_4 = VAR_2->pb;
    int64_t VAR_5;

    FUNC_2(VAR_4, VAR_1, 16);
    FUNC_3(VAR_4, 0);
    VAR_5 = FUNC_0(VAR_4);

    FUNC_5(VAR_4, 16, 0x3C0A);
    FUNC_6(VAR_4, VAR_0, 0);

    FUNC_5(VAR_4, 1, 0x8200);
    FUNC_1(VAR_4, 0xFF);

    FUNC_5(VAR_4, 1, 0x8201);
    FUNC_1(VAR_4, VAR_3->codecpar->profile);

    FUNC_5(VAR_4, 1, 0x8202);
    FUNC_1(VAR_4, VAR_3->codecpar->level);

    FUNC_4(VAR_2->pb, VAR_5);
}
