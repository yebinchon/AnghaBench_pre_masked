
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {scalar_t__ sig_head; scalar_t__ sig_tail; int name; } ;
typedef TYPE_1__ case_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (TYPE_1__*,char const*,int ,int,int*,int*,int*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,int) ;
 scalar_t__ FUNC_6 (int ,char const*) ;

int FUNC_7(int VAR_4, char** VAR_5)
{
 int VAR_6 = (intptr_t)VAR_3 - (intptr_t)VAR_1;
 int VAR_7 = (intptr_t)VAR_2 - (intptr_t)VAR_0;
 char VAR_8[1024];
 char* VAR_9 = FUNC_5(VAR_8, 1024);
 static uint64_t VAR_10 = 0x883253372849284B;
 int VAR_11 = (VAR_7 % VAR_6 != 0);
 const char* VAR_12 = (VAR_4 == 2) ? VAR_5[1] : 0;
 int VAR_13, VAR_14 = 0;
 if (!VAR_11)
  VAR_14 = VAR_7 / VAR_6;
 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
 {
  case_t* VAR_15 = (case_t*)((unsigned char*)VAR_0 + VAR_13 * VAR_6);

  if (VAR_15->sig_head != VAR_10 || VAR_15->sig_tail != VAR_10 + 2)
  {
   VAR_11 = 1;
   break;
  }
 }
 int VAR_16, VAR_17 = 0, VAR_18 = 0, VAR_19 = 0;

 if (VAR_11)
 {
  VAR_14 = 0;
  VAR_16 = (intptr_t)VAR_2 - (intptr_t)VAR_0 - sizeof(case_t) + 1;
  for (VAR_13 = 0; VAR_13 < VAR_16; VAR_13++)
  {
   case_t* VAR_20 = (case_t*)((unsigned char*)VAR_0 + VAR_13);
   if (VAR_20->sig_head == VAR_10 && VAR_20->sig_tail == VAR_10 + 2 &&
    (!VAR_12 || FUNC_6(VAR_20->name, VAR_12)))
    VAR_14++;
  }
 }
 if (&FUNC_0)
  FUNC_0();
 if (VAR_11)
 {
  int VAR_21 = 0;
  for (VAR_13 = 0; VAR_13 < VAR_16; VAR_13++)
  {
   case_t* VAR_22 = (case_t*)((unsigned char*)VAR_0 + VAR_13);
   if (VAR_22->sig_head == VAR_10 && VAR_22->sig_tail == VAR_10 + 2 &&
    (!VAR_12 || FUNC_6(VAR_22->name, VAR_12)))
   {
    FUNC_3(VAR_22, VAR_12, VAR_21++, VAR_14, &VAR_17, &VAR_18, &VAR_19);
    FUNC_4(VAR_9);
   }
  }
 } else {
  int VAR_23 = VAR_12 ? 0 : VAR_14;
  if (VAR_12)
   for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
   {
    case_t* VAR_24 = (case_t*)((unsigned char*)VAR_0 + VAR_13 * VAR_6);
    if (FUNC_6(VAR_24->name, VAR_12))
     VAR_23++;
   }
  int VAR_25 = 0;

  for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
  {
   case_t* VAR_26 = (case_t*)((unsigned char*)VAR_0 + VAR_13 * VAR_6);
   if (!VAR_12 || FUNC_6(VAR_26->name, VAR_12))
    FUNC_3(VAR_26, VAR_12, VAR_25++, VAR_23, &VAR_17, &VAR_18, &VAR_19);
   FUNC_4(VAR_9);
  }
 }
 if (&FUNC_1)
  FUNC_1();
 FUNC_2(VAR_17, VAR_18, VAR_19);
 return VAR_19;
}
