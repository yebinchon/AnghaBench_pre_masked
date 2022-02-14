
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ count; } ;
struct raw3270_request {scalar_t__ size; scalar_t__ buffer; TYPE_1__ ccw; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,void*,size_t) ;

int
FUNC_1(struct raw3270_request *VAR_1, void *VAR_2, size_t VAR_3)
{
 if (VAR_3 + VAR_1->ccw.count > VAR_1->size)
  return -VAR_0;
 FUNC_0(VAR_1->buffer + VAR_1->ccw.count, VAR_2, VAR_3);
 VAR_1->ccw.count += VAR_3;
 return 0;
}
