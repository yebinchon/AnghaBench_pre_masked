
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width; int height; } ;
typedef TYPE_1__ VideoState ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static int FUNC_5(VideoState *VAR_11)
{
    int VAR_12,VAR_13;

    VAR_12 = VAR_8 ? VAR_8 : VAR_2;
    VAR_13 = VAR_5 ? VAR_5 : VAR_1;

    if (!VAR_10)
        VAR_10 = VAR_3;
    FUNC_3(VAR_9, VAR_10);

    FUNC_2(VAR_9, VAR_12, VAR_13);
    FUNC_1(VAR_9, VAR_6, VAR_7);
    if (VAR_4)
        FUNC_0(VAR_9, VAR_0);
    FUNC_4(VAR_9);

    VAR_11->width = VAR_12;
    VAR_11->height = VAR_13;

    return 0;
}
