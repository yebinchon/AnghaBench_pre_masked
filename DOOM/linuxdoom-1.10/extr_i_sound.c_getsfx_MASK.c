
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (unsigned char*) ;
 scalar_t__ FUNC_5 (int,int ,int ) ;
 int FUNC_6 (unsigned char*,unsigned char*,int) ;
 int FUNC_7 (char*,char*,char*) ;

void*
FUNC_8
( char* VAR_2,
  int* VAR_3 )
{
    unsigned char* VAR_4;
    unsigned char* VAR_5;
    int VAR_6;
    int VAR_7;
    int VAR_8;
    char VAR_9[20];
    int VAR_10;




    FUNC_7(VAR_9, "ds%s", VAR_2);
    if ( FUNC_1(VAR_9) == -1 )
      VAR_10 = FUNC_2("dspistol");
    else
      VAR_10 = FUNC_2(VAR_9);

    VAR_7 = FUNC_3( VAR_10 );







    VAR_4 = (unsigned char*)FUNC_0( VAR_10, VAR_0 );



    VAR_8 = ((VAR_7-8 + (VAR_1-1)) / VAR_1) * VAR_1;


    VAR_5 = (unsigned char*)FUNC_5( VAR_8+8, VAR_0, 0 );





    FUNC_6( VAR_5, VAR_4, VAR_7 );
    for (VAR_6=VAR_7 ; VAR_6<VAR_8+8 ; VAR_6++)
        VAR_5[VAR_6] = 128;


    FUNC_4( VAR_4 );


    *VAR_3 = VAR_8;


    return (void *) (VAR_5 + 8);
}
