
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int io_close; int io_open; int * av_class; } ;
typedef TYPE_1__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_2(AVFormatContext *VAR_3)
{
    FUNC_1(VAR_3, 0, sizeof(AVFormatContext));

    VAR_3->av_class = &VAR_0;

    VAR_3->io_open = VAR_2;
    VAR_3->io_close = VAR_1;

    FUNC_0(VAR_3);
}
