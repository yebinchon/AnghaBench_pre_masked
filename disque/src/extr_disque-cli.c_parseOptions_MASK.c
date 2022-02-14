
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char* sds ;
struct TYPE_2__ {char* hostip; int stdinarg; char* hostsocket; double interval; char* auth; int latency_mode; int latency_history; int slave_mode; int stat_mode; int scan_mode; char* pattern; int intrinsic_latency_mode; int getrdb_mode; char* rdb_filename; int pipe_mode; int bigkeys; char* eval; int cluster_mode; char* mb_delim; void* pipe_timeout; void* intrinsic_latency_duration; int output; void* dbnum; int repeat; void* hostport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 double FUNC_0 (char*) ;
 void* FUNC_1 (char*) ;
 char* FUNC_2 () ;
 TYPE_1__ VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 void* FUNC_7 (char*) ;
 int VAR_4 ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,int *,int) ;
 int FUNC_10 () ;

__attribute__((used)) static int FUNC_11(int VAR_5, char **VAR_6) {
    int VAR_7;

    for (VAR_7 = 1; VAR_7 < VAR_5; VAR_7++) {
        int VAR_8 = VAR_7==VAR_5-1;

        if (!FUNC_8(VAR_6[VAR_7],"-h") && !VAR_8) {
            FUNC_6(VAR_3.hostip);
            VAR_3.hostip = FUNC_7(VAR_6[++VAR_7]);
        } else if (!FUNC_8(VAR_6[VAR_7],"-h") && VAR_8) {
            FUNC_10();
        } else if (!FUNC_8(VAR_6[VAR_7],"--help")) {
            FUNC_10();
        } else if (!FUNC_8(VAR_6[VAR_7],"-x")) {
            VAR_3.stdinarg = 1;
        } else if (!FUNC_8(VAR_6[VAR_7],"-p") && !VAR_8) {
            VAR_3.hostport = FUNC_1(VAR_6[++VAR_7]);
        } else if (!FUNC_8(VAR_6[VAR_7],"-s") && !VAR_8) {
            VAR_3.hostsocket = VAR_6[++VAR_7];
        } else if (!FUNC_8(VAR_6[VAR_7],"-r") && !VAR_8) {
            VAR_3.repeat = FUNC_9(VAR_6[++VAR_7],((void*)0),10);
        } else if (!FUNC_8(VAR_6[VAR_7],"-i") && !VAR_8) {
            double VAR_9 = FUNC_0(VAR_6[++VAR_7]);
            VAR_3.interval = VAR_9*1000000;
        } else if (!FUNC_8(VAR_6[VAR_7],"-n") && !VAR_8) {
            VAR_3.dbnum = FUNC_1(VAR_6[++VAR_7]);
        } else if (!FUNC_8(VAR_6[VAR_7],"-a") && !VAR_8) {
            VAR_3.auth = VAR_6[++VAR_7];
        } else if (!FUNC_8(VAR_6[VAR_7],"--raw")) {
            VAR_3.output = VAR_1;
        } else if (!FUNC_8(VAR_6[VAR_7],"--no-raw")) {
            VAR_3.output = VAR_2;
        } else if (!FUNC_8(VAR_6[VAR_7],"--csv")) {
            VAR_3.output = VAR_0;
        } else if (!FUNC_8(VAR_6[VAR_7],"--latency")) {
            VAR_3.latency_mode = 1;
        } else if (!FUNC_8(VAR_6[VAR_7],"--latency-history")) {
            VAR_3.latency_mode = 1;
            VAR_3.latency_history = 1;
        } else if (!FUNC_8(VAR_6[VAR_7],"--slave")) {
            VAR_3.slave_mode = 1;
        } else if (!FUNC_8(VAR_6[VAR_7],"--stat")) {
            VAR_3.stat_mode = 1;
        } else if (!FUNC_8(VAR_6[VAR_7],"--scan")) {
            VAR_3.scan_mode = 1;
        } else if (!FUNC_8(VAR_6[VAR_7],"--pattern") && !VAR_8) {
            VAR_3.pattern = VAR_6[++VAR_7];
        } else if (!FUNC_8(VAR_6[VAR_7],"--intrinsic-latency") && !VAR_8) {
            VAR_3.intrinsic_latency_mode = 1;
            VAR_3.intrinsic_latency_duration = FUNC_1(VAR_6[++VAR_7]);
        } else if (!FUNC_8(VAR_6[VAR_7],"--rdb") && !VAR_8) {
            VAR_3.getrdb_mode = 1;
            VAR_3.rdb_filename = VAR_6[++VAR_7];
        } else if (!FUNC_8(VAR_6[VAR_7],"--pipe")) {
            VAR_3.pipe_mode = 1;
        } else if (!FUNC_8(VAR_6[VAR_7],"--pipe-timeout") && !VAR_8) {
            VAR_3.pipe_timeout = FUNC_1(VAR_6[++VAR_7]);
        } else if (!FUNC_8(VAR_6[VAR_7],"--bigkeys")) {
            VAR_3.bigkeys = 1;
        } else if (!FUNC_8(VAR_6[VAR_7],"--eval") && !VAR_8) {
            VAR_3.eval = VAR_6[++VAR_7];
        } else if (!FUNC_8(VAR_6[VAR_7],"-c")) {
            VAR_3.cluster_mode = 1;
        } else if (!FUNC_8(VAR_6[VAR_7],"-d") && !VAR_8) {
            FUNC_6(VAR_3.mb_delim);
            VAR_3.mb_delim = FUNC_7(VAR_6[++VAR_7]);
        } else if (!FUNC_8(VAR_6[VAR_7],"-v") || !FUNC_8(VAR_6[VAR_7], "--version")) {
            sds VAR_10 = FUNC_2();
            FUNC_5("disque %s\n", VAR_10);
            FUNC_6(VAR_10);
            FUNC_3(0);
        } else {
            if (VAR_6[VAR_7][0] == '-') {
                FUNC_4(VAR_4,
                    "Unrecognized option or bad number of args for: '%s'\n",
                    VAR_6[VAR_7]);
                FUNC_3(1);
            } else {

                break;
            }
        }
    }
    return VAR_7;
}
