
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int ObjectWithArgs ;
typedef int ObjectType ;
typedef int ObjectAddress ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_1 ;
 int * FUNC_3 (int) ;

__attribute__((used)) static ObjectAddress *
FUNC_4(ObjectType VAR_2, ObjectWithArgs *VAR_3,
      bool VAR_4)
{
 Oid VAR_5 = VAR_0;
 ObjectAddress *VAR_6 = ((void*)0);

 FUNC_0(VAR_2);

 VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);
 VAR_6 = FUNC_3(sizeof(ObjectAddress));
 FUNC_2(*VAR_6, VAR_1, VAR_5);

 return VAR_6;
}
