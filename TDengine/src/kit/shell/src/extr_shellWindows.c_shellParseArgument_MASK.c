
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arguments {char* host; int is_use_passwd; char* user; char* commands; int is_raw_time; char* database; char* timezone; int file; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 () ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,char*) ;
 int VAR_3 ;

void FUNC_6(int VAR_4, char *VAR_5[], struct arguments *VAR_6) {
  for (int VAR_7 = 1; VAR_7 < VAR_4; VAR_7++) {

    if (FUNC_4(VAR_5[VAR_7], "-h") == 0) {
      if (VAR_7 < VAR_4 - 1) {
        VAR_6->host = VAR_5[++VAR_7];
      } else {
        FUNC_2(VAR_2, "option -h requires an argument\n");
        FUNC_1(VAR_0);
      }
    }

    else if (FUNC_4(VAR_5[VAR_7], "-p") == 0) {
      VAR_6->is_use_passwd = 1;
    }

    else if (FUNC_4(VAR_5[VAR_7], "-P") == 0) {
      if (VAR_7 < VAR_4 - 1) {
        VAR_3 = FUNC_0(VAR_5[++VAR_7]);
      } else {
        FUNC_2(VAR_2, "option -P requires an argument\n");
        FUNC_1(VAR_0);
      }
    }

    else if (FUNC_4(VAR_5[VAR_7], "-u") == 0) {
      if (VAR_7 < VAR_4 - 1) {
        VAR_6->user = VAR_5[++VAR_7];
      } else {
        FUNC_2(VAR_2, "option -u requires an argument\n");
        FUNC_1(VAR_0);
      }
    } else if (FUNC_4(VAR_5[VAR_7], "-c") == 0) {
      if (VAR_7 < VAR_4 - 1) {
        FUNC_5(VAR_1, VAR_5[++VAR_7]);
      } else {
        FUNC_2(VAR_2, "Option -c requires an argument\n");
        FUNC_1(VAR_0);
      }
    } else if (FUNC_4(VAR_5[VAR_7], "-s") == 0) {
      if (VAR_7 < VAR_4 - 1) {
        VAR_6->commands = VAR_5[++VAR_7];
      } else {
        FUNC_2(VAR_2, "option -s requires an argument\n");
        FUNC_1(VAR_0);
      }
    } else if (FUNC_4(VAR_5[VAR_7], "-r") == 0) {
      VAR_6->is_raw_time = 1;
    }

    else if (FUNC_4(VAR_5[VAR_7], "-f") == 0) {
      if (VAR_7 < VAR_4 - 1) {
        FUNC_5(VAR_6->file, VAR_5[++VAR_7]);
      } else {
        FUNC_2(VAR_2, "option -f requires an argument\n");
        FUNC_1(VAR_0);
      }
    }

    else if (FUNC_4(VAR_5[VAR_7], "-d") == 0) {
      if (VAR_7 < VAR_4 - 1) {
        VAR_6->database = VAR_5[++VAR_7];
      } else {
        FUNC_2(VAR_2, "option -d requires an argument\n");
        FUNC_1(VAR_0);
      }
    }

    else if (FUNC_4(VAR_5[VAR_7], "-t") == 0) {
      if (VAR_7 < VAR_4 - 1) {
        VAR_6->timezone = VAR_5[++VAR_7];
      } else {
        FUNC_2(VAR_2, "option -t requires an argument\n");
        FUNC_1(VAR_0);
      }
    }

    else if (FUNC_4(VAR_5[VAR_7], "--help") == 0) {
      FUNC_3();
      FUNC_1(VAR_0);
    } else {
      FUNC_2(VAR_2, "wrong options\n");
      FUNC_3();
      FUNC_1(VAR_0);
    }
  }
}
