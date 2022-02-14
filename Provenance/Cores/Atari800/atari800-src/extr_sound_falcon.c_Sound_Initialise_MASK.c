
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,scalar_t__,int,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (char*) ;
 char* VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 char* VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (char,long*) ;
 int FUNC_7 (char*,int,int) ;
 int FUNC_8 (char*) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_9 (char*,char*) ;

int FUNC_10(int *VAR_15, char *VAR_16[])
{
 int VAR_17, VAR_18;
 int VAR_19 = VAR_0;

 for (VAR_17 = VAR_18 = 1; VAR_17 < *VAR_15; VAR_17++) {
  int VAR_20 = (VAR_17 + 1 < *VAR_15);
  int VAR_21 = VAR_0;

  if (FUNC_9(VAR_16[VAR_17], "-sound") == 0)
   VAR_14 = VAR_7;
  else if (FUNC_9(VAR_16[VAR_17], "-nosound") == 0)
   VAR_14 = VAR_0;
  else if (FUNC_9(VAR_16[VAR_17], "-dsprate") == 0) {
   if (VAR_20) {
    VAR_12 = FUNC_4(VAR_16[++VAR_17]);
    if (VAR_12 == VAR_5)
     VAR_13 = 4*VAR_6;
    else if (VAR_12 == VAR_4)
     VAR_13 = 2*VAR_6;
    else {
     VAR_12 = VAR_3;
     VAR_13 = VAR_6;
    }
   }
   else VAR_21 = VAR_7;
  }
  else {
   if (FUNC_9(VAR_16[VAR_17], "-help") == 0) {
    VAR_19 = VAR_7;
    FUNC_0("\t-sound           Enable sound\n"
           "\t-nosound         Disable sound\n"
           "\t-dsprate <rate>  Set sample rate in Hz"
          );
   }
   VAR_16[VAR_18++] = VAR_16[VAR_17];
  }

  if (VAR_21) {
   FUNC_0("Missing argument for '%s'", VAR_16[VAR_17]);
   VAR_14 = VAR_0;
   return VAR_0;
  }
 }

 *VAR_15 = VAR_18;

 if (VAR_19) {
  VAR_14 = VAR_0;
  return VAR_7;
 }


 if (VAR_14) {
  long VAR_22;

  if (FUNC_6('_SND', &VAR_22)) {
   if (!(VAR_22 & 2))
    VAR_14 = VAR_0;
  }
  else
   VAR_14 = VAR_0;
 }

 if (VAR_14) {
  VAR_8 = (char *) FUNC_1(2 * VAR_13, 0);
  if (!VAR_8) {
   FUNC_8("can't allocate sound buffer\n");
   FUNC_5(1);
  }
  VAR_9 = VAR_10 = VAR_8 + VAR_13;
  VAR_11 = VAR_9 + VAR_13;
  FUNC_7(VAR_8, 0, VAR_13);
  FUNC_7(VAR_9, 127, VAR_13);




  FUNC_2(VAR_2, VAR_12, 1, 0);

  FUNC_3(VAR_1);
 }
 return VAR_7;
}
