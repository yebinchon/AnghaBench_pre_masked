
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union turnstile_type_gencount {int value; int ts_gencount; int ts_type; } ;
typedef int turnstile_type_t ;
struct turnstile {int ts_type_gencount; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct turnstile *VAR_1, turnstile_type_t VAR_2)
{
 union turnstile_type_gencount VAR_3;


 VAR_3.value = FUNC_0(&VAR_1->ts_type_gencount, VAR_0);
 VAR_3.ts_type = VAR_2;
 VAR_3.ts_gencount++;
 FUNC_1(&VAR_1->ts_type_gencount, VAR_3.value, VAR_0);
}
