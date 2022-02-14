
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {intptr_t end; intptr_t start; } ;
typedef TYPE_1__ soc_reserved_region_t ;
struct TYPE_7__ {intptr_t start; intptr_t size; } ;
typedef TYPE_2__ soc_memory_region_t ;
typedef int in_regions ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,intptr_t,intptr_t,...) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 size_t FUNC_4 () ;
 int FUNC_5 (TYPE_1__*,size_t) ;
 int VAR_1 ;
 int VAR_2 ;

size_t FUNC_6(soc_memory_region_t *VAR_3)
{
    soc_memory_region_t *VAR_4 = VAR_3;

    soc_memory_region_t VAR_5[VAR_1];
    FUNC_3(VAR_5, VAR_2, sizeof(VAR_5));
    soc_memory_region_t *VAR_6 = VAR_5;

    size_t VAR_7 = FUNC_4();
    soc_reserved_region_t VAR_8[VAR_7];

    FUNC_5(VAR_8, VAR_7);





    FUNC_0(VAR_0, "Building list of available memory regions:");
    while(VAR_6 != VAR_5 + VAR_1) {
        soc_memory_region_t VAR_9 = *VAR_6;
        FUNC_1(VAR_0, "Examining memory region 0x%08x - 0x%08x", VAR_9.start, VAR_9.start + VAR_9.size);
        intptr_t VAR_10 = VAR_9.start;
        intptr_t VAR_11 = VAR_10 + VAR_9.size;
        bool VAR_12 = 1;
        bool VAR_13 = 1;

        for (size_t VAR_14 = 0; VAR_14 < VAR_7; VAR_14++) {
            if (VAR_8[VAR_14].end <= VAR_10) {

                continue;
            }
            else if (VAR_8[VAR_14].start >= VAR_11) {

                break;
            }
            else if (VAR_8[VAR_14].start <= VAR_10 &&
                     VAR_8[VAR_14].end >= VAR_11) {
                FUNC_1(VAR_0, "Region 0x%08x - 0x%08x inside of reserved 0x%08x - 0x%08x",
                               VAR_10, VAR_11, VAR_8[VAR_14].start, VAR_8[VAR_14].end);

                VAR_12 = 0;
                break;
            }
            else if (VAR_10 < VAR_8[VAR_14].start &&
                     VAR_11 > VAR_8[VAR_14].end) {
                FUNC_1(VAR_0, "Region 0x%08x - 0x%08x contains reserved 0x%08x - 0x%08x",
                               VAR_10, VAR_11, VAR_8[VAR_14].start, VAR_8[VAR_14].end);
                FUNC_2(VAR_10 < VAR_8[VAR_14].start);
                FUNC_2(VAR_11 > VAR_8[VAR_14].end);


                VAR_11 = VAR_8[VAR_14].start;
                VAR_9.size = VAR_11 - VAR_10;



                VAR_6->size -= (VAR_8[VAR_14].end - VAR_6->start);
                VAR_6->start = VAR_8[VAR_14].end;


                VAR_13 = 0;
                break;
            }
            else if (VAR_8[VAR_14].start <= VAR_10) {
                FUNC_1(VAR_0, "Start of region 0x%08x - 0x%08x overlaps reserved 0x%08x - 0x%08x",
                               VAR_10, VAR_11, VAR_8[VAR_14].start, VAR_8[VAR_14].end);
                VAR_9.start = VAR_8[VAR_14].end;
                VAR_10 = VAR_9.start;
                VAR_9.size = VAR_11 - VAR_10;
            }
            else {
                FUNC_1(VAR_0, "End of region 0x%08x - 0x%08x overlaps reserved 0x%08x - 0x%08x",
                               VAR_10, VAR_11, VAR_8[VAR_14].start, VAR_8[VAR_14].end);
                VAR_11 = VAR_8[VAR_14].start;
                VAR_9.size = VAR_11 - VAR_10;
            }
        }

        if (VAR_12) {
            FUNC_0(VAR_0, "Available memory region 0x%08x - 0x%08x", VAR_9.start, VAR_9.start + VAR_9.size);
            *VAR_4++ = VAR_9;
        }
        if (VAR_13) {
            VAR_6++;
        }
    }

    return (VAR_4 - VAR_3);
}
