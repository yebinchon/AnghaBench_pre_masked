
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct necp_client {scalar_t__ reference_count; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct necp_client*) ;

__attribute__((used)) static void
FUNC_2(struct necp_client *VAR_0)
{
 FUNC_1(VAR_0);

 VAR_0->reference_count++;
 FUNC_0(VAR_0->reference_count != 0);
}
