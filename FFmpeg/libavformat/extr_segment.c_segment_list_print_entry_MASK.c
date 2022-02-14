
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* filename; scalar_t__ start_time; scalar_t__ end_time; } ;
typedef TYPE_1__ SegmentListEntry ;
typedef int ListType ;
typedef int AVIOContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int FUNC_0 (int) ;
 int FUNC_1 (char**,char*,int *,int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (void*,int ,char*,char*) ;
 int FUNC_4 (int *,char*,char*,...) ;
 int FUNC_5 (int *,char*) ;

__attribute__((used)) static void FUNC_6(AVIOContext *VAR_3,
                                     ListType VAR_4,
                                     const SegmentListEntry *VAR_5,
                                     void *VAR_6)
{
    switch (VAR_4) {
    case 129:
        FUNC_4(VAR_3, "%s\n", VAR_5->filename);
        break;
    case 132:
    case 131:
        FUNC_5(VAR_3, VAR_5->filename);
        FUNC_4(VAR_3, ",%f,%f\n", VAR_5->start_time, VAR_5->end_time);
        break;
    case 128:
        FUNC_4(VAR_3, "#EXTINF:%f,\n%s\n",
                    VAR_5->end_time - VAR_5->start_time, VAR_5->filename);
        break;
    case 130:
    {
        char *VAR_7;
        if (FUNC_1(&VAR_7, VAR_5->filename, ((void*)0), VAR_1, VAR_0) < 0) {
            FUNC_3(VAR_6, VAR_2,
                   "Error writing list entry '%s' in list file\n", VAR_5->filename);
            return;
        }
        FUNC_4(VAR_3, "file %s\n", VAR_7);
        FUNC_2(VAR_7);
        break;
    }
    default:
        FUNC_0(!"Invalid list type");
    }
}
