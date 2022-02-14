
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * CurrentFile; int FileList; int Fifo; } ;
typedef TYPE_1__ ZIP_PACKER ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int) ;

ZIP_PACKER *FUNC_3()
{
 ZIP_PACKER *VAR_0 = FUNC_2(sizeof(ZIP_PACKER));

 VAR_0->Fifo = FUNC_0();
 VAR_0->FileList = FUNC_1(((void*)0));
 VAR_0->CurrentFile = ((void*)0);

 return VAR_0;
}
