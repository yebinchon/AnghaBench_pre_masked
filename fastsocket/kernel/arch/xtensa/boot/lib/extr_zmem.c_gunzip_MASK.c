
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned char* next_in; int avail_in; unsigned char* next_out; int avail_out; int workspace; } ;
typedef TYPE_1__ z_stream ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 () ;

void FUNC_6 (void *VAR_10, int VAR_11, unsigned char *VAR_12, int *VAR_13)
{
 z_stream VAR_14;
 int VAR_15, VAR_16, VAR_17;


        VAR_16 = 10;
        VAR_17 = VAR_12[3];
        if (VAR_12[2] != VAR_1 || (VAR_17 & VAR_6) != 0) {

                FUNC_0();
        }
        if ((VAR_17 & VAR_2) != 0)
                VAR_16 = 12 + VAR_12[10] + (VAR_12[11] << 8);
        if ((VAR_17 & VAR_5) != 0)
                while (VAR_12[VAR_16++] != 0)
                        ;
        if ((VAR_17 & VAR_0) != 0)
                while (VAR_12[VAR_16++] != 0)
                        ;
        if ((VAR_17 & VAR_3) != 0)
                VAR_16 += 2;
        if (VAR_16 >= *VAR_13) {

                FUNC_0();
        }

 VAR_14.workspace = FUNC_1(FUNC_5());
        VAR_15 = FUNC_4(&VAR_14, -VAR_4);
        if (VAR_15 != VAR_8) {

                FUNC_0();
        }
        VAR_14.next_in = VAR_12 + VAR_16;
        VAR_14.avail_in = *VAR_13 - VAR_16;
        VAR_14.next_out = VAR_10;
        VAR_14.avail_out = VAR_11;
        VAR_15 = FUNC_2(&VAR_14, VAR_7);
        if (VAR_15 != VAR_8 && VAR_15 != VAR_9) {

                FUNC_0();
        }
        *VAR_13 = VAR_14.next_out - (unsigned char *) VAR_10;
        FUNC_3(&VAR_14);
}
