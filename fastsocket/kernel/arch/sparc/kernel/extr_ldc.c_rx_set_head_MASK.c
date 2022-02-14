
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ldc_channel {unsigned long rx_head; } ;


 int FUNC_0 (struct ldc_channel*,unsigned long) ;
 int FUNC_1 (struct ldc_channel*) ;

__attribute__((used)) static int FUNC_2(struct ldc_channel *VAR_0, unsigned long VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0, VAR_1);

 if (VAR_2 < 0)
  return FUNC_1(VAR_0);

 VAR_0->rx_head = VAR_1;
 return 0;
}
