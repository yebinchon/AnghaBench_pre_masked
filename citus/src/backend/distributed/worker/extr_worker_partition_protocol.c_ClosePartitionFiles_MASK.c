
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32 ;
struct TYPE_6__ {int fd; } ;
struct TYPE_7__ {int filePath; int fileBuffer; TYPE_1__ fileCompat; } ;
typedef TYPE_2__ FileOutputStream ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_4(FileOutputStream *VAR_0, uint32 VAR_1)
{
 uint32 VAR_2 = 0;
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
 {
  FileOutputStream *VAR_3 = &VAR_0[VAR_2];

  FUNC_1(VAR_3);

  FUNC_0(VAR_3->fileCompat.fd);
  FUNC_2(VAR_3->fileBuffer);
  FUNC_2(VAR_3->filePath);
 }

 FUNC_3(VAR_0);
}
