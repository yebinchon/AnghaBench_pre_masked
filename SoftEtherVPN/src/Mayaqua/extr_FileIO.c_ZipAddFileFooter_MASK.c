
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int f ;
struct TYPE_3__ {int Fifo; int CurrentFile; } ;
typedef TYPE_1__ ZIP_PACKER ;
typedef int ZIP_DATA_FOOTER ;


 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int) ;

void FUNC_3(ZIP_PACKER *VAR_0)
{
 ZIP_DATA_FOOTER VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_2(&VAR_1, sizeof(VAR_1));
 FUNC_1(VAR_0->CurrentFile, &VAR_1);

 FUNC_0(VAR_0->Fifo, &VAR_1, sizeof(VAR_1));
}
