
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ AVCodecParser ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__* VAR_2 ;

AVCodecParser *FUNC_1(const AVCodecParser *VAR_3)
{
    FUNC_0(&VAR_1, VAR_0);

    if (VAR_3)
        return VAR_3->next;
    else
        return (AVCodecParser*)VAR_2[0];
}
