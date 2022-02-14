
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct controller_data_s {scalar_t__ rt; scalar_t__ lt; scalar_t__ back; scalar_t__ start; scalar_t__ down; scalar_t__ up; scalar_t__ right; scalar_t__ left; scalar_t__ x; scalar_t__ y; scalar_t__ a; scalar_t__ b; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct controller_data_s*,unsigned int) ;
 int * VAR_13 ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(void *VAR_14)
{
   (void)VAR_14;
   for (unsigned VAR_15 = 0; VAR_15 < VAR_0; VAR_15++)
   {
      struct controller_data_s VAR_16;
      FUNC_1();
      FUNC_0(&VAR_16, VAR_15);

      uint64_t *VAR_17 = &VAR_13[VAR_15];

      *VAR_17 |= VAR_16.b ? VAR_1 : 0;
      *VAR_17 |= VAR_16.a ? VAR_2 : 0;
      *VAR_17 |= VAR_16.y ? VAR_11 : 0;
      *VAR_17 |= VAR_16.x ? VAR_12 : 0;
      *VAR_17 |= VAR_16.left ? VAR_5 : 0;
      *VAR_17 |= VAR_16.right ? VAR_7 : 0;
      *VAR_17 |= VAR_16.up ? VAR_10 : 0;
      *VAR_17 |= VAR_16.down ? VAR_3 : 0;
      *VAR_17 |= VAR_16.start ? VAR_9 : 0;
      *VAR_17 |= VAR_16.back ? VAR_8 : 0;
      *VAR_17 |= VAR_16.lt ? VAR_4 : 0;
      *VAR_17 |= VAR_16.rt ? VAR_6 : 0;
   }
}
