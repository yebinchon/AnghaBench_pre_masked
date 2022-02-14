
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t (* append ) (int ,char const*,size_t) ;int arg; int ccsid; } ;
typedef TYPE_1__ cfcdata ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,size_t,int ,char const*,size_t,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 size_t FUNC_3 (int ,char const*,size_t) ;
 size_t FUNC_4 (int ,char*,int) ;

__attribute__((used)) static size_t
FUNC_5(void *VAR_2, const char *VAR_3, size_t VAR_4)

{
  cfcdata * VAR_5;
  char *VAR_6;
  int VAR_7;
  size_t VAR_8;

  VAR_5 = (cfcdata *) VAR_2;

  if((long) VAR_4 <= 0)
    return (*VAR_5->append)(VAR_5->arg, VAR_3, VAR_4);

  VAR_6 = FUNC_2(VAR_1 * VAR_4);

  if(!VAR_6)
    return (size_t) -1;

  VAR_7 = FUNC_0(VAR_6, VAR_1 * VAR_4, VAR_5->ccsid, VAR_3, VAR_4, VAR_0);

  if(VAR_7 < 0) {
    FUNC_1(VAR_6);
    return (size_t) -1;
    }

  VAR_8 = (*VAR_5->append)(VAR_5->arg, VAR_6, VAR_7);
  FUNC_1(VAR_6);
  return VAR_8 == VAR_7? VAR_4: -1;
}
