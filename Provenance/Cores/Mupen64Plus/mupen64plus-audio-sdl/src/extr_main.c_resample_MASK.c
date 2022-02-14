
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int spx_uint32_t ;
typedef int spx_int16_t ;
struct TYPE_3__ {unsigned char* data_in; int input_frames; float src_ratio; unsigned char* data_out; int output_frames; int input_frames_used; scalar_t__ end_of_input; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned char* VAR_4 ;
 int VAR_5 ;
 unsigned char* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 int * FUNC_3 (int,int,int,int ,int *) ;
 int FUNC_4 (int *,int const*,int*,int *,int*) ;
 int FUNC_5 (int *,int,int) ;
 int * VAR_9 ;
 TYPE_1__ VAR_10 ;
 int FUNC_6 (unsigned char*,short*,int) ;
 int * FUNC_7 (int ,int,int *) ;
 int FUNC_8 (int *,TYPE_1__*) ;
 int FUNC_9 (short*,unsigned char*,int) ;
 int * VAR_11 ;

__attribute__((used)) static int FUNC_10(unsigned char *VAR_12, int VAR_13, int VAR_14, unsigned char *VAR_15, int VAR_16, int VAR_17)
{
    int *VAR_18 = (int*)VAR_12;
    int *VAR_19 = (int*)VAR_15;
    int VAR_20 = 0, VAR_21 = 0;
    if (VAR_17 >= VAR_14)
    {
        int VAR_22 = VAR_14;
        int VAR_23 = 2*VAR_22;
        int VAR_24 = VAR_17;
        int VAR_25 = VAR_23 - 2*VAR_24;
        int VAR_26 = VAR_23 - VAR_24;
        for (VAR_20 = 0; VAR_20 < VAR_16/4; VAR_20++)
        {
            VAR_19[VAR_20] = VAR_18[VAR_21];
            if(VAR_26 >= 0)
            {
                ++VAR_21;
                VAR_26 += VAR_25;
            }
            else VAR_26 += VAR_23;
        }
        return VAR_21 * 4;
    }

    for (VAR_20 = 0; VAR_20 < VAR_16/4; VAR_20++)
    {
        VAR_21 = VAR_20 * VAR_14 / VAR_17;
        VAR_19[VAR_20] = VAR_18[VAR_21];
    }
    return VAR_21 * 4;
}
