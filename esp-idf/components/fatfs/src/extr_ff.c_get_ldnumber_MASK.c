
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char UINT ;
typedef char TCHAR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char) ;
 char** VAR_3 ;

__attribute__((used)) static int FUNC_2 (
 const TCHAR** VAR_4
)
{
 const TCHAR *VAR_5, *VAR_6;
 TCHAR VAR_7;
 int VAR_8, VAR_9 = -1;





 VAR_6 = VAR_5 = *VAR_4;
 if (!VAR_5) return VAR_9;
 do VAR_7 = *VAR_6++; while ((UINT)VAR_7 >= (VAR_1 ? ' ' : '!') && VAR_7 != ':');

 if (VAR_7 == ':') {
  VAR_8 = VAR_2;
  if (FUNC_0(*VAR_5) && VAR_5 + 2 == VAR_6) {
   VAR_8 = (int)*VAR_5 - '0';
  }
  if (VAR_8 < VAR_2) {
   VAR_9 = VAR_8;
   *VAR_4 = VAR_6;
  }
  return VAR_9;
 }
 VAR_9 = 0;

 return VAR_9;
}
