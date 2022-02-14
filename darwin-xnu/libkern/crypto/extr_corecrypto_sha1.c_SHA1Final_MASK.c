
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccdigest_info {int dummy; } ;
struct TYPE_2__ {struct ccdigest_info* ccsha1_di; } ;
typedef int SHA1_CTX ;


 int FUNC_0 (struct ccdigest_info const*,int *,int ) ;
 int FUNC_1 (struct ccdigest_info const*,int ) ;
 int FUNC_2 (struct ccdigest_info const*,int ,void*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

void FUNC_3(void *VAR_2, SHA1_CTX *VAR_3)
{
 const struct ccdigest_info *VAR_4=VAR_1->ccsha1_di;
 FUNC_1(VAR_4, VAR_0);

 FUNC_0(VAR_4, VAR_3, VAR_0);
 FUNC_2(VAR_4, VAR_0, VAR_2);
}
