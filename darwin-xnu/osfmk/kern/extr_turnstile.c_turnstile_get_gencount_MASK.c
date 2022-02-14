
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union turnstile_type_gencount {int ts_gencount; int value; } ;
typedef int uint32_t ;
struct turnstile {int ts_type_gencount; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static uint32_t
FUNC_1(struct turnstile *VAR_1)
{
 union turnstile_type_gencount VAR_2;

 VAR_2.value = FUNC_0(&VAR_1->ts_type_gencount, VAR_0);
 return (uint32_t) VAR_2.ts_gencount;
}
