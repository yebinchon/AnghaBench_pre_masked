
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_3(unsigned int VAR_8)
{
 unsigned long VAR_9 = 0, VAR_10;
 int VAR_11, VAR_12 = 0;

 if (VAR_4 == 0)
  FUNC_0(VAR_2 - VAR_0, VAR_2);

 FUNC_1(&VAR_6, VAR_10);

 for (VAR_11 = 0; VAR_11 < VAR_7;) {
  if (VAR_5[VAR_11++] == 0) {
   if (++VAR_12 == VAR_8) {
    while (VAR_12--)
     VAR_5[--VAR_11] = 1;
    VAR_9 = VAR_3 + (VAR_11 << VAR_1);
    break;
   }
  } else
   VAR_12 = 0;
 }
 FUNC_2(&VAR_6, VAR_10);
 return VAR_9;
}
