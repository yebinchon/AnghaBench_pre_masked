
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* tail; } ;
typedef TYPE_2__ list_t ;
struct TYPE_5__ {void* data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__ const*) ;

void *FUNC_2(const list_t *VAR_0) {
  FUNC_0(VAR_0 != ((void*)0));
  FUNC_0(!FUNC_1(VAR_0));

  return VAR_0->tail->data;
}
