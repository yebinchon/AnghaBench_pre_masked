
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ curl_off_t ;
struct TYPE_5__ {struct TYPE_5__* nextpart; } ;
typedef TYPE_1__ curl_mimepart ;
struct TYPE_7__ {scalar_t__ state; } ;
struct TYPE_6__ {TYPE_3__ state; TYPE_1__* firstpart; } ;
typedef TYPE_2__ curl_mime ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_3__*,scalar_t__,int *) ;

__attribute__((used)) static int FUNC_2(void *VAR_4, curl_off_t VAR_5, int VAR_6)
{
  curl_mime *VAR_7 = (curl_mime *) VAR_4;
  curl_mimepart *VAR_8;
  int VAR_9 = VAR_1;

  if(VAR_6 != VAR_3 || VAR_5)
    return VAR_0;

  if(VAR_7->state.state == VAR_2)
   return VAR_1;

  for(VAR_8 = VAR_7->firstpart; VAR_8; VAR_8 = VAR_8->nextpart) {
    int VAR_10 = FUNC_0(VAR_8);
    if(VAR_10 != VAR_1)
      VAR_9 = VAR_10;
  }

  if(VAR_9 == VAR_1)
    FUNC_1(&VAR_7->state, VAR_2, ((void*)0));

  return VAR_9;
}
