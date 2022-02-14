
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int*) ;
 scalar_t__ FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (char*,char*,char*) ;

void*
FUNC_3
( char* VAR_1,
  int* VAR_2 )
{

    unsigned char* VAR_3;
    unsigned char* VAR_4;
    int VAR_5;
    int VAR_6;
    int VAR_7;
    char VAR_8[20];

    FUNC_2(VAR_8, "ds%s", VAR_1);

    VAR_3 = (unsigned char *) FUNC_0(VAR_8, &VAR_6);


    VAR_7 = ((VAR_6-8 + (VAR_0-1)) / VAR_0) * VAR_0;
    VAR_4 = (unsigned char *) FUNC_1(VAR_3, VAR_7+8);
    for (VAR_5=VAR_6 ; VAR_5<VAR_7+8 ; VAR_5++)
 VAR_4[VAR_5] = 128;

    *VAR_2 = VAR_7;
    return (void *) (VAR_4 + 8);

}
