
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {size_t ts_number_pat_entries; TYPE_1__* pat_info; } ;
typedef TYPE_2__ hb_stream_t ;
typedef int bitbuf_t ;
struct TYPE_4__ {unsigned int program_number; unsigned int program_map_PID; } ;


 void* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,unsigned char*,unsigned int,int ) ;
 int FUNC_2 (char*) ;
 size_t VAR_0 ;
 int FUNC_3 (unsigned char*,int const*,int) ;

__attribute__((used)) static int FUNC_4(const uint8_t *VAR_1, hb_stream_t *VAR_2)
{
    unsigned char VAR_3[1024];
    unsigned int VAR_4 = 0;

    int VAR_5 = 0;



    int VAR_6 = 0;
    int VAR_7 = (VAR_1[3] & 0x30) >> 4;
    if (VAR_7 == 0)
            return 0;
    else if (VAR_7 == 0x2)
            VAR_6 = 184;
    else if (VAR_7 == 0x3)
            VAR_6 = VAR_1[4] + 1;
    if (VAR_6 > 184)
            return 0;


    int VAR_8 = VAR_1[4 + VAR_6] + 1;


    int VAR_9;
    VAR_9 = (VAR_1[1] & 0x40) != 0;

    if (VAR_9)
            VAR_5 = 1;


    if (VAR_5 && (184 - VAR_6) > 0)
    {
            if (VAR_4 + 184 - VAR_6 - VAR_8 > 1024)
            {
                    FUNC_2("decode_PAT - Bad program section length (> 1024)");
                    return 0;
            }
            FUNC_3(VAR_3 + VAR_4, VAR_1 + 4 + VAR_6 + VAR_8, 184 - VAR_6 - VAR_8);
            VAR_4 += 184 - VAR_6 - VAR_8;
    }

    if (VAR_9 && VAR_5)
    {
            FUNC_3(VAR_3 + VAR_4, VAR_1 + 4 + VAR_6 + 1, VAR_8 - 1);


            unsigned int VAR_10 = 0;

            {
                    bitbuf_t VAR_11;
                    FUNC_1(&VAR_11, VAR_3 + VAR_10, VAR_4 - VAR_10, 0);

                    unsigned char VAR_12 = FUNC_0(&VAR_11, 8);
                    FUNC_0(&VAR_11, 4);
                    unsigned int VAR_13 = FUNC_0(&VAR_11, 12);
                    FUNC_0(&VAR_11, 16);
                    FUNC_0(&VAR_11, 2);
                    FUNC_0(&VAR_11, 5);
                    FUNC_0(&VAR_11, 1);
                    FUNC_0(&VAR_11, 8);
                    FUNC_0(&VAR_11, 8);

                    switch (VAR_12)
                    {
                      case 0x00:
                        {

                          VAR_13 -= 5;
                          VAR_13 -= 4;
                          int VAR_14 = 0;
                          VAR_2->ts_number_pat_entries = 0;
                          while ((VAR_14 < VAR_13) && (VAR_2->ts_number_pat_entries < VAR_0))
                          {
                            unsigned int VAR_15 = FUNC_0(&VAR_11, 16);
                            VAR_2->pat_info[VAR_2->ts_number_pat_entries].program_number = VAR_15;

                            FUNC_0(&VAR_11, 3);
                            if (VAR_15 == 0)
                            {
                              FUNC_0(&VAR_11, 13);
                            }
                            else
                            {
                              unsigned int VAR_16 = FUNC_0(&VAR_11, 13);
                                VAR_2->pat_info[VAR_2->ts_number_pat_entries].program_map_PID = VAR_16;
                            }
                            VAR_14 += 4;
                            VAR_2->ts_number_pat_entries++;
                          }
                        }
                        break;
                      case 0xC7:
                            {
                                    break;
                            }
                      case 0xC8:
                            {
                                    break;
                            }
                    }


            }


    }
    return 1;
}
