
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* buffer; } ;
struct TYPE_3__ {void* buffer; } ;
struct vibrato {TYPE_2__ right; TYPE_1__ left; } ;


 int FUNC_0 (void*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
   struct vibrato *VAR_1 = (struct vibrato*)VAR_0;
   FUNC_0(VAR_1->left.buffer);
   FUNC_0(VAR_1->right.buffer);
   FUNC_0(VAR_0);
}
