
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adb_request {int* reply; int sent; int complete; int* data; int reply_len; int (* done ) (struct adb_request*) ;struct adb_request* next; int reply_expected; int nbytes; } ;
typedef int irqreturn_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int*,int,int ) ;
 int VAR_13 ;
 struct adb_request* VAR_14 ;
 int VAR_15 ;

 int VAR_16 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_17 ;
 int FUNC_5 () ;


 int VAR_18 ;
 int* VAR_19 ;
 int VAR_20 ;
 int* VAR_21 ;

 int VAR_22 ;
 int VAR_23 ;
 int FUNC_6 (struct adb_request*) ;
 int FUNC_7 (struct adb_request*) ;
 int* VAR_24 ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_25, void *VAR_26)
{
 int VAR_27;
 static int VAR_28;
 struct adb_request *VAR_29;

 if (!VAR_26) {

  if (VAR_24[VAR_3] & VAR_7)
   VAR_24[VAR_3] = VAR_7;
  else
   return VAR_5;
 }

 FUNC_0(VAR_28++);

 VAR_16 = VAR_23;
 VAR_23 = VAR_24[VAR_1] & (VAR_12|VAR_2);

 switch (VAR_17) {
  case 131:
   if (VAR_18) {
    VAR_21 = VAR_14->reply;
   } else {
    FUNC_0(VAR_14 != ((void*)0));
    VAR_21 = VAR_19;
   }

   VAR_27 = VAR_24[VAR_6];

   if ((VAR_23 & VAR_2) && (VAR_27 == 0xFF)) {



    VAR_20 = 0;
    VAR_22 = 0;
    VAR_17 = 130;
   } else {
    VAR_17 = 129;
    *VAR_21 = VAR_27;
    VAR_20 = 1;
   }


   VAR_24[VAR_1] = (VAR_24[VAR_1] & ~VAR_12) | VAR_10;
   break;

  case 128:
   VAR_29 = VAR_14;
   if (VAR_15 >= VAR_29->nbytes) {
    VAR_29->sent = 1;
    VAR_17 = 131;

    if (VAR_29->reply_expected) {
     VAR_18 = 1;
    } else {
     VAR_29->complete = 1;
     VAR_14 = VAR_29->next;
     if (VAR_29->done) (*VAR_29->done)(VAR_29);

     if (VAR_14)
      FUNC_4();
     else
      if (FUNC_5())
       FUNC_2(VAR_13);
    }

    if (VAR_17 == 131) {

     VAR_24[VAR_0] &= ~VAR_8;
     VAR_27 = VAR_24[VAR_6];

     VAR_24[VAR_1] = (VAR_24[VAR_1] & ~VAR_12) | VAR_11;
    }
   } else {
    VAR_24[VAR_6] = VAR_29->data[VAR_15++];

    if ( (VAR_24[VAR_1] & VAR_12) == VAR_9 ) {

     VAR_24[VAR_1] = (VAR_24[VAR_1] & ~VAR_12) | VAR_10;
    } else {

     VAR_24[VAR_1] ^= VAR_12;
    }
   }
   break;

  case 129:
   VAR_27 = VAR_24[VAR_6];
   FUNC_0((VAR_23 & VAR_12) == VAR_9 ||
          (VAR_23 & VAR_12) == VAR_11);
   VAR_22 = 0;
   if (!(VAR_23 & VAR_2)) {
    if (VAR_27 == 0xFF) {
     if (!(VAR_16 & VAR_2)) {
      VAR_17 = 130;
      VAR_20 = 0;
      VAR_22 = 1;
     }
    } else if (VAR_27 == 0x00) {
     VAR_17 = 130;
     if (!(VAR_16 & VAR_2))
      VAR_22 = 1;
    }
   }

   if (VAR_17 == 129) {
    FUNC_0(VAR_20 > 15);
    VAR_21++;
    *VAR_21 = VAR_27;
    VAR_20++;
   }


   VAR_24[VAR_1] ^= VAR_12;
   break;

  case 130:
   VAR_27 = VAR_24[VAR_6];

   if (VAR_18) {
    VAR_18 = 0;
    VAR_29 = VAR_14;
    VAR_29->reply_len = VAR_20;
    VAR_29->complete = 1;
    VAR_14 = VAR_29->next;
    if (VAR_29->done) (*VAR_29->done)(VAR_29);
   } else if (VAR_20 && VAR_13)
    FUNC_1(VAR_19, VAR_20, 0);

   VAR_17 = 131;


   if (VAR_22)
    FUNC_3();

   if (VAR_14)
    FUNC_4();
   else
    if (FUNC_5())
     FUNC_2(VAR_13);

   if (VAR_17 == 131)
    VAR_24[VAR_1] = (VAR_24[VAR_1] & ~VAR_12) | VAR_11;
   break;

  default:
  break;
 }

 VAR_28--;
 return VAR_4;
}
