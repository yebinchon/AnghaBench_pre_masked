
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int len; int data; } ;
struct TYPE_6__ {TYPE_1__ desc; } ;
typedef TYPE_2__ sift_context_t ;
struct TYPE_7__ {int len; int data; } ;
typedef TYPE_3__ ebb_buf ;



int FUNC_0(const void* VAR_0, const void* VAR_1, ebb_buf* VAR_2)
{
 sift_context_t* VAR_3 = (sift_context_t*)VAR_0;
 VAR_2->data = VAR_3->desc.data;
 VAR_2->len = VAR_3->desc.len;
 return 0;
}
