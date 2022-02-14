
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_3__ {int size; char* data; int header; } ;
typedef TYPE_1__ WU_WEBPAGE ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,char*,char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,int,int *) ;

__attribute__((used)) static WU_WEBPAGE *FUNC_6(wchar_t *VAR_2)
{
 WU_WEBPAGE *VAR_3;

 if(VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = (WU_WEBPAGE*)FUNC_2(sizeof(WU_WEBPAGE));
 VAR_3->size = FUNC_1(VAR_2);
 VAR_3->data = (char*)FUNC_2(VAR_3->size);
 FUNC_5(VAR_3->data, VAR_3->size, VAR_2);

 VAR_3->header = FUNC_3("HTTP/1.1", "202", "OK");
 FUNC_0(VAR_3->header, FUNC_4("Content-Type", VAR_0));
 FUNC_0(VAR_3->header, FUNC_4("Connection", "Keep-Alive"));
 FUNC_0(VAR_3->header, FUNC_4("Keep-Alive", VAR_1));

 return VAR_3;
}
