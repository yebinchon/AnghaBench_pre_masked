
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ curl_off_t ;
struct TYPE_5__ {struct TYPE_5__* nextpart; } ;
typedef TYPE_1__ curl_mimepart ;
struct TYPE_6__ {TYPE_1__* firstpart; int boundary; } ;
typedef TYPE_2__ curl_mime ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static curl_off_t FUNC_2(curl_mime *VAR_0)
{
  curl_off_t VAR_1;
  size_t VAR_2;
  curl_mimepart *VAR_3;

  if(!VAR_0)
    return 0;

  VAR_2 = 4 + FUNC_1(VAR_0->boundary) + 2;
  VAR_1 = VAR_2;

  for(VAR_3 = VAR_0->firstpart; VAR_3; VAR_3 = VAR_3->nextpart) {
    curl_off_t VAR_4 = FUNC_0(VAR_3);

    if(VAR_4 < 0)
      VAR_1 = VAR_4;

    if(VAR_1 >= 0)
      VAR_1 += VAR_2 + VAR_4;
  }

  return VAR_1;
}
