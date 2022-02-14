
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef scalar_t__ Oid ;
typedef int FmgrInfo ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (scalar_t__,scalar_t__*,int*) ;
 int FUNC_2 (scalar_t__,scalar_t__*,int*) ;
 int * FUNC_3 (int) ;

__attribute__((used)) static FmgrInfo *
FUNC_4(uint32 VAR_1, Oid *VAR_2, bool VAR_3)
{
 FmgrInfo *VAR_4 = FUNC_3(VAR_1 * sizeof(FmgrInfo));

 uint32 VAR_5 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
 {
  FmgrInfo *VAR_6 = &VAR_4[VAR_5];
  Oid VAR_7 = VAR_2[VAR_5];
  bool VAR_8 = 0;
  Oid VAR_9 = VAR_0;


  if (VAR_7 == VAR_0)
  {
   continue;
  }
  else if (VAR_3)
  {
   FUNC_1(VAR_7, &VAR_9, &VAR_8);
  }
  else
  {
   FUNC_2(VAR_7, &VAR_9, &VAR_8);
  }

  FUNC_0(VAR_9, VAR_6);
 }

 return VAR_4;
}
