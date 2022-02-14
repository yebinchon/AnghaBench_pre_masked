
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static void
FUNC_6(int32 VAR_2, const char *VAR_3, int32 VAR_4)
{
 if (VAR_2 != VAR_0)
 {
  FUNC_0(VAR_2);
 }

 if (VAR_4 != -1)
 {
  int VAR_5 = -1;
  int VAR_6 = -1;

  VAR_5 = FUNC_1(VAR_4);
  if (VAR_5 < 0)
  {
   FUNC_2(VAR_1, (FUNC_3(),
         FUNC_4("could not close file \"%s\": %m", VAR_3)));
  }

  VAR_6 = FUNC_5(VAR_3);
  if (VAR_6 != 0)
  {
   FUNC_2(VAR_1, (FUNC_3(),
         FUNC_4("could not delete file \"%s\": %m", VAR_3)));
  }
 }
}
