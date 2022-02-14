
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct dirTocEntry {int length; int fileProperties; } ;
struct TocEntry {char* filename; } ;
struct TYPE_2__ {scalar_t__ valid; char* cache; int cache_size; int sector_num; scalar_t__ cache_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_1 (char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct TocEntry*,struct dirTocEntry*) ;
 int FUNC_3 (char const*,char*,char*) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (char*,char*) ;

int FUNC_6(const char *VAR_6, struct TocEntry *VAR_7)
{
    static char VAR_8[128 + 1];
    static char VAR_9[1024 + 1];

    struct dirTocEntry *VAR_10;





    FUNC_3(VAR_6, VAR_9, VAR_8);
    if ((VAR_2.valid == VAR_5) && (FUNC_1(VAR_9) == VAR_4)) {



        VAR_10 = (struct dirTocEntry *)VAR_2.cache;

        for (; VAR_10 < (struct dirTocEntry *)(VAR_2.cache + (VAR_2.cache_size * 2048)); VAR_10 = (struct dirTocEntry *)((u8 *)VAR_10 + VAR_10->length)) {
            if (VAR_10->length == 0) {




                VAR_10 = (struct dirTocEntry *)(VAR_2.cache + (((((char *)VAR_10 - VAR_2.cache) / 2048) + 1) * 2048));
            }

            if (VAR_10 >= (struct dirTocEntry *)(VAR_2.cache + (VAR_2.cache_size * 2048))) {

                break;
            }

            if ((VAR_10->fileProperties & 0x02) == 0) {

                FUNC_2(VAR_7, VAR_10);

                if (FUNC_5(VAR_7->filename, VAR_8) == 0) {

                    return VAR_5;
                }
            }
        }




        if (VAR_2.cache_size == VAR_2.sector_num)
            return VAR_3;


        if (VAR_2.cache_offset == 0) {

            if (FUNC_0(VAR_9, VAR_0) != VAR_5)
                return VAR_3;
        } else {

            if (FUNC_0(VAR_9, VAR_1) != VAR_5)
                return VAR_3;
        }
    } else {




        if (FUNC_0(VAR_9, VAR_1) != VAR_5) {




            return VAR_3;
        }
    }







    while (VAR_2.cache_size > 0) {
        VAR_10 = (struct dirTocEntry *)VAR_2.cache;

        if (VAR_2.cache_offset == 0)
            VAR_10 = (struct dirTocEntry *)((u8 *)VAR_10 + VAR_10->length);

        for (; VAR_10 < (struct dirTocEntry *)(VAR_2.cache + (VAR_2.cache_size * 2048)); VAR_10 = (struct dirTocEntry *)((u8 *)VAR_10 + VAR_10->length)) {
            if (VAR_10->length == 0) {





                VAR_10 = (struct dirTocEntry *)(VAR_2.cache + (((((char *)VAR_10 - VAR_2.cache) / 2048) + 1) * 2048));
            }

            if (VAR_10 >= (struct dirTocEntry *)(VAR_2.cache + (VAR_2.cache_size * 2048))) {

                break;
            }

            FUNC_2(VAR_7, VAR_10);

            if (FUNC_5(VAR_7->filename, VAR_8) == 0) {




                return VAR_5;
            }




        }





        FUNC_0(VAR_9, VAR_0);
    }







    return VAR_3;
}
