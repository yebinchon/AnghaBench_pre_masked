
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * data; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int ,TYPE_1__*,int ,int ,int ,int ,int,int ) ;
 int FUNC_4 (int ,int ,int ,TYPE_1__*,int ,int ,int ,int ,int,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 TYPE_1__* VAR_11 ;
 int VAR_12 ;
 int** VAR_13 ;
 int VAR_14 ;

void FUNC_6 (void)
{

    static int VAR_15;
    int VAR_16;
    int VAR_17;



    if (VAR_9)
    {

 VAR_17 = FUNC_2();
 VAR_16 = VAR_17 - VAR_15;
 VAR_15 = VAR_17;
 if (VAR_16 > 20) VAR_16 = 20;

 for (VAR_17=0 ; VAR_17<VAR_16*2 ; VAR_17+=2)
     VAR_13[0][ (VAR_1-1)*VAR_2 + VAR_17] = 0xff;
 for ( ; VAR_17<20*2 ; VAR_17+=2)
     VAR_13[0][ (VAR_1-1)*VAR_2 + VAR_17] = 0x0;

    }


    if (VAR_12 == 2)
    {
 unsigned int *VAR_18[2];
 unsigned int *VAR_19;
 int VAR_20, VAR_21, VAR_22;
 unsigned int VAR_23;
 unsigned int VAR_24;
 unsigned int VAR_25;

 VAR_19 = (unsigned int *) (VAR_13[0]);
 for (VAR_22=0 ; VAR_22<2 ; VAR_22++)
     VAR_18[VAR_22] = (unsigned int *) &VAR_11->data[VAR_22*VAR_8];

 VAR_21 = VAR_1;
 while (VAR_21--)
 {
     VAR_20 = VAR_2;
     do
     {
  VAR_25 = *VAR_19++;
  VAR_23 = (VAR_25 & 0xff000000)
      | ((VAR_25>>8) & 0xffff00)
      | ((VAR_25>>16) & 0xff);
  VAR_24 = ((VAR_25<<16) & 0xff000000)
      | ((VAR_25<<8) & 0xffff00)
      | (VAR_25 & 0xff);






  *VAR_18[0]++ = VAR_24;
  *VAR_18[1]++ = VAR_24;
  *VAR_18[0]++ = VAR_23;
  *VAR_18[1]++ = VAR_23;

     } while (VAR_20-=4);
     VAR_18[0] += VAR_8/4;
     VAR_18[1] += VAR_8/4;
 }

    }
    else if (VAR_12 == 3)
    {
 unsigned int *VAR_26[3];
 unsigned int *VAR_27;
 int VAR_28, VAR_29, VAR_30;
 unsigned int VAR_31[3];
 unsigned int VAR_32;

 VAR_27 = (unsigned int *) (VAR_13[0]);
 for (VAR_30=0 ; VAR_30<3 ; VAR_30++)
     VAR_26[VAR_30] = (unsigned int *) &VAR_11->data[VAR_30*VAR_8];

 VAR_29 = VAR_1;
 while (VAR_29--)
 {
     VAR_28 = VAR_2;
     do
     {
  VAR_32 = *VAR_27++;
  VAR_31[0] = (VAR_32 & 0xff000000)
      | ((VAR_32>>8) & 0xff0000)
      | ((VAR_32>>16) & 0xffff);
  VAR_31[1] = ((VAR_32<<8) & 0xff000000)
      | (VAR_32 & 0xffff00)
      | ((VAR_32>>8) & 0xff);
  VAR_31[2] = ((VAR_32<<16) & 0xffff0000)
      | ((VAR_32<<8) & 0xff00)
      | (VAR_32 & 0xff);
  *VAR_26[0]++ = VAR_31[2];
  *VAR_26[1]++ = VAR_31[2];
  *VAR_26[2]++ = VAR_31[2];
  *VAR_26[0]++ = VAR_31[1];
  *VAR_26[1]++ = VAR_31[1];
  *VAR_26[2]++ = VAR_31[1];
  *VAR_26[0]++ = VAR_31[0];
  *VAR_26[1]++ = VAR_31[0];
  *VAR_26[2]++ = VAR_31[0];

     } while (VAR_28-=4);
     VAR_26[0] += 2*VAR_8/4;
     VAR_26[1] += 2*VAR_8/4;
     VAR_26[2] += 2*VAR_8/4;
 }

    }
    else if (VAR_12 == 4)
    {

 void FUNC_0(unsigned *, double *);
   FUNC_0 ((unsigned *)(VAR_13[0]), (double *) (VAR_11->data));
    }

    if (VAR_10)
    {

 if (!FUNC_4( VAR_4,
    VAR_7,
    VAR_5,
    VAR_11,
    0, 0,
    0, 0,
    VAR_8, VAR_6,
    VAR_3 ))
     FUNC_0("XShmPutImage() failed\n");


 VAR_14 = 0;
 do
 {
     FUNC_1();
 } while (!VAR_14);

    }
    else
    {


 FUNC_3( VAR_4,
   VAR_7,
   VAR_5,
   VAR_11,
   0, 0,
   0, 0,
   VAR_8, VAR_6 );


 FUNC_5(VAR_4, VAR_0);

    }

}
