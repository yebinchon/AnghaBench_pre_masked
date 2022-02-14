
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ name; } ;
typedef TYPE_1__ mime_encoder ;
struct TYPE_6__ {TYPE_1__ const* encoder; } ;
typedef TYPE_2__ curl_mimepart ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_0 (char const*,scalar_t__) ;

CURLcode FUNC_1(curl_mimepart *VAR_3, const char *VAR_4)
{
  CURLcode VAR_5 = VAR_0;
  const mime_encoder *VAR_6;

  if(!VAR_3)
    return VAR_5;

  VAR_3->encoder = ((void*)0);

  if(!VAR_4)
    return VAR_1;

  for(VAR_6 = VAR_2; VAR_6->name; VAR_6++)
    if(FUNC_0(VAR_4, VAR_6->name)) {
      VAR_3->encoder = VAR_6;
      VAR_5 = VAR_1;
    }

  return VAR_5;
}
