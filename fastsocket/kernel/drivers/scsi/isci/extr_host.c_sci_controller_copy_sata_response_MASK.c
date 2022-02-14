
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dev_to_host_fis {int dummy; } ;


 int FUNC_0 (void*,void*,int) ;

void FUNC_1(void *VAR_0,
           void *VAR_1,
           void *VAR_2)
{

 FUNC_0(VAR_0, VAR_1, sizeof(u32));

 FUNC_0(VAR_0 + sizeof(u32),
        VAR_2,
        sizeof(struct dev_to_host_fis) - sizeof(u32));
}
