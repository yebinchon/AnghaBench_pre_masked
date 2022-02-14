
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
typedef scalar_t__ int32 ;
struct TYPE_4__ {char* data; } ;
typedef TYPE_1__* StringInfo ;
typedef scalar_t__ ResultStatus ;
typedef scalar_t__ QueryStatus ;
typedef scalar_t__ CopyStatus ;


 scalar_t__ FUNC_0 (char*,int const,int const) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 () ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (char const*,int ,char*,char const*) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__,int *) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_9 (scalar_t__,char*,scalar_t__) ;
 long VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 () ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (long) ;
 int FUNC_15 (char*,int,char*,char*) ;

__attribute__((used)) static bool
FUNC_16(const char *VAR_18, uint32 VAR_19, const char *VAR_20,
       StringInfo VAR_21, StringInfo VAR_22)
{
 int32 VAR_23 = -1;
 char VAR_24[VAR_8];
 int VAR_25 = -1;
 const int VAR_26 = (VAR_9 | VAR_10 | VAR_11 | VAR_12 | VAR_13);
 const int VAR_27 = (VAR_15 | VAR_16);

 QueryStatus VAR_28 = VAR_2;
 int32 VAR_29 = VAR_7;
 char *VAR_30 = ((void*)0);
 bool VAR_31 = 0;
 bool VAR_32 = 0;
 bool VAR_33 = 0;


 FUNC_15(VAR_24, VAR_8, "%s", VAR_22->data);

 VAR_23 = FUNC_0(VAR_24, VAR_26, VAR_27);
 if (VAR_23 < 0)
 {
  FUNC_11(VAR_17, (FUNC_12(),
        FUNC_13("could not open file \"%s\": %m", VAR_22->data)));

  return 0;
 }


 VAR_30 = FUNC_2();


 VAR_29 = FUNC_3(VAR_18, VAR_19, VAR_30, VAR_20);
 if (VAR_29 == VAR_7)
 {
  FUNC_9(VAR_29, VAR_24, VAR_23);

  return 0;
 }


 VAR_31 = FUNC_8(VAR_29, VAR_21->data);
 if (!VAR_31)
 {
  FUNC_9(VAR_29, VAR_24, VAR_23);

  return 0;
 }


 while (!VAR_32)
 {
  ResultStatus VAR_34 = FUNC_7(VAR_29);
  if (VAR_34 == VAR_5)
  {
   VAR_32 = 1;
  }
  else if (VAR_34 == VAR_4)
  {

   long VAR_35 = VAR_14 * 1000L;
   FUNC_14(VAR_35);
  }
  else
  {
   FUNC_9(VAR_29, VAR_24, VAR_23);

   return 0;
  }
 }


 VAR_28 = FUNC_6(VAR_29);
 if (VAR_28 != VAR_3)
 {
  FUNC_9(VAR_29, VAR_24, VAR_23);

  return 0;
 }


 while (!VAR_33)
 {
  CopyStatus VAR_36 = FUNC_4(VAR_29, VAR_23, ((void*)0));
  if (VAR_36 == VAR_0)
  {
   VAR_33 = 1;
  }
  else if (VAR_36 == VAR_1)
  {

  }
  else
  {
   FUNC_9(VAR_29, VAR_24, VAR_23);

   return 0;
  }
 }


 FUNC_5(VAR_29);

 VAR_25 = FUNC_10(VAR_23);
 if (VAR_25 < 0)
 {
  FUNC_11(VAR_17, (FUNC_12(),
        FUNC_13("could not close file \"%s\": %m", VAR_24)));


  FUNC_1(VAR_24);

  return 0;
 }


 FUNC_11(VAR_6, (FUNC_13("received remote file \"%s\"", VAR_24)));

 return 1;
}
