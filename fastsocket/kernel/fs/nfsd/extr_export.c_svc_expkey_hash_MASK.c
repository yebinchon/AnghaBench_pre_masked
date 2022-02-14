
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_expkey {int ek_fsidtype; int ek_client; scalar_t__ ek_fsid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(struct svc_expkey *VAR_2)
{
 int VAR_3 = VAR_2->ek_fsidtype;
 char * VAR_4 = (char*)VAR_2->ek_fsid;
 int VAR_5 = FUNC_2(VAR_2->ek_fsidtype);

 VAR_3 ^= FUNC_0(VAR_4, VAR_5, VAR_0);
 VAR_3 ^= FUNC_1(VAR_2->ek_client, VAR_0);
 VAR_3 &= VAR_1;
 return VAR_3;
}
