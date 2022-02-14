
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_9__ {TYPE_1__* filePath; int fileBuffer; int fileCompat; } ;
struct TYPE_8__ {int data; } ;
typedef TYPE_1__* StringInfo ;
typedef TYPE_2__ FileOutputStream ;
typedef scalar_t__ File ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,int const,int const) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 () ;
 TYPE_2__* FUNC_7 (int) ;

__attribute__((used)) static FileOutputStream *
FUNC_8(StringInfo VAR_8, uint32 VAR_9)
{
 FileOutputStream *VAR_10 = ((void*)0);
 File VAR_11 = 0;
 uint32 VAR_12 = 0;
 const int VAR_13 = (VAR_1 | VAR_2 | VAR_3 | VAR_4 | VAR_5);
 const int VAR_14 = (VAR_6 | VAR_7);

 VAR_10 = FUNC_7(VAR_9 * sizeof(FileOutputStream));

 for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++)
 {
  StringInfo VAR_15 = FUNC_2(VAR_8, VAR_12);

  VAR_11 = FUNC_1(VAR_15->data, VAR_13, VAR_14);
  if (VAR_11 < 0)
  {
   FUNC_3(VAR_0, (FUNC_4(),
       FUNC_5("could not open file \"%s\": %m", VAR_15->data)));
  }

  VAR_10[VAR_12].fileCompat = FUNC_0(
   VAR_11);
  VAR_10[VAR_12].fileBuffer = FUNC_6();
  VAR_10[VAR_12].filePath = VAR_15;
 }

 return VAR_10;
}
