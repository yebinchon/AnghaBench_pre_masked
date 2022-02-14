
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;


typedef int cmd ;
struct TYPE_16__ {char* buffer; char* command; } ;
struct TYPE_15__ {unsigned int hend; unsigned int hstart; char** hist; } ;
typedef int TAOS ;
typedef TYPE_1__ Command ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (char) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 () ;
 char FUNC_5 () ;
 TYPE_12__ VAR_3 ;
 int FUNC_6 (TYPE_1__*,char*,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (TYPE_1__*,int ,int) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (TYPE_1__*,char*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (char*,char*,char*,char*) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (char*) ;
 int FUNC_21 (TYPE_1__*) ;
 int FUNC_22 () ;

void FUNC_23(TAOS *VAR_4, char *VAR_5) {
  unsigned VAR_6 = VAR_3.hend;
  char VAR_7[10] = "\0";
  Command VAR_8;
  FUNC_9(&VAR_8, 0, sizeof(VAR_8));
  VAR_8.buffer = (char *)FUNC_1(1, VAR_0);
  VAR_8.command = (char *)FUNC_1(1, VAR_0);
  FUNC_16(&VAR_8);


  char VAR_9;
  while (1) {
    VAR_9 = FUNC_5();

    if (VAR_9 < 0) {
      int VAR_10 = FUNC_2(VAR_9);
      VAR_7[0] = VAR_9;
      for (int VAR_11 = 1; VAR_11 < VAR_10; VAR_11++) {
        VAR_9 = FUNC_5();
        VAR_7[VAR_11] = VAR_9;
      }
      FUNC_6(&VAR_8, VAR_7, VAR_10);
    } else if (VAR_9 < '\033') {

      switch (VAR_9) {
        case 1:
          FUNC_13(&VAR_8);
          break;
        case 3:
          FUNC_14("\n");
          FUNC_15(&VAR_8, "");
          FUNC_8(0, VAR_2);
          break;
        case 4:
          FUNC_14("\n");
          FUNC_19(VAR_4);

          FUNC_22();
          FUNC_4();
          break;
        case 5:
          FUNC_12(&VAR_8);
          break;
        case 8:
          FUNC_0(&VAR_8);
          break;
        case '\n':
        case '\r':
          FUNC_14("\n");
          if (FUNC_7(&VAR_8)) {
            FUNC_17(VAR_5, "%s%s", VAR_8.buffer, VAR_8.command);
            FUNC_20(VAR_8.buffer);
            FUNC_20(VAR_8.command);
            return;
          } else {
            FUNC_21(&VAR_8);
          }
          break;
        case 12:
          FUNC_18("clear");
          FUNC_16(&VAR_8);
          break;
      }
    } else if (VAR_9 == '\033') {
      VAR_9 = FUNC_5();
      switch (VAR_9) {
        case '[':
          VAR_9 = FUNC_5();
          switch (VAR_9) {
            case 'A':
              if (VAR_6 != VAR_3.hstart) {
                VAR_6 = (VAR_6 + VAR_1 - 1) % VAR_1;
                FUNC_15(&VAR_8, (VAR_3.hist[VAR_6] == ((void*)0)) ? "" : VAR_3.hist[VAR_6]);
              }
              break;
            case 'B':
              if (VAR_6 != VAR_3.hend) {
                int VAR_12 = (VAR_6 + 1) % VAR_1;

                if (VAR_12 != VAR_3.hend) {
                  FUNC_15(&VAR_8, (VAR_3.hist[VAR_12] == ((void*)0)) ? "" : VAR_3.hist[VAR_12]);
                } else {
                  FUNC_15(&VAR_8, "");
                }
                VAR_6 = VAR_12;
              }
              break;
            case 'C':
              FUNC_11(&VAR_8);
              break;
            case 'D':
              FUNC_10(&VAR_8);
              break;
            case '1':
              if ((VAR_9 = FUNC_5()) == '~') {

                FUNC_13(&VAR_8);
              }
              break;
            case '2':
              if ((VAR_9 = FUNC_5()) == '~') {

              }
              break;
            case '3':
              if ((VAR_9 = FUNC_5()) == '~') {

                FUNC_3(&VAR_8);
              }
              break;
            case '4':
              if ((VAR_9 = FUNC_5()) == '~') {

                FUNC_12(&VAR_8);
              }
              break;
            case '5':
              if ((VAR_9 = FUNC_5()) == '~') {

              }
              break;
            case '6':
              if ((VAR_9 = FUNC_5()) == '~') {

              }
              break;
            case 72:

              FUNC_13(&VAR_8);
              break;
            case 70:

              FUNC_12(&VAR_8);
              break;
          }
          break;
      }
    } else if (VAR_9 == 0x7f) {

      FUNC_0(&VAR_8);
    } else {
      FUNC_6(&VAR_8, &VAR_9, 1);
    }
  }
}
