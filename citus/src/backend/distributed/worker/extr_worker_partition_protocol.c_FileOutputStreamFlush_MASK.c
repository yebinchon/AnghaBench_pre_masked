
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* filePath; int fileCompat; TYPE_2__* fileBuffer; } ;
struct TYPE_6__ {int len; int data; } ;
struct TYPE_5__ {int data; } ;
typedef TYPE_2__* StringInfo ;
typedef TYPE_3__ FileOutputStream ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int,int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_4(FileOutputStream *VAR_3)
{
 StringInfo VAR_4 = VAR_3->fileBuffer;
 int VAR_5 = 0;

 VAR_2 = 0;
 VAR_5 = FUNC_0(&VAR_3->fileCompat, VAR_4->data, VAR_4->len,
         VAR_1);
 if (VAR_5 != VAR_4->len)
 {
  FUNC_1(VAR_0, (FUNC_2(),
      FUNC_3("could not write %d bytes to partition file \"%s\"",
          VAR_4->len, VAR_3->filePath->data)));
 }
}
