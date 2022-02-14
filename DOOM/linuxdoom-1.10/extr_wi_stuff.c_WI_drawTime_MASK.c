
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int width; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int,int ,TYPE_1__*) ;
 int FUNC_2 (int,int,int,int) ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;

void
FUNC_3
( int VAR_3,
  int VAR_4,
  int VAR_5 )
{

    int VAR_6;
    int VAR_7;

    if (VAR_5<0)
 return;

    if (VAR_5 <= 61*59)
    {
 VAR_6 = 1;

 do
 {
     VAR_7 = (VAR_5 / VAR_6) % 60;
     VAR_3 = FUNC_2(VAR_3, VAR_4, VAR_7, 2) - FUNC_0(VAR_1->width);
     VAR_6 *= 60;


     if (VAR_6==60 || VAR_5 / VAR_6)
  FUNC_1(VAR_3, VAR_4, VAR_0, VAR_1);

 } while (VAR_5 / VAR_6);
    }
    else
    {

 FUNC_1(VAR_3 - FUNC_0(VAR_2->width), VAR_4, VAR_0, VAR_2);
    }
}
