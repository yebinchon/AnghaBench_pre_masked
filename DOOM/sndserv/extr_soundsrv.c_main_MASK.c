
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int member_1; int member_0; } ;
struct TYPE_2__ {int data; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_4 (int,int,int,int) ;
 int * VAR_4 ;
 int FUNC_5 (int) ;
 int VAR_5 ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int,char**) ;
 int FUNC_8 () ;
 int * VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (char*,int,int) ;
 int FUNC_10 () ;
 int FUNC_11 (int ,unsigned char*,int) ;
 int VAR_8 ;
 int FUNC_12 (int ,int *,int ,int ,struct timeval*) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int* VAR_11 ;
 int FUNC_13 () ;
 int FUNC_14 (int,int ,int ) ;

int
FUNC_15
( int VAR_12,
  char** VAR_13 )
{

    int VAR_14 = 0;
    int VAR_15;
    int VAR_16;
    int VAR_17;
    int VAR_18 = 0;

    unsigned char VAR_19[10];
    struct timeval VAR_20 = { 0, 0 };


    int VAR_21;
    int VAR_22;
    int VAR_23;

    int VAR_24;
    int VAR_25=0;


    FUNC_7(VAR_12, VAR_13);


    FUNC_8();

    FUNC_3(11025, 16);

    FUNC_2();

    if (VAR_9)
 FUNC_6(VAR_10, "ready\n");


    FUNC_1(&VAR_5);
    FUNC_0(0, &VAR_5);

    while (!VAR_14)
    {
 VAR_7++;

 if (!VAR_25)
 {
     do {
  VAR_8 = VAR_5;
  VAR_15 = FUNC_12(VAR_0, &VAR_8, 0, 0, &VAR_20);

  if (VAR_15 > 0)
  {


      VAR_16 = FUNC_11(0, VAR_19, 1);

      if (!VAR_16)
      {
   VAR_14 = 1;
   VAR_15 = 0;
      }
      else
      {
   if (VAR_9)
       FUNC_6(VAR_10, "cmd: %c", VAR_19[0]);

   switch (VAR_19[0])
   {
     case 'p':

       FUNC_11(0, VAR_19, 9);

       if (VAR_9)
       {
    VAR_19[9]=0;
    FUNC_6(VAR_10, "%s\n", VAR_19);
       }

       VAR_19[0] -=
    VAR_19[0]>='a' ? 'a'-10 : '0';
       VAR_19[1] -=
    VAR_19[1]>='a' ? 'a'-10 : '0';
       VAR_19[2] -=
    VAR_19[2]>='a' ? 'a'-10 : '0';
       VAR_19[3] -=
    VAR_19[3]>='a' ? 'a'-10 : '0';
       VAR_19[4] -=
    VAR_19[4]>='a' ? 'a'-10 : '0';
       VAR_19[5] -=
    VAR_19[5]>='a' ? 'a'-10 : '0';
       VAR_19[6] -=
    VAR_19[6]>='a' ? 'a'-10 : '0';
       VAR_19[7] -=
    VAR_19[7]>='a' ? 'a'-10 : '0';


       VAR_17 = (VAR_19[0]<<4) + VAR_19[1];
       VAR_21 = (VAR_19[2]<<4) + VAR_19[3];
       VAR_21 = VAR_11[VAR_21];
       VAR_22 = (VAR_19[4]<<4) + VAR_19[5];
       VAR_23 = (VAR_19[6]<<4) + VAR_19[7];

       VAR_18 = FUNC_4(VAR_17, VAR_22, VAR_21, VAR_23);


       break;

     case 'q':
       FUNC_11(0, VAR_19, 1);
       VAR_25 = 1; VAR_15 = 0;
       break;

     case 's':
     {
         int VAR_26;
         FUNC_11(0, VAR_19, 3);
         VAR_19[2] = 0;
         VAR_26 = FUNC_9((char*)VAR_19, VAR_1|VAR_2, 0644);
         VAR_19[0] -= VAR_19[0]>='a' ? 'a'-10 : '0';
         VAR_19[1] -= VAR_19[1]>='a' ? 'a'-10 : '0';
         VAR_17 = (VAR_19[0]<<4) + VAR_19[1];
         FUNC_14(VAR_26, VAR_3[VAR_17].data, VAR_6[VAR_17]);
         FUNC_5(VAR_26);
     }
     break;

     default:
       FUNC_6(VAR_10, "Did not recognize command\n");
       break;
   }
      }
  }
  else if (VAR_15 < 0)
  {
      FUNC_10();
  }
     } while (VAR_15 > 0);
 }

 FUNC_13();

 if (VAR_25)
 {
     for(VAR_24=0 ; VAR_24<8 && !VAR_4[VAR_24] ; VAR_24++);

     if (VAR_24==8)
  VAR_14=1;
 }

    }

    FUNC_10();
    return 0;
}
