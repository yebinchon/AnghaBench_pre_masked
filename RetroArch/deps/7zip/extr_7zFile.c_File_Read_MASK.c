
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int WRes ;
struct TYPE_3__ {int file; int handle; } ;
typedef size_t DWORD ;
typedef TYPE_1__ CSzFile ;
typedef int BOOL ;


 int FUNC_0 () ;
 int FUNC_1 (int ,void*,size_t,size_t*,int *) ;
 int FUNC_2 (int ) ;
 size_t FUNC_3 (void*,int,size_t,int ) ;
 size_t VAR_0 ;

WRes FUNC_4(CSzFile *VAR_1, void *VAR_2, size_t *VAR_3)
{
   size_t VAR_4 = *VAR_3;
   if (VAR_4 == 0)
      return 0;
   *VAR_3 = FUNC_3(VAR_2, 1, VAR_4, VAR_1->file);
   if (*VAR_3 == VAR_4)
      return 0;
   return FUNC_2(VAR_1->file);


}
