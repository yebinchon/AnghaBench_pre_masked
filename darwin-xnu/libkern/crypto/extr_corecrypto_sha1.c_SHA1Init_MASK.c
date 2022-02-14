
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccdigest_info {int dummy; } ;
struct TYPE_2__ {int (* ccdigest_init_fn ) (struct ccdigest_info const*,int ) ;struct ccdigest_info* ccsha1_di; } ;
typedef int SHA1_CTX ;


 int FUNC_0 (struct ccdigest_info const*,int ,int *) ;
 int FUNC_1 (struct ccdigest_info const*,int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (struct ccdigest_info const*,int ) ;

void FUNC_3(SHA1_CTX *VAR_2)
{
 const struct ccdigest_info *VAR_3=VAR_1->ccsha1_di;
 FUNC_1(VAR_3, VAR_0);

 VAR_1->ccdigest_init_fn(VAR_3, VAR_0);

 FUNC_0(VAR_3, VAR_0, VAR_2);
}
