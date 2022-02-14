
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * data; } ;
typedef TYPE_1__ imgchunk_t ;
typedef int fchunk ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void FUNC_2(imgchunk_t *VAR_0, unsigned int *VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < *VAR_1; VAR_2++) {
  if (VAR_0[VAR_2].data != ((void*)0)) {
   FUNC_0(VAR_0[VAR_2].data);
  }
 }
 *VAR_1 = 0;
 FUNC_1(VAR_0, 0, sizeof(VAR_0));

}
