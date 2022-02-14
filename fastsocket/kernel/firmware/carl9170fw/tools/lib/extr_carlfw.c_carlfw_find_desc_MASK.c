
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct carlfw_list_entry {int dummy; } ;
struct carlfw {int dummy; } ;


 void* FUNC_0 (struct carlfw_list_entry*) ;
 struct carlfw_list_entry* FUNC_1 (struct carlfw*,int const*,unsigned int const,int const) ;

void *FUNC_2(struct carlfw *VAR_0,
         const uint8_t VAR_1[4],
         const unsigned int VAR_2,
         const uint8_t VAR_3)
{
 struct carlfw_list_entry *VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);

 return VAR_4 ? FUNC_0(VAR_4) : ((void*)0);
}
