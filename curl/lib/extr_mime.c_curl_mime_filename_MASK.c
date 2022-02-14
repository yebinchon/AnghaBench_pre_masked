
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * filename; } ;
typedef TYPE_1__ curl_mimepart ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*) ;

CURLcode FUNC_2(curl_mimepart *VAR_3, const char *VAR_4)
{
  if(!VAR_3)
    return VAR_0;

  FUNC_0(VAR_3->filename);
  VAR_3->filename = ((void*)0);

  if(VAR_4) {
    VAR_3->filename = FUNC_1(VAR_4);
    if(!VAR_3->filename)
      return VAR_2;
  }

  return VAR_1;
}
