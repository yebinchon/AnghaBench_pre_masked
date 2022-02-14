
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AS_Host ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,int ,int,char*) ;
 unsigned char FUNC_2 (int *,int ) ;

__attribute__((used)) static
unsigned char FUNC_3(AS_Host *VAR_6)
{
    unsigned char VAR_7;

    FUNC_0(VAR_6, VAR_3 | VAR_2);

    FUNC_1(VAR_6, VAR_0, VAR_0, 1000, "for message byte");

    VAR_7 = FUNC_2(VAR_6, VAR_4);


    FUNC_1(VAR_6, VAR_1, VAR_1, 1000, "for interrupt after message byte");

    FUNC_2(VAR_6, VAR_5);

    return VAR_7;
}
