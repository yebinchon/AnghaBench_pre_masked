
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ iformat; } ;
typedef TYPE_1__ AVFormatContext ;
typedef int AVClassCategory ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static AVClassCategory FUNC_0(void *VAR_2)
{
    AVFormatContext* VAR_3 = VAR_2;
    if(VAR_3->iformat) return VAR_0;
    else return VAR_1;
}
