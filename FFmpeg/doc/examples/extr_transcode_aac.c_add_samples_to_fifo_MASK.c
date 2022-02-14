
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int AVAudioFifo ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 int const FUNC_2 (int *,void**,int const) ;
 int FUNC_3 (int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(AVAudioFifo *VAR_2,
                               uint8_t **VAR_3,
                               const int VAR_4)
{
    int VAR_5;



    if ((VAR_5 = FUNC_0(VAR_2, FUNC_1(VAR_2) + VAR_4)) < 0) {
        FUNC_3(VAR_1, "Could not reallocate FIFO\n");
        return VAR_5;
    }


    if (FUNC_2(VAR_2, (void **)VAR_3,
                            VAR_4) < VAR_4) {
        FUNC_3(VAR_1, "Could not write data to FIFO\n");
        return VAR_0;
    }
    return 0;
}
