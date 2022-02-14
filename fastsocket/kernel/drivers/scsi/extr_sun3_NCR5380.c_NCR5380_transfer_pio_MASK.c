
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 unsigned char FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned char) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 unsigned char FUNC_5 (unsigned char) ;
 unsigned char VAR_12 ;
 int FUNC_6 (char*,int ,...) ;
 unsigned char VAR_13 ;
 unsigned char VAR_14 ;
 unsigned char VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static int FUNC_7( struct Scsi_Host *VAR_18,
     unsigned char *VAR_19, int *VAR_20,
     unsigned char **VAR_21)
{
    register unsigned char VAR_22 = *VAR_19, VAR_23;
    register int VAR_24 = *VAR_20;
    register unsigned char *VAR_25 = *VAR_21;







    FUNC_2(VAR_17, FUNC_5(VAR_22));

    do {




 while (!((VAR_23 = FUNC_1(VAR_16)) & VAR_15));

 FUNC_0("scsi%d: REQ detected\n", VAR_1);


 if ((VAR_23 & VAR_9) != VAR_22) {
     FUNC_6("scsi%d: phase mismatch\n", VAR_1);
     FUNC_4(VAR_7);
     break;
 }


 if (!(VAR_22 & VAR_13))
     FUNC_2(VAR_8, *VAR_25);
 else
     *VAR_25 = FUNC_1(VAR_0);

 ++VAR_25;
 if (!(VAR_22 & VAR_13)) {
     if (!((VAR_22 & VAR_14) && VAR_24 > 1)) {
  FUNC_2(VAR_6, VAR_5 |
      VAR_4);
  FUNC_3(VAR_7);
  FUNC_2(VAR_6, VAR_5 |
   VAR_4 | VAR_2);
     } else {
  FUNC_2(VAR_6, VAR_5 |
      VAR_4 | VAR_3);
  FUNC_3(VAR_7);
  FUNC_2(VAR_6, VAR_5 |
      VAR_4 | VAR_3 | VAR_2);
     }
 } else {
     FUNC_3(VAR_7);
     FUNC_2(VAR_6, VAR_5 | VAR_2);
 }

 while (FUNC_1(VAR_16) & VAR_15);

 FUNC_0("scsi%d: req false, handshake complete\n", VAR_1);
 if (!(VAR_22 == VAR_10 && VAR_24 == 1)) {
     if (VAR_22 == VAR_11 && VAR_24 > 1)
  FUNC_2(VAR_6, VAR_5 | VAR_3);
     else
  FUNC_2(VAR_6, VAR_5);
 }
    } while (--VAR_24);

    FUNC_6("scsi%d: residual %d\n", VAR_1, VAR_24);

    *VAR_20 = VAR_24;
    *VAR_21 = VAR_25;
    VAR_23 = FUNC_1(VAR_16);



    if ((VAR_23 & VAR_15) || (VAR_22 == VAR_10 && VAR_24 == 0))
 *VAR_19 = VAR_23 & VAR_9;
    else
 *VAR_19 = VAR_12;

    if (!VAR_24 || (*VAR_19 == VAR_22))
 return 0;
    else
 return -1;
}
