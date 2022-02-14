
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 size_t FUNC_0 (int,int ) ;

int FUNC_1(int VAR_1, const int *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6, VAR_7 = 0;

 for (VAR_6 = 0; VAR_6 <= VAR_3; VAR_6++)
 {
  int VAR_8, VAR_9, VAR_10;

  if (!(VAR_1 & (1 << VAR_6)))
   continue;

  VAR_8 = VAR_2[FUNC_0(VAR_6, VAR_0)];
  if (!VAR_8)
   continue;

  if (!(VAR_4 & (1 << VAR_6))) {
   VAR_7 |= VAR_8;
   continue;
  }

  VAR_9 = VAR_8 & VAR_5;
  VAR_10 = VAR_3;
  if (VAR_9) {

   for (VAR_10 = VAR_6 + 1; VAR_10 <= VAR_3; VAR_10++)
    if ( (VAR_1 & (1 << VAR_10)) && (VAR_2[FUNC_0(VAR_10, VAR_0)] & VAR_9) ) {
     VAR_7 |= VAR_9 & VAR_2[FUNC_0(VAR_10, VAR_0)];
     VAR_1 &= ~((1 << VAR_6) | (1 << VAR_10));
     break;
    }
  }

  if (VAR_10 >= VAR_3)
   VAR_7 |= VAR_8 & ~VAR_5;
 }

 return VAR_7;
}
