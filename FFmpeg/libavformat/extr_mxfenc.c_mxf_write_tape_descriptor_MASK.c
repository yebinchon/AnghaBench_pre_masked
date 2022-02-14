
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* pb; } ;
struct TYPE_9__ {scalar_t__ buf_ptr; } ;
typedef TYPE_1__ AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (TYPE_2__*,char*,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void FUNC_5(AVFormatContext *VAR_1)
{
    AVIOContext *VAR_2 = VAR_1->pb;

    FUNC_3(VAR_2, 0x012e00);
    FUNC_0(VAR_1, "tape descriptor key", VAR_2->buf_ptr - 16);
    FUNC_1(VAR_2, 20);
    FUNC_2(VAR_2, 16, 0x3C0A);
    FUNC_4(VAR_2, VAR_0, 0);
    FUNC_0(VAR_1, "tape_desc uid", VAR_2->buf_ptr - 16);
}
