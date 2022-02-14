
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int FileList; int Fifo; } ;
typedef TYPE_1__ ZIP_PACKER ;
typedef TYPE_1__ ZIP_FILE ;
typedef scalar_t__ UINT ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void FUNC_5(ZIP_PACKER *VAR_0)
{
 UINT VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_3(VAR_0->Fifo);

 for (VAR_1 = 0;VAR_1 < FUNC_2(VAR_0->FileList);VAR_1++)
 {
  ZIP_FILE *VAR_2 = FUNC_1(VAR_0->FileList, VAR_1);

  FUNC_0(VAR_2);
 }

 FUNC_4(VAR_0->FileList);

 FUNC_0(VAR_0);
}
