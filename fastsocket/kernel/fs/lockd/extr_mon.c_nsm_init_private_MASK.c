
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct timespec {int dummy; } ;
struct TYPE_2__ {int data; } ;
struct nsm_handle {TYPE_1__ sm_priv; } ;
typedef unsigned long s64 ;


 int FUNC_0 (struct timespec*) ;
 int FUNC_1 (unsigned long,int *) ;
 unsigned long FUNC_2 (struct timespec*) ;

__attribute__((used)) static void FUNC_3(struct nsm_handle *VAR_0)
{
 u64 *VAR_1 = (u64 *)&VAR_0->sm_priv.data;
 struct timespec VAR_2;
 s64 VAR_3;

 FUNC_0(&VAR_2);
 VAR_3 = FUNC_2(&VAR_2);
 FUNC_1(VAR_3, VAR_1);
 FUNC_1((unsigned long)VAR_0, VAR_1 + 1);
}
