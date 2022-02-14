
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; char* prefix; char* item; char* suffix; int retval; } ;
typedef TYPE_1__ UI_tMenuItem ;


 int FUNC_0 (int,int,int,int,int,int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int,int,char const**,char const**,char const**,char const**,int*,int,int,int,int,int,int ,int *,int*) ;
 int VAR_1 ;
 int FUNC_3 (char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_10, int VAR_11, int VAR_12, const UI_tMenuItem *VAR_13, int *VAR_14)
{
 int VAR_15;
 int VAR_16;
 const UI_tMenuItem *VAR_17;
 static const char *VAR_18[100];
 static const char *VAR_19[100];
 static const char *VAR_20[100];
 static const char *VAR_21[100];
 static int VAR_22[100];
 int VAR_23;
 int VAR_24, VAR_25, VAR_26, VAR_27;

 VAR_15 = 0;
 VAR_16 = 0;
 for (VAR_17 = VAR_13; VAR_17->flags != VAR_4; VAR_17++) {
  if (VAR_17->flags != VAR_5) {
   VAR_18[VAR_15] = VAR_17->prefix;
   VAR_19[VAR_15] = VAR_17->item;
   if (VAR_17->flags & VAR_6) {
    VAR_20[VAR_15] = ((void*)0);
    VAR_21[VAR_15] = VAR_17->suffix;
   }
   else {
    if ((VAR_17->flags & VAR_7) == VAR_2) {
     if (VAR_17->flags & VAR_3)
      VAR_20[VAR_15] = "Yes";
     else
      VAR_20[VAR_15] = "No ";
    }
    else
     VAR_20[VAR_15] = VAR_17->suffix;
    VAR_21[VAR_15] = ((void*)0);
   }
   VAR_22[VAR_15] = (VAR_17->retval < 0);
   if (VAR_17->retval == VAR_12)
    VAR_16 = VAR_15;
   VAR_15++;
  }
 }
 if (VAR_15 == 0)
  return -1;

 if (VAR_11 & VAR_9) {
  int VAR_28;
  VAR_23 = 0;
  for (VAR_28 = 0; VAR_28 < VAR_15; VAR_28++) {
   int VAR_29 = FUNC_4(VAR_19[VAR_28]);
   if (VAR_18[VAR_28] != ((void*)0))
    VAR_29 += FUNC_4(VAR_18[VAR_28]);
   if (VAR_20[VAR_28] != ((void*)0))
    VAR_29 += FUNC_4(VAR_20[VAR_28]);
   if (VAR_29 > VAR_23)
    VAR_23 = VAR_29;
  }
  if (VAR_23 > 38)
   VAR_23 = 38;

  VAR_24 = (40 - VAR_23) / 2 - 1;
  VAR_26 = VAR_24 + VAR_23 + 1;
  VAR_25 = (24 - VAR_15) / 2 - 1;
  VAR_27 = VAR_25 + VAR_15 + 1;
 }
 else {
  FUNC_1();
  FUNC_3(VAR_10);
  VAR_23 = 38;
  VAR_24 = 0;
  VAR_25 = 1;
  VAR_26 = 39;
  VAR_27 = 23;
 }

 if (VAR_25 < 0)
  VAR_25 = 0;
 if (VAR_27 > 23)
  VAR_27 = 23;

 FUNC_0(0x9a, 0x94, VAR_24, VAR_25, VAR_26, VAR_27);
 VAR_16 = FUNC_2(VAR_16, VAR_15, VAR_19, VAR_18, VAR_20, VAR_21, VAR_22,
                 VAR_27 - VAR_25 - 1, 1, VAR_24 + 1, VAR_25 + 1, VAR_23,
                 (VAR_11 & VAR_8) ? VAR_1 : VAR_0, ((void*)0), VAR_14);
 if (VAR_16 < 0)
  return VAR_16;
 for (VAR_17 = VAR_13; VAR_17->flags != VAR_4; VAR_17++) {
  if (VAR_17->flags != VAR_5) {
   if (VAR_16 == 0)
    return VAR_17->retval;
   VAR_16--;
  }
 }

 return -1;
}
