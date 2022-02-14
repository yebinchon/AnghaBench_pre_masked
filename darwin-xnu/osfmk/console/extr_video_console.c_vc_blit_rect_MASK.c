
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int v_depth; unsigned int v_width; unsigned int v_height; } ;


 int FUNC_0 (int,int,int,int,int,int,int,unsigned char const*,unsigned short*,unsigned int) ;
 int FUNC_1 (int,int,int,int,int,int,int,unsigned char const*,unsigned int*,unsigned int) ;
 int FUNC_2 (int,int,int,int,int,int,int,unsigned char const*,unsigned int*,unsigned int) ;
 int FUNC_3 (int,int,int,int,int,int,int,unsigned char const*,unsigned char*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void FUNC_4(int VAR_3, int VAR_4, int VAR_5,
       int VAR_6, int VAR_7,
       int VAR_8, int VAR_9,
       const unsigned char * VAR_10,
       void * VAR_11,
       unsigned int VAR_12)
{
    if (!VAR_2.v_depth) return;
    if (((unsigned int)(VAR_3 + VAR_6)) > VAR_2.v_width) return;
    if (((unsigned int)(VAR_4 + VAR_7)) > VAR_2.v_height) return;

    switch( VAR_2.v_depth) {
 case 8:
            if( VAR_1 == VAR_0)
                FUNC_3( VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, (unsigned char *) VAR_11, VAR_12 );
     break;
 case 16:
     FUNC_0( VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, (unsigned short *) VAR_11, VAR_12 );
     break;
 case 32:
     FUNC_2( VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, (unsigned int *) VAR_11, VAR_12 );
     break;
 case 30:
     FUNC_1( VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, (unsigned int *) VAR_11, VAR_12 );
     break;
    }
}
