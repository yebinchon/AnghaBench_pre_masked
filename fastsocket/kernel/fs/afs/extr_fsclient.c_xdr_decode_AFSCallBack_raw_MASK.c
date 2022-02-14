
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_callback {void* type; void* expiry; void* version; } ;
typedef int __be32 ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(const __be32 **VAR_0,
           struct afs_callback *VAR_1)
{
 const __be32 *VAR_2 = *VAR_0;

 VAR_1->version = FUNC_0(*VAR_2++);
 VAR_1->expiry = FUNC_0(*VAR_2++);
 VAR_1->type = FUNC_0(*VAR_2++);
 *VAR_0 = VAR_2;
}
