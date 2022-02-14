
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int plcp; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(u32 VAR_7)
{
 int VAR_8 = 0;


 if (VAR_7 & VAR_5) {
  VAR_8 = FUNC_1(VAR_7);

  if (VAR_8 >= VAR_4)
   VAR_8 = VAR_8 - VAR_4;
  else if (VAR_8 >= VAR_3)
   VAR_8 = VAR_8 - VAR_3;

  VAR_8 += VAR_0;

  if (VAR_8 >= VAR_2)
   VAR_8 += 1;
  if ((VAR_8 >= VAR_0) && (VAR_8 <= VAR_1))
   return VAR_8;


 } else {
  for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_6); VAR_8++)
   if (VAR_6[VAR_8].plcp ==
     FUNC_1(VAR_7))
    return VAR_8;
 }

 return -1;
}
