
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct necp_client {int reference_count; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct necp_client*) ;
 int FUNC_2 (struct necp_client*) ;

__attribute__((used)) static bool
FUNC_3(struct necp_client *VAR_0)
{
 FUNC_1(VAR_0);

 uint32_t VAR_1 = VAR_0->reference_count;

 FUNC_0(VAR_0->reference_count != 0);
 if (--VAR_0->reference_count == 0) {
  FUNC_2(VAR_0);
 }

 return (VAR_1 == 1);
}
