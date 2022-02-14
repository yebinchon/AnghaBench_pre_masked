
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int tupdesc; int ** vals; } ;
struct TYPE_5__ {int data; } ;
typedef TYPE_1__* StringInfo ;
typedef int Oid ;
typedef int * HeapTuple ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int ,int,int*) ;
 int VAR_4 ;
 TYPE_4__* VAR_5 ;
 int FUNC_8 (TYPE_1__*,int ,char*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (char*,...) ;
 char* FUNC_11 (int ) ;
 char* FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 TYPE_1__* FUNC_14 () ;
 char* FUNC_15 (char*,char*) ;

__attribute__((used)) static bool
FUNC_16(Oid VAR_6)
{
 Oid VAR_7 = FUNC_13(VAR_6);
 char *VAR_8 = FUNC_11(VAR_7);
 char *VAR_9 = FUNC_12(VAR_6);
 char *VAR_10 = FUNC_15(VAR_8, VAR_9);

 int VAR_11 = 0;
 int VAR_12 = 0;
 StringInfo VAR_13 = FUNC_14();

 HeapTuple VAR_14 = ((void*)0);
 Datum VAR_15 = 0;
 bool VAR_16 = 0;
 bool VAR_17 = 0;
 bool VAR_18 = 1;

 int VAR_19 = 0;
 int VAR_20 = 1;

 FUNC_1(!FUNC_3(VAR_6));

 VAR_11 = FUNC_4();
 if (VAR_11 != VAR_2)
 {
  FUNC_9(VAR_0, (FUNC_10("could not connect to SPI manager")));
 }

 FUNC_8(VAR_13, VAR_1, VAR_10);

 VAR_12 = FUNC_5(VAR_13->data, VAR_18, 0);
 if (VAR_12 != VAR_3)
 {
  FUNC_9(VAR_0, (FUNC_10("execution was not successful \"%s\"",
          VAR_13->data)));
 }


 FUNC_0(VAR_4 == 1);

 VAR_14 = VAR_5->vals[VAR_19];
 VAR_15 = FUNC_7(VAR_14, VAR_5->tupdesc, VAR_20, &VAR_17);
 VAR_16 = !FUNC_2(VAR_15);

 FUNC_6();

 return VAR_16;
}
