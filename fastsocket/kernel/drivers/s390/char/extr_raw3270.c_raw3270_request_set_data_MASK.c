
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t count; int cda; } ;
struct raw3270_request {TYPE_1__ ccw; } ;


 int FUNC_0 (void*) ;

void
FUNC_1(struct raw3270_request *VAR_0, void *VAR_1, size_t VAR_2)
{
 VAR_0->ccw.cda = FUNC_0(VAR_1);
 VAR_0->ccw.count = VAR_2;
}
