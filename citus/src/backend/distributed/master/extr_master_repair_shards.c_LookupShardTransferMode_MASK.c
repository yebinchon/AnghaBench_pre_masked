
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int Datum ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*,char*,int ) ;

__attribute__((used)) static char
FUNC_5(Oid VAR_6)
{
 char VAR_7 = 0;

 Datum VAR_8 = FUNC_1(VAR_5, VAR_6);
 char *VAR_9 = FUNC_0(VAR_8);

 if (FUNC_4(VAR_9, "auto", VAR_1) == 0)
 {
  VAR_7 = VAR_2;
 }
 else if (FUNC_4(VAR_9, "force_logical", VAR_1) == 0)
 {
  VAR_7 = VAR_4;
 }
 else if (FUNC_4(VAR_9, "block_writes", VAR_1) == 0)
 {
  VAR_7 = VAR_3;
 }
 else
 {
  FUNC_2(VAR_0, (FUNC_3("invalid label for enum: %s", VAR_9)));
 }

 return VAR_7;
}
