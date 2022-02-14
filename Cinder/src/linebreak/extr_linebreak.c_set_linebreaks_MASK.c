
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ utf32_t ;
struct LineBreakProperties {int dummy; } ;
typedef scalar_t__ (* get_next_char_t ) (void const*,size_t,size_t*) ;
typedef enum LineBreakClass { ____Placeholder_LineBreakClass } LineBreakClass ;





 scalar_t__ VAR_0 ;

 int VAR_1 ;



 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 char VAR_7 ;
 char VAR_8 ;

 int FUNC_0 (int) ;
 int** VAR_9 ;
 int FUNC_1 (scalar_t__,struct LineBreakProperties*) ;
 struct LineBreakProperties* FUNC_2 (char const*) ;
 int FUNC_3 (int,char const*) ;

void FUNC_4(
  const void *VAR_10,
  size_t VAR_11,
  const char *VAR_12,
  char *VAR_13,
  get_next_char_t VAR_14)
{
 utf32_t VAR_15;
 enum LineBreakClass VAR_16;
 enum LineBreakClass VAR_17;
 enum LineBreakClass VAR_18;
 struct LineBreakProperties *VAR_19;
 size_t VAR_20 = 0;
 size_t VAR_21 = 0;

 --VAR_21;
 VAR_15 = VAR_14(VAR_10, VAR_11, &VAR_20);
 if (VAR_15 == VAR_0)
  return;
 VAR_19 = FUNC_2(VAR_12);
 VAR_16 = FUNC_3(FUNC_1(VAR_15, VAR_19), VAR_12);
 VAR_17 = VAR_3;

nextline:


 switch (VAR_16)
 {
 case 131:
 case 130:
  VAR_16 = 134;
  break;
 case 133:
  VAR_16 = VAR_1;
  break;
 case 129:
  VAR_16 = VAR_4;
  break;
 default:
  break;
 }


 for (;;)
 {
  for (++VAR_21; VAR_21 < VAR_20 - 1; ++VAR_21)
  {
   VAR_13[VAR_21] = VAR_6;
  }
  FUNC_0(VAR_21 == VAR_20 - 1);
  VAR_18 = VAR_17;
  VAR_15 = VAR_14(VAR_10, VAR_11, &VAR_20);
  if (VAR_15 == VAR_0)
   break;
  VAR_17 = FUNC_1(VAR_15, VAR_19);
  if (VAR_16 == 134 || (VAR_16 == 132 && VAR_17 != 131))
  {
   VAR_13[VAR_21] = VAR_7;
   VAR_16 = FUNC_3(VAR_17, VAR_12);
   goto nextline;
  }

  switch (VAR_17)
  {
  case 129:
   VAR_13[VAR_21] = VAR_8;
   continue;
  case 134:
  case 131:
  case 130:
   VAR_13[VAR_21] = VAR_8;
   VAR_16 = 134;
   continue;
  case 132:
   VAR_13[VAR_21] = VAR_8;
   VAR_16 = 132;
   continue;
  case 133:
   VAR_13[VAR_21] = VAR_5;
   VAR_16 = VAR_1;
   continue;
  default:
   break;
  }

  VAR_17 = FUNC_3(VAR_17, VAR_12);

  FUNC_0(VAR_16 <= VAR_2);
  FUNC_0(VAR_17 <= VAR_2);
  switch (VAR_9[VAR_16 - 1][VAR_17 - 1])
  {
  case 136:
   VAR_13[VAR_21] = VAR_5;
   break;
  case 138:
  case 135:
   if (VAR_18 == 129)
   {
    VAR_13[VAR_21] = VAR_5;
   }
   else
   {
    VAR_13[VAR_21] = VAR_8;
   }
   break;
  case 137:
   VAR_13[VAR_21] = VAR_8;
   if (VAR_18 != 129)
    continue;
   break;
  case 128:
   VAR_13[VAR_21] = VAR_8;
   break;
  }

  VAR_16 = VAR_17;
 }

 FUNC_0(VAR_21 == VAR_20 - 1 && VAR_20 <= VAR_11);

 VAR_13[VAR_21] = VAR_7;

 while (VAR_20 < VAR_11)
 {
  VAR_13[VAR_20++] = VAR_6;
 }
}
