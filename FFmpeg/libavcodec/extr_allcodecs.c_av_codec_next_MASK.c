
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ AVCodec ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_0 (int *,int ) ;

AVCodec *FUNC_1(const AVCodec *VAR_3)
{
    FUNC_0(&VAR_1, VAR_0);

    if (VAR_3)
        return VAR_3->next;
    else
        return (AVCodec*)VAR_2[0];
}
