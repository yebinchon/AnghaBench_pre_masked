
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int byte ;
typedef int boolean ;
struct TYPE_5__ {scalar_t__ c_class; int depth; scalar_t__ class; } ;
struct TYPE_4__ {int pixel; int flags; int red; int green; int blue; } ;
typedef int Colormap ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,TYPE_1__*,int) ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 TYPE_1__* VAR_6 ;
 int** VAR_7 ;
 size_t VAR_8 ;

void FUNC_1(Colormap VAR_9, byte *VAR_10)
{

    register int VAR_11;
    register int VAR_12;
    static boolean VAR_13 = 1;




    if (VAR_5.class == VAR_3 && VAR_5.depth == 8)

 {

     if (VAR_13)
     {
  VAR_13 = 0;
  for (VAR_11=0 ; VAR_11<256 ; VAR_11++)
  {
      VAR_6[VAR_11].pixel = VAR_11;
      VAR_6[VAR_11].flags = VAR_2|VAR_1|VAR_0;
  }
     }


     for (VAR_11=0 ; VAR_11<256 ; VAR_11++)
     {
  VAR_12 = VAR_7[VAR_8][*VAR_10++];
  VAR_6[VAR_11].red = (VAR_12<<8) + VAR_12;
  VAR_12 = VAR_7[VAR_8][*VAR_10++];
  VAR_6[VAR_11].green = (VAR_12<<8) + VAR_12;
  VAR_12 = VAR_7[VAR_8][*VAR_10++];
  VAR_6[VAR_11].blue = (VAR_12<<8) + VAR_12;
     }


     FUNC_0(VAR_4, VAR_9, VAR_6, 256);

 }
}
