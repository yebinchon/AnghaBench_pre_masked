
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
 TYPE_1__* VAR_5 ;

__attribute__((used)) static int
FUNC_1(u32 VAR_6)
{
 int VAR_7 = 0;


 if (VAR_6 & VAR_3) {
  VAR_7 = (VAR_6 & 0xff);

  if (VAR_7 >= VAR_4)
   VAR_7 = VAR_7 - VAR_4;

  VAR_7 += VAR_0;

  if (VAR_7 >= VAR_2)
   VAR_7 += 1;
  if (VAR_7 >= VAR_0 && VAR_7 <= VAR_1)
   return VAR_7;


 } else {
  for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_5); VAR_7++)
   if (VAR_5[VAR_7].plcp == (VAR_6 & 0xFF))
    return VAR_7;
 }

 return -1;
}
