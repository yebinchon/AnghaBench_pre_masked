
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* codec; } ;
struct TYPE_3__ {scalar_t__ decode; } ;
typedef TYPE_2__ AVCodecContext ;
typedef int AVClassCategory ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static AVClassCategory FUNC_0(void *VAR_2)
{
    AVCodecContext* VAR_3 = VAR_2;
    if(VAR_3->codec && VAR_3->codec->decode) return VAR_0;
    else return VAR_1;
}
