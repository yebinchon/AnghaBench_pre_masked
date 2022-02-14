
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_volsync {int creation; } ;
typedef int __be32 ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(const __be32 **VAR_0,
      struct afs_volsync *VAR_1)
{
 const __be32 *VAR_2 = *VAR_0;

 VAR_1->creation = FUNC_0(*VAR_2++);
 VAR_2++;
 VAR_2++;
 VAR_2++;
 VAR_2++;
 VAR_2++;
 *VAR_0 = VAR_2;
}
