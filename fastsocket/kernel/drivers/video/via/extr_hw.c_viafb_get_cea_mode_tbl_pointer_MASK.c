
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct VideoModeTable {int ModeIndex; } ;


 struct VideoModeTable* VAR_0 ;
 struct VideoModeTable* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

struct VideoModeTable *FUNC_0(int VAR_4)
{
 struct VideoModeTable *VAR_5 = ((void*)0);
 int VAR_6 = 0;
 while ((VAR_6 < VAR_2) &&
   (VAR_4 != VAR_0[VAR_6].ModeIndex))
  VAR_6++;
 if ((VAR_6 < VAR_2))
  VAR_5 = &VAR_0[VAR_6];
  else {

  VAR_6 = 0;
  while ((VAR_6 < VAR_3) &&
    (VAR_4 != VAR_1[VAR_6].ModeIndex))
         VAR_6++;
  if (VAR_6 >= VAR_3)
   VAR_6 = 0;
  VAR_5 = &VAR_1[VAR_6];
 }
 return VAR_5;
}
