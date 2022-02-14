
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int fd; } ;
struct TYPE_4__ {TYPE_2__* hwctx; } ;
typedef TYPE_1__ AVHWDeviceContext ;
typedef TYPE_2__ AVDRMDeviceContext ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(AVHWDeviceContext *VAR_0)
{
    AVDRMDeviceContext *VAR_1 = VAR_0->hwctx;

    FUNC_0(VAR_1->fd);
}
