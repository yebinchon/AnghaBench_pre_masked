
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ curl_off_t ;
struct TYPE_3__ {int fp; } ;
typedef TYPE_1__ curl_mimepart ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,long,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(void *VAR_4, curl_off_t VAR_5, int VAR_6)
{
  curl_mimepart *VAR_7 = (curl_mimepart *) VAR_4;

  if(VAR_6 == VAR_3 && !VAR_5 && !VAR_7->fp)
    return VAR_2;

  if(FUNC_1(VAR_7))
    return VAR_1;

  return FUNC_0(VAR_7->fp, (long) VAR_5, VAR_6)?
               VAR_0: VAR_2;
}
