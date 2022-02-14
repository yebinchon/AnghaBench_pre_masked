
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {int window; int conn; scalar_t__ const region_border; scalar_t__ const y; scalar_t__ const x; } ;
typedef TYPE_1__ XCBGrabContext ;
struct TYPE_5__ {TYPE_1__* priv_data; } ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,scalar_t__ const*) ;

__attribute__((used)) static void FUNC_1(AVFormatContext *VAR_2)
{
    XCBGrabContext *VAR_3 = VAR_2->priv_data;
    const uint32_t VAR_4[] = { VAR_3->x - VAR_3->region_border,
                              VAR_3->y - VAR_3->region_border };

    FUNC_0(VAR_3->conn,
                         VAR_3->window,
                         VAR_0 | VAR_1,
                         VAR_4);
}
