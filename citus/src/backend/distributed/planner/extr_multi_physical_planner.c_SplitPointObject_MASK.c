
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
typedef int int16 ;
struct TYPE_3__ {int valueTypeId; int minValueExists; int minValue; } ;
typedef TYPE_1__ ShardInterval ;
typedef int Oid ;
typedef int Datum ;
typedef int ArrayType ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (int *,int,int ,int ,int,char) ;
 int FUNC_2 (int ,int *,int*,char*) ;
 int * FUNC_3 (int) ;

__attribute__((used)) static ArrayType *
FUNC_4(ShardInterval **VAR_1, uint32 VAR_2)
{
 ArrayType *VAR_3 = ((void*)0);
 uint32 VAR_4 = 0;
 Oid VAR_5 = VAR_0;
 bool VAR_6 = 0;
 char VAR_7 = 0;
 int16 VAR_8 = 0;


 uint32 VAR_9 = VAR_2;
 Datum *VAR_10 = FUNC_3(VAR_9 * sizeof(Datum));

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
 {
  ShardInterval *VAR_11 = VAR_1[VAR_4];
  VAR_10[VAR_4] = VAR_11->minValue;
  FUNC_0(VAR_11->minValueExists);


  if (VAR_4 == 0)
  {
   VAR_5 = VAR_11->valueTypeId;
  }
 }


 FUNC_2(VAR_5, &VAR_8, &VAR_6, &VAR_7);
 VAR_3 = FUNC_1(VAR_10, VAR_9, VAR_5,
            VAR_8, VAR_6, VAR_7);

 return VAR_3;
}
