
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slgt_info {int port_count; scalar_t__* port_array; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct slgt_info *VAR_0)
{
 int VAR_1;
 for (VAR_1=0; VAR_1 < VAR_0->port_count; ++VAR_1) {
  if (VAR_0->port_array[VAR_1])
   FUNC_0(VAR_0->port_array[VAR_1]);
 }
}
