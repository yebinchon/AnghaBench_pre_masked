
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int count; int cda; } ;
struct raw3270_request {TYPE_1__ ccw; } ;
struct idal_buffer {int size; int data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

void
FUNC_1(struct raw3270_request *VAR_1, struct idal_buffer *VAR_2)
{
 VAR_1->ccw.cda = FUNC_0(VAR_2->data);
 VAR_1->ccw.count = VAR_2->size;
 VAR_1->ccw.flags |= VAR_0;
}
