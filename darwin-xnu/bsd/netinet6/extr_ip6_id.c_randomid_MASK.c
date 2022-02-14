
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
typedef int u_int32_t ;
typedef scalar_t__ time_t ;
struct randomtab {scalar_t__ ru_counter; scalar_t__ ru_max; scalar_t__ ru_reseed; int ru_x; int ru_b; int ru_m; int ru_seed; int ru_seed2; int ru_msb; int ru_n; int ru_g; scalar_t__ ru_a; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct randomtab*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int,int ) ;

__attribute__((used)) static u_int32_t
FUNC_4(struct randomtab *VAR_0)
{
 time_t VAR_1 = (time_t)FUNC_2();
 int VAR_2, VAR_3;
 u_int32_t VAR_4;

 if (VAR_0->ru_counter >= VAR_0->ru_max || VAR_1 > VAR_0->ru_reseed)
  FUNC_1(VAR_0);

 VAR_4 = FUNC_0();


 VAR_3 = VAR_4 & 0x3; VAR_4 = VAR_4 >> 2;
 if (VAR_0->ru_counter + VAR_3 >= VAR_0->ru_max)
  FUNC_1(VAR_0);

 for (VAR_2 = 0; VAR_2 <= VAR_3; VAR_2++) {

  VAR_0->ru_x = ((u_int64_t)VAR_0->ru_a * VAR_0->ru_x + VAR_0->ru_b) % VAR_0->ru_m;
 }

 VAR_0->ru_counter += VAR_2;

 return ((VAR_0->ru_seed ^ FUNC_3(VAR_0->ru_g, VAR_0->ru_seed2 ^ VAR_0->ru_x, VAR_0->ru_n)) |
     VAR_0->ru_msb);
}
