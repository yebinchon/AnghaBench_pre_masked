
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_info {int dummy; } ;
typedef long ssize_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (void*,scalar_t__,unsigned long) ;
 int FUNC_1 (struct map_info*,unsigned long) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct map_info *VAR_4, void *VAR_5, unsigned long VAR_6, ssize_t VAR_7)
{
 while(VAR_7) {
  unsigned long VAR_8 = VAR_7;
  if (VAR_7 > (VAR_0 - (VAR_6 & VAR_1)))
   VAR_8 = VAR_0-(VAR_6 & VAR_1);

  FUNC_2(&VAR_3);
  FUNC_1(VAR_4, VAR_6);
  FUNC_0(VAR_5, VAR_2 + (VAR_6 & VAR_1), VAR_8);
  FUNC_3(&VAR_3);
  VAR_5 += VAR_8;
  VAR_6 += VAR_8;
  VAR_7 -= VAR_8;
 }
}
