
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int transactionFailed; } ;
struct TYPE_5__ {TYPE_1__ remoteTransaction; int * pgConn; } ;
typedef int PGconn ;
typedef TYPE_2__ MultiConnection ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (int ,int,int,int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static bool
FUNC_11(MultiConnection *VAR_10, bool VAR_11)
{
 PGconn *VAR_12 = VAR_10->pgConn;
 int VAR_13 = FUNC_6(VAR_12);

 FUNC_0(VAR_12);
 FUNC_0(FUNC_5(VAR_12));

 if (VAR_11)
 {
  FUNC_1();
 }


 while (1)
 {
  int VAR_14 = 0;
  int VAR_15 = 0;
  int VAR_16 = VAR_7 | VAR_6;


  VAR_14 = FUNC_3(VAR_12);


  if (VAR_14 == -1)
  {
   return 0;
  }
  else if (VAR_14 == 1)
  {
   VAR_16 |= VAR_9;
  }


  if (FUNC_2(VAR_12) == 0)
  {
   return 0;
  }
  if (FUNC_4(VAR_12))
  {
   VAR_16 |= VAR_8;
  }

  if ((VAR_16 & (VAR_8 | VAR_9)) == 0)
  {

   return 1;
  }

  VAR_15 = FUNC_8(VAR_2, VAR_16, VAR_13, 0, VAR_3);
  if (VAR_15 & VAR_7)
  {
   FUNC_9(VAR_0, (FUNC_10("postmaster was shut down, exiting")));
  }

  if (VAR_15 & VAR_6)
  {
   FUNC_7(VAR_2);


   if (VAR_11)
   {
    FUNC_1();
   }






   if (VAR_1 > 0 && (VAR_5 || VAR_4))
   {
    VAR_10->remoteTransaction.transactionFailed = 1;
    break;
   }
  }
 }

 return 0;
}
