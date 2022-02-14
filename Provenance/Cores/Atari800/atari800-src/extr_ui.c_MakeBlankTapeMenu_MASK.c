
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int description ;
struct TYPE_2__ {int (* fEditString ) (char*,char*,int) ;int (* fGetSaveFilename ) (char*,int ,int ) ;} ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static void FUNC_5(void)
{
 char VAR_6[VAR_2];
 char VAR_7[VAR_0];
 VAR_7[0] = '\0';
 FUNC_2(VAR_6, VAR_1, VAR_2);
 if (!VAR_4->fGetSaveFilename(VAR_6, VAR_3, VAR_5))
  return;
 if (!VAR_4->fEditString("Enter tape's description", VAR_7, sizeof(VAR_7)))
  return;
 if (!FUNC_0(VAR_6, VAR_7))
  FUNC_1(VAR_6);
}
