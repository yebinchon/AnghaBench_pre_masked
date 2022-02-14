
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ GLuint ;


 int VAR_0 ;
 int VAR_1 ;
 double VAR_2 ;
 double VAR_3 ;
 int VAR_4 ;
 double VAR_5 ;
 int VAR_6 ;
 double FUNC_0 (double) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (float,float,float) ;
 int FUNC_8 (float,float,float) ;
 double FUNC_9 (double) ;
 double FUNC_10 (double) ;

__attribute__((used)) static void FUNC_11(void)
{
    static GLuint VAR_7 = 0;
    int VAR_8, VAR_9, VAR_10;
    double VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;

    if (!VAR_7)
    {

        VAR_7 = FUNC_5(1);
        FUNC_6(VAR_7, VAR_0);


        VAR_20 = 2.0 * VAR_2;
        for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
        {
            FUNC_1(VAR_1);
            for (VAR_9 = 0; VAR_9 <= VAR_4; VAR_9++)
            {
                for (VAR_10 = 1; VAR_10 >= 0; VAR_10--)
                {
                    VAR_11 = (VAR_8 + VAR_10) % VAR_6 + 0.5;
                    VAR_12 = VAR_9 % VAR_4;


                    VAR_13 = (VAR_3 + VAR_5 * FUNC_0(VAR_11 * VAR_20 / VAR_6)) * FUNC_0(VAR_12 * VAR_20 / VAR_4);
                    VAR_14 = VAR_5 * FUNC_9(VAR_11 * VAR_20 / VAR_6);
                    VAR_15 = (VAR_3 + VAR_5 * FUNC_0(VAR_11 * VAR_20 / VAR_6)) * FUNC_9(VAR_12 * VAR_20 / VAR_4);


                    VAR_16 = VAR_13 - VAR_3 * FUNC_0(VAR_12 * VAR_20 / VAR_4);
                    VAR_17 = VAR_14;
                    VAR_18 = VAR_15 - VAR_3 * FUNC_9(VAR_12 * VAR_20 / VAR_4);
                    VAR_19 = 1.0 / FUNC_10(VAR_16*VAR_16 + VAR_17*VAR_17 + VAR_18*VAR_18);
                    VAR_16 *= VAR_19;
                    VAR_17 *= VAR_19;
                    VAR_18 *= VAR_19;

                    FUNC_7((float) VAR_16, (float) VAR_17, (float) VAR_18);
                    FUNC_8((float) VAR_13, (float) VAR_14, (float) VAR_15);
                }
            }

            FUNC_3();
        }


        FUNC_4();
    }
    else
    {

        FUNC_2(VAR_7);
    }
}
