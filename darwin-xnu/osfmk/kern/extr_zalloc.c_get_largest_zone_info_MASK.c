
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* zone_t ;
typedef int uint64_t ;
struct TYPE_3__ {int cur_size; int zone_name; } ;


 int FUNC_0 (char*,int ,size_t) ;
 TYPE_1__* FUNC_1 () ;

void FUNC_2(char *VAR_0, size_t VAR_1, uint64_t *VAR_2)
{
 zone_t VAR_3 = FUNC_1();
 FUNC_0(VAR_0, VAR_3->zone_name, VAR_1);
 *VAR_2 = VAR_3->cur_size;
}
