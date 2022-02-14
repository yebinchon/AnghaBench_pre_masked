
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,int,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned char*,unsigned char*,int,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int *,int *,unsigned int) ;
 int FUNC_4 (unsigned char*,int ,int) ;
 unsigned char* VAR_11 ;
 int * VAR_12 ;
 int FUNC_5 (int *,unsigned int,int,unsigned char*,int,int) ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static void FUNC_6(void *VAR_15, unsigned char *VAR_16, int VAR_17)
{
    int VAR_18, VAR_19;

    if (!VAR_9)
        return;


    VAR_10 = FUNC_1();

    VAR_19 = VAR_3 * 100 / VAR_13;
    VAR_18 = VAR_0;

    if (VAR_8 > (unsigned int) (VAR_17 * VAR_18) / VAR_19)
    {
        int VAR_20;







        {
            VAR_20 = FUNC_5(VAR_12, VAR_8, VAR_18, VAR_11, VAR_17, VAR_19);
            FUNC_4(VAR_16, 0, VAR_17);
            FUNC_2(VAR_16, VAR_11, VAR_17, VAR_6);
        }
        FUNC_3(VAR_12, &VAR_12[VAR_20], VAR_8 - VAR_20);
        VAR_8 -= VAR_20;
        FUNC_0(VAR_1, "%03i my_audio_callback: used %i samples",
                     VAR_10 % 1000, VAR_17 / VAR_4);
    }
    else
    {
        unsigned int VAR_21 = (VAR_17 * VAR_18) / (VAR_19 * VAR_4);
        unsigned int VAR_22 = VAR_8 / VAR_2;
        VAR_14++;
        FUNC_0(VAR_1, "%03i Buffer underflow (%i).  %i samples present, %i needed",
                     VAR_10 % 1000, VAR_14, VAR_22, VAR_21);
        FUNC_4(VAR_16 , 0, VAR_17);
    }
}
