
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct svc_rqst {int dummy; } ;
struct svc_export {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ,int ,int ,int *) ;
 struct svc_export* FUNC_1 (struct svc_rqst*,int ,int *) ;

__attribute__((used)) static struct svc_export *FUNC_2(struct svc_rqst *VAR_1)
{
 u32 VAR_2[2];

 FUNC_0(VAR_0, VAR_2, 0, 0, 0, ((void*)0));

 return FUNC_1(VAR_1, VAR_0, VAR_2);
}
