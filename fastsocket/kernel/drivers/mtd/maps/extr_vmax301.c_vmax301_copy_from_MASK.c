
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_info {scalar_t__ map_priv_2; } ;
typedef long ssize_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (void*,scalar_t__,unsigned long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct map_info*,unsigned long) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(struct map_info *VAR_3, void *VAR_4, unsigned long VAR_5, ssize_t VAR_6)
{
 while(VAR_6) {
  unsigned long VAR_7 = VAR_6;
  if (VAR_6 > (VAR_0 - (VAR_5 & VAR_1)))
   VAR_7 = VAR_0-(VAR_5 & VAR_1);
  FUNC_1(&VAR_2);
  FUNC_3(VAR_3, VAR_5);
  FUNC_0(VAR_4, VAR_3->map_priv_2 + VAR_5, VAR_7);
  FUNC_2(&VAR_2);
  VAR_4 += VAR_7;
  VAR_5 += VAR_7;
  VAR_6 -= VAR_7;
 }
}
