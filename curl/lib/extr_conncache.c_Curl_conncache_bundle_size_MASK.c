
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connectdata {int data; TYPE_1__* bundle; } ;
struct TYPE_2__ {size_t num_connections; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

size_t FUNC_2(struct connectdata *VAR_0)
{
  size_t VAR_1;
  FUNC_0(VAR_0->data);
  VAR_1 = VAR_0->bundle->num_connections;
  FUNC_1(VAR_0->data);
  return VAR_1;
}
