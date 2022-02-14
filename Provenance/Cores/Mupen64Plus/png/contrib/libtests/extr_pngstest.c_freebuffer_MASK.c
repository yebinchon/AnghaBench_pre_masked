
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ allocsize; scalar_t__ bufsize; int * buffer; } ;
typedef TYPE_1__ Image ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(Image *VAR_0)
{
   if (VAR_0->buffer) FUNC_0(VAR_0->buffer);
   VAR_0->buffer = ((void*)0);
   VAR_0->bufsize = 0;
   VAR_0->allocsize = 0;
}
