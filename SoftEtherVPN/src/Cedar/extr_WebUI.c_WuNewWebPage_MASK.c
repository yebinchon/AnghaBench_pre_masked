
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; char* data; int header; } ;
typedef TYPE_1__ WU_WEBPAGE ;
typedef int UINT ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,char*,int) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*,char*,char*) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static WU_WEBPAGE *FUNC_6(char *VAR_3, UINT VAR_4, char *VAR_5)
{
 WU_WEBPAGE *VAR_6;

 if(VAR_3 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_6 = (WU_WEBPAGE*)FUNC_3(sizeof(WU_WEBPAGE));
 VAR_6->size = VAR_4;
 VAR_6->data = (char*)FUNC_3(VAR_4);
 FUNC_1(VAR_6->data, VAR_3, VAR_4);

 VAR_6->header = FUNC_4("HTTP/1.1", "202", "OK");
 FUNC_0(VAR_6->header, FUNC_5("Connection", "Keep-Alive"));
 FUNC_0(VAR_6->header, FUNC_5("Keep-Alive", VAR_2));

 if(FUNC_2(VAR_5, "jpg"))
 {
  FUNC_0(VAR_6->header, FUNC_5("Content-Type", VAR_0));
 }
 FUNC_0(VAR_6->header, FUNC_5("Content-Type", VAR_1));

 return VAR_6;
}
