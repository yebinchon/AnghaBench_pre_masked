
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int tmp ;
typedef int h ;
struct TYPE_8__ {TYPE_2__* CurrentFile; TYPE_6__* Fifo; int FileList; } ;
typedef TYPE_1__ ZIP_PACKER ;
struct TYPE_9__ {char* Name; int Crc32; void* HeaderPos; void* Attributes; scalar_t__ DateTime; void* Size; } ;
typedef TYPE_2__ ZIP_FILE ;
typedef char ZIP_DATA_HEADER ;
typedef scalar_t__ UINT64 ;
typedef void* UINT ;
struct TYPE_10__ {scalar_t__ total_write_size; } ;


 int FUNC_0 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (char*,int,char*,char*,char*,int) ;
 int FUNC_4 (char*,int,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_6__*,char*,int) ;
 int FUNC_7 (TYPE_2__*,char*,int) ;
 int FUNC_8 (char*,int) ;
 TYPE_2__* FUNC_9 (int) ;

void FUNC_10(ZIP_PACKER *VAR_1, char *VAR_2, UINT VAR_3, UINT64 VAR_4, UINT VAR_5)
{
 char VAR_6[VAR_0];
 ZIP_FILE *VAR_7;
 ZIP_DATA_HEADER VAR_8;

 if (VAR_1 == ((void*)0) || FUNC_1(VAR_2))
 {
  return;
 }
 if (VAR_4 == 0)
 {
  VAR_4 = FUNC_2();
 }

 if (VAR_1->CurrentFile != ((void*)0))
 {
  return;
 }

 FUNC_4(VAR_6, sizeof(VAR_6), VAR_2);
 FUNC_3(VAR_6, sizeof(VAR_6), VAR_6, "/", "\\", 1);

 VAR_7 = FUNC_9(sizeof(ZIP_FILE));

 FUNC_4(VAR_7->Name, sizeof(VAR_7->Name), VAR_6);
 VAR_7->Size = VAR_3;
 VAR_7->DateTime = VAR_4;
 VAR_7->Attributes = VAR_5;

 FUNC_0(VAR_1->FileList, VAR_7);

 FUNC_8(&VAR_8, sizeof(VAR_8));
 VAR_7->HeaderPos = (UINT)VAR_1->Fifo->total_write_size;
 FUNC_7(VAR_7, &VAR_8, 0);
 FUNC_6(VAR_1->Fifo, &VAR_8, sizeof(VAR_8));
 FUNC_6(VAR_1->Fifo, VAR_7->Name, FUNC_5(VAR_7->Name));
 VAR_7->Crc32 = 0xffffffff;

 VAR_1->CurrentFile = VAR_7;
}
