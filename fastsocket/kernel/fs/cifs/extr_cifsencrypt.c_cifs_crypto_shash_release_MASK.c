
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sdescmd5; int sdeschmacmd5; scalar_t__ hmacmd5; scalar_t__ md5; } ;
struct TCP_Server_Info {TYPE_1__ secmech; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;

void
FUNC_2(struct TCP_Server_Info *VAR_0)
{
 if (VAR_0->secmech.md5)
  FUNC_0(VAR_0->secmech.md5);

 if (VAR_0->secmech.hmacmd5)
  FUNC_0(VAR_0->secmech.hmacmd5);

 FUNC_1(VAR_0->secmech.sdeschmacmd5);

 FUNC_1(VAR_0->secmech.sdescmd5);
}
