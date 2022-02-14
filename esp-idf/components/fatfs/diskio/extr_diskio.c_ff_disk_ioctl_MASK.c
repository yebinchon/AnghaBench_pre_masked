
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* ioctl ) (size_t,size_t,void*) ;} ;
typedef int DRESULT ;
typedef size_t BYTE ;


 TYPE_1__** VAR_0 ;
 int FUNC_0 (size_t,size_t,void*) ;

DRESULT FUNC_1 (BYTE VAR_1, BYTE VAR_2, void* VAR_3)
{
    return VAR_0[VAR_1]->ioctl(VAR_1, VAR_2, VAR_3);
}
