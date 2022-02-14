
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ blksize; } ;
typedef TYPE_1__ tftp_state_data_t ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static CURLcode FUNC_2(tftp_state_data_t *VAR_2, size_t *VAR_3,
                                char *VAR_4, const char *VAR_5)
{
  if(( FUNC_1(VAR_5) + *VAR_3 + 1) > (size_t)VAR_2->blksize)
    return VAR_1;
  FUNC_0(VAR_4, VAR_5);
  *VAR_3 += FUNC_1(VAR_5) + 1;
  return VAR_0;
}
