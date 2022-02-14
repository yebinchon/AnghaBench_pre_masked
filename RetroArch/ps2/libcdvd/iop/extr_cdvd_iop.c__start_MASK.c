
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct _iop_thread {int priority; int stacksize; scalar_t__ option; void* thread; int attr; } ;
struct TYPE_7__ {char* cache; scalar_t__ cache_size; scalar_t__ cache_offset; scalar_t__ sector_num; scalar_t__ sector_start; scalar_t__ path_depth; int valid; int pathname; } ;
struct TYPE_6__ {int datapattern; int spindlctrl; scalar_t__ trycount; } ;
struct TYPE_5__ {char* name; int version; char* desc; int * ops; int type; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,int,int *) ;
 scalar_t__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_2 (struct _iop_thread*) ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int,int *) ;
 int VAR_9 ;
 TYPE_2__ VAR_10 ;
 TYPE_1__ VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (int ,char*) ;

int FUNC_6(int VAR_13, char **VAR_14)
{
    int VAR_15;
    struct _iop_thread VAR_16;
    int VAR_17;


    FUNC_5(VAR_1.pathname, "");
    VAR_1.valid = VAR_2;
    VAR_1.path_depth = 0;
    VAR_1.sector_start = 0;
    VAR_1.sector_num = 0;
    VAR_1.cache_offset = 0;
    VAR_1.cache_size = 0;

    if (VAR_1.cache == ((void*)0))
        VAR_1.cache = (char *)FUNC_1(0, VAR_4 * 2048, ((void*)0));



    VAR_10.trycount = 0;
    VAR_10.spindlctrl = VAR_8;
    VAR_10.datapattern = VAR_7;


    VAR_11.name = "cdfs";
    VAR_11.type = VAR_3;
    VAR_11.version = 1;
    VAR_11.desc = "CDVD Filedriver";
    VAR_11.ops = &VAR_12;

    FUNC_3("cdfs");
    FUNC_0(&VAR_11);

    VAR_16.attr = VAR_9;
    VAR_16.thread = (void *)VAR_0;
    VAR_16.priority = 40;
    VAR_16.stacksize = 0x8000;
    VAR_16.option = 0;

    VAR_17 = FUNC_2(&VAR_16);

    if (VAR_17 > 0) {
        FUNC_4(VAR_17, ((void*)0));
        return VAR_6;
    } else
        return VAR_5;
}
