
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct t_SifDmaTransfer {int size; scalar_t__ attr; struct TocEntry* dest; struct TocEntry* src; } ;
struct dirTocEntry {int length; int fileProperties; } ;
struct TocEntry {int filename; } ;
typedef enum CDVD_getMode { ____Placeholder_CDVD_getMode } CDVD_getMode ;
struct TYPE_2__ {int sector_num; char const* pathname; char* cache; scalar_t__ path_depth; int cache_size; scalar_t__ cache_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_3 (int ,char const*) ;
 int FUNC_4 (struct TocEntry*,struct dirTocEntry*) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct t_SifDmaTransfer*,int) ;
 int FUNC_8 (int ,char*) ;
 scalar_t__ FUNC_9 (char const*) ;

int FUNC_10(const char *VAR_7, const char *VAR_8, enum CDVD_getMode VAR_9, struct TocEntry VAR_10[], unsigned int VAR_11)
{
    int VAR_12;
    int VAR_13;

    struct TocEntry VAR_14;

    struct dirTocEntry *VAR_15;

    int VAR_16;

    struct t_SifDmaTransfer VAR_17;
    int VAR_18;

    VAR_18 = 0;





    VAR_12 = 0;


    if (FUNC_0(VAR_7, VAR_1) != VAR_6) {




        return -1;
    }





    if ((VAR_9 == VAR_2) || (VAR_9 == VAR_3)) {

        if (FUNC_0(VAR_5.pathname, VAR_1) != VAR_6) {




            return -1;
        }

        VAR_15 = (struct dirTocEntry *)VAR_5.cache;


        VAR_15 = (struct dirTocEntry *)((u8 *)VAR_15 + VAR_15->length);


        if (VAR_5.path_depth == 0)
            VAR_15 = (struct dirTocEntry *)((u8 *)VAR_15 + VAR_15->length);

        VAR_13 = 0;

        while (1) {





            for (; VAR_15 < (struct dirTocEntry *)(VAR_5.cache + (VAR_5.cache_size * 2048)); VAR_15 = (struct dirTocEntry *)((u8 *)VAR_15 + VAR_15->length)) {
                if (VAR_15->length == 0) {




                    VAR_15 = (struct dirTocEntry *)(VAR_5.cache + (((((char *)VAR_15 - VAR_5.cache) / 2048) + 1) * 2048));
                }

                if (VAR_15 >= (struct dirTocEntry *)(VAR_5.cache + (VAR_5.cache_size * 2048))) {


                    break;
                }


                if (VAR_15->fileProperties & 0x02) {






                    while (FUNC_6(VAR_18) >= 0)
                        ;

                    FUNC_4(&VAR_14, VAR_15);

                    if (VAR_13 == 0) {
                        if (VAR_5.path_depth != 0) {




                            FUNC_8(VAR_14.filename, "..");
                        }
                    }




                    VAR_17.src = &VAR_14;
                    VAR_17.dest = &VAR_10[VAR_12];
                    VAR_17.size = sizeof(struct TocEntry);
                    VAR_17.attr = 0;


                    FUNC_2(&VAR_16);

                    VAR_18 = FUNC_7(&VAR_17, 1);

                    FUNC_1(VAR_16);

                    VAR_12++;
                } else
                {



                }

                VAR_13++;

                if (VAR_12 >= VAR_11)
                    return (VAR_12);

            }


            if ((VAR_5.cache_offset + VAR_5.cache_size) < VAR_5.sector_num) {
                if (FUNC_0(VAR_5.pathname, VAR_0) != VAR_6) {


                    return -1;
                }
            } else
                break;

            VAR_15 = (struct dirTocEntry *)VAR_5.cache;
        }
    }


    if ((VAR_9 == VAR_4) || (VAR_9 == VAR_3)) {

        if (FUNC_0(VAR_5.pathname, VAR_1) != VAR_6) {




            return -1;
        }

        VAR_15 = (struct dirTocEntry *)VAR_5.cache;


        VAR_15 = (struct dirTocEntry *)((u8 *)VAR_15 + VAR_15->length);


        if (VAR_5.path_depth == 0)
            VAR_15 = (struct dirTocEntry *)((u8 *)VAR_15 + VAR_15->length);

        VAR_13 = 0;

        while (1) {





            for (; VAR_15 < (struct dirTocEntry *)(VAR_5.cache + (VAR_5.cache_size * 2048)); VAR_15 = (struct dirTocEntry *)((u8 *)VAR_15 + VAR_15->length)) {
                if (VAR_15->length == 0) {




                    VAR_15 = (struct dirTocEntry *)(VAR_5.cache + (((((char *)VAR_15 - VAR_5.cache) / 2048) + 1) * 2048));
                }

                if (VAR_15 >= (struct dirTocEntry *)(VAR_5.cache + (VAR_5.cache_size * 2048))) {


                    break;
                }


                if (VAR_15->fileProperties & 0x02) {



                } else
                {


                    while (FUNC_6(VAR_18) >= 0)
                        ;

                    FUNC_4(&VAR_14, VAR_15);

                    if (FUNC_9(VAR_8) > 0) {

                        if (FUNC_3(VAR_14.filename, VAR_8) == VAR_6) {







                            VAR_17.src = &VAR_14;
                            VAR_17.dest = &VAR_10[VAR_12];
                            VAR_17.size = sizeof(struct TocEntry);
                            VAR_17.attr = 0;


                            FUNC_2(&VAR_16);

                            VAR_18 = FUNC_7(&VAR_17, 1);

                            FUNC_1(VAR_16);

                            VAR_12++;
                        } else {



                        }
                    } else
                    {







                        VAR_17.src = &VAR_14;
                        VAR_17.dest = &VAR_10[VAR_12];
                        VAR_17.size = sizeof(struct TocEntry);
                        VAR_17.attr = 0;


                        FUNC_2(&VAR_16);

                        VAR_18 = FUNC_7(&VAR_17, 1);

                        FUNC_1(VAR_16);

                        VAR_12++;
                    }
                }

                VAR_13++;

                if (VAR_12 >= VAR_11)
                    return (VAR_12);

            }



            if ((VAR_5.cache_offset + VAR_5.cache_size) < VAR_5.sector_num) {
                if (FUNC_0(VAR_5.pathname, VAR_0) != VAR_6) {


                    return -1;
                }
            } else
                break;

            VAR_15 = (struct dirTocEntry *)VAR_5.cache;
        }
    }


    return (VAR_12);
}
