
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16 ;
typedef scalar_t__ Oid ;
typedef int FmgrInfo ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (scalar_t__,int *) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_7 (int) ;

FmgrInfo *
FUNC_8(Oid VAR_2, Oid VAR_3, int16 VAR_4)
{
 FmgrInfo *VAR_5 = (FmgrInfo *) FUNC_7(sizeof(FmgrInfo));


 Oid VAR_6 = FUNC_0(VAR_2, VAR_3);

 Oid VAR_7 = FUNC_4(VAR_6);
 Oid VAR_8 = FUNC_5(VAR_6);

 Oid VAR_9 = FUNC_6(VAR_7, VAR_8,
            VAR_8, VAR_4);

 if (VAR_9 == VAR_1)
 {
  FUNC_1(VAR_0, (FUNC_2("could not find function for data typeId %u", VAR_2)));
 }


 FUNC_3(VAR_9, VAR_5);

 return VAR_5;
}
