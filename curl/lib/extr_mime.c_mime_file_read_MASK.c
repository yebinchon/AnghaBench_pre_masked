
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fp; } ;
typedef TYPE_1__ curl_mimepart ;


 size_t VAR_0 ;
 size_t FUNC_0 (char*,size_t,size_t,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static size_t FUNC_2(char *VAR_1, size_t VAR_2, size_t VAR_3,
                             void *VAR_4)
{
  curl_mimepart *VAR_5 = (curl_mimepart *) VAR_4;

  if(FUNC_1(VAR_5))
    return VAR_0;

  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_5->fp);
}
