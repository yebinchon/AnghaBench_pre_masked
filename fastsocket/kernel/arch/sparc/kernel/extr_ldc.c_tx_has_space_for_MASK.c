
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ldc_channel {unsigned long tx_tail; unsigned long tx_num_entries; unsigned int mss; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (struct ldc_channel*) ;
 unsigned long FUNC_1 (struct ldc_channel*,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct ldc_channel *VAR_1, unsigned int VAR_2)
{
 unsigned long VAR_3, VAR_4, VAR_5, VAR_6;
 unsigned int VAR_7;

 VAR_3 = FUNC_0(VAR_1);
 VAR_4 = VAR_1->tx_tail;
 VAR_5 = FUNC_1(VAR_1, VAR_4);
 if (VAR_5 == VAR_3)
  return 0;

 if (VAR_3 > VAR_5)
  VAR_6 = VAR_3 - VAR_5;
 else
  VAR_6 = (VAR_3 +
   ((VAR_1->tx_num_entries * VAR_0) - VAR_5));
 VAR_6 /= VAR_0;
 VAR_7 = VAR_1->mss;

 if (VAR_6 * VAR_7 < VAR_2)
  return 0;

 return 1;
}
