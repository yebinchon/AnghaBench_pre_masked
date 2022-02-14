
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int Datum ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int *,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int,int *,int *,int *,int,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int
FUNC_8(char *VAR_5, int VAR_6, Oid *VAR_7,
        Datum *VAR_8)
{
 int VAR_9 = 0;
 Oid VAR_10 = VAR_1;
 int VAR_11 = 0;
 int VAR_12 = 0;
 int VAR_13 = 0;

 VAR_9 = FUNC_2();
 if (VAR_9 != VAR_3)
 {
  FUNC_6(VAR_0, (FUNC_7("could not connect to SPI manager")));
 }


 FUNC_1(&VAR_10, &VAR_11);
 FUNC_5(FUNC_0(), VAR_2);

 VAR_12 = FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8,
           ((void*)0), 0, 0);

 FUNC_5(VAR_10, VAR_11);

 VAR_13 = FUNC_4();
 if (VAR_13 != VAR_4)
 {
  FUNC_6(VAR_0, (FUNC_7("could not disconnect from SPI manager")));
 }

 return VAR_12;
}
