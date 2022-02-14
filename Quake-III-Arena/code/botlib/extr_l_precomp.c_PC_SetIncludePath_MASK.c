
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* includepath; } ;
typedef TYPE_1__ source_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int ) ;

void FUNC_3(source_t *VAR_2, char *VAR_3)
{
 FUNC_2(VAR_2->includepath, VAR_3, VAR_0);

 if (VAR_2->includepath[FUNC_1(VAR_2->includepath)-1] != '\\' &&
  VAR_2->includepath[FUNC_1(VAR_2->includepath)-1] != '/')
 {
  FUNC_0(VAR_2->includepath, VAR_1);
 }
}
