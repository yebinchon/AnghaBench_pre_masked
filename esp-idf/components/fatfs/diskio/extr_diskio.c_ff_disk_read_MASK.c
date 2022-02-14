
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_2__ {int (* read ) (size_t,size_t*,int ,int ) ;} ;
typedef int DWORD ;
typedef int DRESULT ;
typedef size_t BYTE ;


 TYPE_1__** VAR_0 ;
 int FUNC_0 (size_t,size_t*,int ,int ) ;

DRESULT FUNC_1 (BYTE VAR_1, BYTE* VAR_2, DWORD VAR_3, UINT VAR_4)
{
    return VAR_0[VAR_1]->read(VAR_1, VAR_2, VAR_3, VAR_4);
}
