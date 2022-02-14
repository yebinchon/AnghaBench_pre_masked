
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; int easy; int filename; int name; int mimetype; int userheaders; int curlheaders; } ;
typedef TYPE_1__ curl_mimepart ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;

void FUNC_4(curl_mimepart *VAR_1)
{
  FUNC_2(VAR_1);
  FUNC_3(VAR_1->curlheaders);
  if(VAR_1->flags & VAR_0)
    FUNC_3(VAR_1->userheaders);
  FUNC_1(VAR_1->mimetype);
  FUNC_1(VAR_1->name);
  FUNC_1(VAR_1->filename);
  FUNC_0(VAR_1, VAR_1->easy);
}
