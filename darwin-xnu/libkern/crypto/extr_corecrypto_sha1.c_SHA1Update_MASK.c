
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccdigest_info {int dummy; } ;
struct TYPE_2__ {int (* ccdigest_update_fn ) (struct ccdigest_info const*,int ,size_t,void const*) ;struct ccdigest_info* ccsha1_di; } ;
typedef int SHA1_CTX ;


 int FUNC_0 (struct ccdigest_info const*,int ,int *) ;
 int FUNC_1 (struct ccdigest_info const*,int *,int ) ;
 int FUNC_2 (struct ccdigest_info const*,int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (struct ccdigest_info const*,int ,size_t,void const*) ;

void FUNC_4(SHA1_CTX *VAR_2, const void *VAR_3, size_t VAR_4)
{
 const struct ccdigest_info *VAR_5=VAR_1->ccsha1_di;
 FUNC_2(VAR_5, VAR_0);

 FUNC_1(VAR_5, VAR_2, VAR_0);
 VAR_1->ccdigest_update_fn(VAR_5, VAR_0, VAR_4, VAR_3);
 FUNC_0(VAR_5, VAR_0, VAR_2);
}
