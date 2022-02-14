
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* nextpart; TYPE_2__* parent; } ;
typedef TYPE_1__ curl_mimepart ;
struct TYPE_7__ {TYPE_1__* lastpart; TYPE_1__* firstpart; int easy; } ;
typedef TYPE_2__ curl_mime ;


 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (int) ;

curl_mimepart *FUNC_2(curl_mime *VAR_0)
{
  curl_mimepart *VAR_1;

  if(!VAR_0)
    return ((void*)0);

  VAR_1 = (curl_mimepart *) FUNC_1(sizeof(*VAR_1));

  if(VAR_1) {
    FUNC_0(VAR_1, VAR_0->easy);
    VAR_1->parent = VAR_0;

    if(VAR_0->lastpart)
      VAR_0->lastpart->nextpart = VAR_1;
    else
      VAR_0->firstpart = VAR_1;

    VAR_0->lastpart = VAR_1;
  }

  return VAR_1;
}
