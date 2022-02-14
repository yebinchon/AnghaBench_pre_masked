
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct clk {TYPE_1__* parent; } ;
struct TYPE_3__ {unsigned long (* get_rate ) (TYPE_1__*) ;} ;


 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 unsigned long FUNC_3 (unsigned long) ;
 TYPE_1__ VAR_6 ;
 unsigned long FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static long FUNC_5(struct clk *VAR_7, unsigned long VAR_8,
    u32 *VAR_9)
{
 unsigned long VAR_10;
 unsigned long VAR_11 = 0;
 unsigned long VAR_12;
 unsigned long VAR_13;
 unsigned long VAR_14;
 unsigned long VAR_15 = 0;
 unsigned long VAR_16;
 unsigned long VAR_17;
 unsigned long VAR_18 = 0;
 unsigned long VAR_19;
 unsigned long VAR_20 = ~0UL;
 u32 VAR_21;


 if (VAR_8 < 80000000UL || VAR_8 > 200000000UL)
  return -VAR_0;

 VAR_21 = FUNC_1(VAR_4, 4);
 VAR_16 = VAR_7->parent->get_rate(VAR_7->parent);


 VAR_13 = FUNC_0(VAR_16, 32000000UL);
 VAR_14 = VAR_16 / 6000000UL;

 if (VAR_14 < VAR_13)
  return -VAR_0;

 for (VAR_12 = VAR_13; VAR_12 <= VAR_14; VAR_12++) {
  VAR_17 = (VAR_16 + VAR_12 / 2) / VAR_12;
  VAR_10 = (VAR_8 + VAR_17 / 2) / VAR_17;

  if (VAR_10 == 0)
   continue;

  VAR_18 = VAR_17 * VAR_10;
  VAR_19 = FUNC_3(VAR_18 - VAR_8);

  if (VAR_19 < VAR_20) {
   VAR_11 = VAR_10;
   VAR_15 = VAR_12;
   VAR_20 = VAR_19;
  }

  if (VAR_19 == 0)
   break;
 }

 if (VAR_15 == 0)
  return -VAR_0;

 VAR_21 |= FUNC_1(VAR_3, VAR_11 - 1);
 VAR_21 |= FUNC_1(VAR_2, VAR_15 - 1);
 VAR_21 |= FUNC_1(VAR_1, 16);

 if (VAR_7->parent == &VAR_6)
  VAR_21 |= FUNC_2(VAR_5);

 *VAR_9 = VAR_21;

 return VAR_18;
}
