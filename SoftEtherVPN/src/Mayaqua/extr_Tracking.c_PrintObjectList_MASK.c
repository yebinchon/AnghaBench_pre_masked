
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tmp ;
struct TYPE_4__ {int LineNumber; int FileName; int Size; int Address; int Name; int Id; int CreatedDate; } ;
typedef TYPE_1__ TRACKING_OBJECT ;
typedef int SYSTEMTIME ;


 int FUNC_0 (char*,int,int *) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int ,char*,int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;

void FUNC_5(TRACKING_OBJECT *VAR_1)
{
 char VAR_2[VAR_0];
 SYSTEMTIME VAR_3;
 FUNC_3(&VAR_3, VAR_1->CreatedDate);
 FUNC_0(VAR_2, sizeof(VAR_2), &VAR_3);
 FUNC_2(VAR_1);
 FUNC_1("%-4u - [%-6s] %s 0x%p size=%-5u %11s %u\n",
  VAR_1->Id, VAR_1->Name, VAR_2, FUNC_4(VAR_1->Address), VAR_1->Size, VAR_1->FileName, VAR_1->LineNumber);
}
