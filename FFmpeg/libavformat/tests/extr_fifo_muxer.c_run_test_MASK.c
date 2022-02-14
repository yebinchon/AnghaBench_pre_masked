
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int write_header_ret; int write_trailer_ret; int (* test_func ) (int *,int **,int *) ;char* test_name; int pkt_data; scalar_t__ print_summary_on_deinit; int options; } ;
typedef TYPE_1__ TestCase ;
typedef int AVFormatContext ;
typedef int AVDictionary ;


 int VAR_0 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (int **,int ,char*,char*,int ) ;
 int FUNC_2 (int **,char*,char*,int ) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,char*) ;
 int FUNC_6 (int **) ;
 int FUNC_7 (char*,char*,char*) ;
 int FUNC_8 (char*,int,char*,int,int,int) ;
 int VAR_1 ;
 int FUNC_9 (int *,int **,int *) ;

__attribute__((used)) static int FUNC_10(const TestCase *VAR_2)
{
    AVDictionary *VAR_3 = ((void*)0);
    AVFormatContext *VAR_4 = ((void*)0);
    char VAR_5[VAR_0];
    int VAR_6, VAR_7;

    VAR_6 = FUNC_6(&VAR_4);
    if (VAR_6 < 0) {
        FUNC_5(VAR_1, "Muxer initialization failed: %s\n", FUNC_3(VAR_6));
        goto end;
    }

    if (VAR_2->options) {
        VAR_6 = FUNC_1(&VAR_3, VAR_2->options, "=", ":", 0);
        if (VAR_6 < 0) {
            FUNC_5(VAR_1, "Failed to parse options: %s\n", FUNC_3(VAR_6));
            goto end;
        }
    }

    FUNC_8(VAR_5, VAR_0,
             "print_deinit_summary=%d:write_header_ret=%d:write_trailer_ret=%d",
             (int)VAR_2->print_summary_on_deinit, VAR_2->write_header_ret,
             VAR_2->write_trailer_ret);
    VAR_6 = FUNC_2(&VAR_3, "format_opts", VAR_5, 0);
    VAR_7 = FUNC_2(&VAR_3, "fifo_format", "fifo_test", 0);
    if (VAR_6 < 0 || VAR_7 < 0) {
        FUNC_5(VAR_1, "Failed to set options for test muxer: %s\n",
                FUNC_3(VAR_6));
        goto end;
    }

    VAR_6 = VAR_2->test_func(VAR_4, &VAR_3, &VAR_2->pkt_data);

end:
    FUNC_7("%s: %s\n", VAR_2->test_name, VAR_6 < 0 ? "fail" : "ok");
    FUNC_4(VAR_4);
    FUNC_0(&VAR_3);
    return VAR_6;
}
