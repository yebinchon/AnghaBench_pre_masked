
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial_state {scalar_t__ info; int count; } ;
typedef int ser_info_t ;


 int VAR_0 ;
 struct serial_state* VAR_1 ;

__attribute__((used)) static int FUNC_0(int VAR_2, ser_info_t **VAR_3)
{
 struct serial_state *VAR_4;

 VAR_4 = VAR_1 + VAR_2;
 if (VAR_4->info) {
  VAR_4->count++;
  *VAR_3 = (ser_info_t *)VAR_4->info;
  return 0;
 }
 else {
  return -VAR_0;
 }
}
