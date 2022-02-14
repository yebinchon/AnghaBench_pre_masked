
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ boolean ;
struct TYPE_4__ {int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int,int ,TYPE_1__*) ;
 int FUNC_2 (int,int,int ,TYPE_1__*) ;
 TYPE_1__** VAR_3 ;
 int FUNC_3 (char) ;

int
FUNC_4
( int VAR_4,
  int VAR_5,
  boolean VAR_6,
  char* VAR_7 )
{
    int VAR_8;
    int VAR_9;

    while (*VAR_7)
    {
 VAR_8 = FUNC_3(*VAR_7) - VAR_1;
 VAR_7++;
 if (VAR_8 < 0 || VAR_8> VAR_0)
 {
     VAR_4 += 4;
     continue;
 }

 VAR_9 = FUNC_0 (VAR_3[VAR_8]->width);
 if (VAR_4+VAR_9 > VAR_2)
     break;
 if (VAR_6)
     FUNC_2(VAR_4, VAR_5, 0, VAR_3[VAR_8]);
 else
     FUNC_1(VAR_4, VAR_5, 0, VAR_3[VAR_8]);
 VAR_4+=VAR_9;
    }

    return VAR_4;
}
