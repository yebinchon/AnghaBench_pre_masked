
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;
typedef int UINT ;


 int FUNC_0 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_1 (scalar_t__*) ;
 int VAR_0 ;
 scalar_t__* FUNC_2 (int) ;
 int FUNC_3 (scalar_t__*,scalar_t__*,scalar_t__*,int) ;
 int FUNC_4 (scalar_t__*,scalar_t__*,int,int) ;
 int FUNC_5 (scalar_t__*,int,scalar_t__*) ;
 int FUNC_6 (scalar_t__*) ;

UINT FUNC_7(wchar_t *VAR_1, UINT VAR_2, wchar_t *VAR_3, wchar_t *VAR_4, wchar_t *VAR_5, bool VAR_6)
{
 UINT VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 wchar_t *VAR_15;

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return 0;
 }


 VAR_10 = FUNC_6(VAR_3);
 VAR_11 = FUNC_6(VAR_4);
 VAR_12 = FUNC_6(VAR_5);


 VAR_13 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6);

 VAR_15 = FUNC_2((VAR_13 + 1) * sizeof(wchar_t));
 VAR_15[VAR_13] = 0;


 VAR_7 = VAR_8 = VAR_9 = VAR_14 = 0;
 while (1)
 {
  VAR_7 = FUNC_4(VAR_3, VAR_4, VAR_7, VAR_6);
  if (VAR_7 == VAR_0)
  {
   FUNC_0(&VAR_15[VAR_14], &VAR_3[VAR_8], (VAR_10 - VAR_8) * sizeof(wchar_t));
   VAR_14 += VAR_10 - VAR_8;
   break;
  }
  VAR_9++;
  FUNC_0(&VAR_15[VAR_14], &VAR_3[VAR_8], (VAR_7 - VAR_8) * sizeof(wchar_t));
  VAR_14 += VAR_7 - VAR_8;
  FUNC_0(&VAR_15[VAR_14], VAR_5, VAR_12 * sizeof(wchar_t));
  VAR_14 += VAR_12;
  VAR_7 += VAR_11;
  VAR_8 = VAR_7;
 }


 FUNC_5(VAR_1, VAR_2, VAR_15);


 FUNC_1(VAR_15);

 return VAR_9;
}
