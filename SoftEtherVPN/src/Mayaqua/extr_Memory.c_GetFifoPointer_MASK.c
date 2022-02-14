
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UCHAR ;
struct TYPE_3__ {int pos; scalar_t__ p; } ;
typedef TYPE_1__ FIFO ;



UCHAR *FUNC_0(FIFO *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 return ((UCHAR *)VAR_0->p) + VAR_0->pos;
}
