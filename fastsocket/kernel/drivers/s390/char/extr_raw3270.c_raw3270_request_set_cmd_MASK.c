
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int cmd_code; } ;
struct raw3270_request {TYPE_1__ ccw; } ;



void
FUNC_0(struct raw3270_request *VAR_0, u8 VAR_1)
{
 VAR_0->ccw.cmd_code = VAR_1;
}
