
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int partition_struct ;
struct TYPE_5__ {int* data; int size; int fn; int cn; int sm; int ci; int FAD; } ;
struct TYPE_6__ {int getsectsize; int isaudio; int * outconcddev; TYPE_2__ workblock; TYPE_1__* cdi; int isbufferfull; } ;
struct TYPE_4__ {int (* ReadSectorFAD ) (int ,int*) ;} ;


 TYPE_3__* VAR_0 ;
 int * FUNC_0 (int *,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*) ;
 scalar_t__ FUNC_3 (char*,int*,int) ;
 int FUNC_4 (int ,int*) ;

int FUNC_5(u32 VAR_1, partition_struct **VAR_2) {
  char VAR_3[12] = { 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
                          0xFF, 0xFF, 0xFF, 0x00};
  int VAR_4 = 0;

  if (VAR_0->outconcddev != ((void*)0) && !VAR_0->isbufferfull)
  {

     if (!VAR_0->cdi->ReadSectorFAD(VAR_1, VAR_0->workblock.data))
     {
        *VAR_2 = ((void*)0);
        return -2;
     }

     VAR_0->workblock.size = VAR_0->getsectsize;
     VAR_0->workblock.FAD = VAR_1;

     if (FUNC_3(VAR_3, VAR_0->workblock.data, 12) != 0) VAR_4 = 1;


     VAR_0->isaudio = VAR_4;
     FUNC_1(1);


     if (VAR_4)
     {
        FUNC_2(VAR_0->workblock.data);
        *VAR_2 = ((void*)0);
        return 0;
     }
     else if (VAR_0->workblock.data[0xF] == 0x02)
     {

        if (VAR_0->workblock.data[0x12] & 0x20) VAR_0->workblock.size = 2324;

        VAR_0->workblock.fn = VAR_0->workblock.data[0x10];
        VAR_0->workblock.cn = VAR_0->workblock.data[0x11];
        VAR_0->workblock.sm = VAR_0->workblock.data[0x12];
        VAR_0->workblock.ci = VAR_0->workblock.data[0x13];
     }





     *VAR_2 = FUNC_0(VAR_0->outconcddev, VAR_4);
     return 0;
  }

  *VAR_2 = ((void*)0);
  return -1;
}
