
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ verbose; } ;
struct Curl_easy {TYPE_1__ set; } ;


 unsigned int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (unsigned char) ;


 scalar_t__ FUNC_3 (unsigned char) ;






 int FUNC_4 (struct Curl_easy*,char*,...) ;

__attribute__((used)) static void FUNC_5(struct Curl_easy *VAR_2,
                     int VAR_3,
                     unsigned char *VAR_4,
                     size_t VAR_5)
{
  if(VAR_2->set.verbose) {
    unsigned int VAR_6 = 0;
    if(VAR_3) {
      FUNC_4(VAR_2, "%s IAC SB ", (VAR_3 == '<')? "RCVD":"SENT");
      if(VAR_5 >= 3) {
        int VAR_7;

        VAR_6 = VAR_4[VAR_5-2];
        VAR_7 = VAR_4[VAR_5-1];

        if(VAR_6 != VAR_0 || VAR_7 != VAR_1) {
          FUNC_4(VAR_2, "(terminated by ");
          if(FUNC_3(VAR_6))
            FUNC_4(VAR_2, "%s ", FUNC_2(VAR_6));
          else if(FUNC_1(VAR_6))
            FUNC_4(VAR_2, "%s ", FUNC_0(VAR_6));
          else
            FUNC_4(VAR_2, "%u ", VAR_6);
          if(FUNC_3(VAR_7))
            FUNC_4(VAR_2, "%s", FUNC_2(VAR_7));
          else if(FUNC_1(VAR_7))
            FUNC_4(VAR_2, "%s", FUNC_0(VAR_7));
          else
            FUNC_4(VAR_2, "%d", VAR_7);
          FUNC_4(VAR_2, ", not IAC SE!) ");
        }
      }
      VAR_5 -= 2;
    }
    if(VAR_5 < 1) {
      FUNC_4(VAR_2, "(Empty suboption?)");
      return;
    }

    if(FUNC_3(VAR_4[0])) {
      switch(VAR_4[0]) {
      case 133:
      case 132:
      case 134:
      case 135:
        FUNC_4(VAR_2, "%s", FUNC_2(VAR_4[0]));
        break;
      default:
        FUNC_4(VAR_2, "%s (unsupported)", FUNC_2(VAR_4[0]));
        break;
      }
    }
    else
      FUNC_4(VAR_2, "%d (unknown)", VAR_4[VAR_6]);

    switch(VAR_4[0]) {
    case 135:
      if(VAR_5 > 4)
        FUNC_4(VAR_2, "Width: %d ; Height: %d", (VAR_4[1]<<8) | VAR_4[2],
              (VAR_4[3]<<8) | VAR_4[4]);
      break;
    default:
      switch(VAR_4[1]) {
      case 130:
        FUNC_4(VAR_2, " IS");
        break;
      case 128:
        FUNC_4(VAR_2, " SEND");
        break;
      case 131:
        FUNC_4(VAR_2, " INFO/REPLY");
        break;
      case 129:
        FUNC_4(VAR_2, " NAME");
        break;
      }

      switch(VAR_4[0]) {
      case 133:
      case 132:
        VAR_4[VAR_5] = 0;
        FUNC_4(VAR_2, " \"%s\"", &VAR_4[2]);
        break;
      case 134:
        if(VAR_4[1] == 130) {
          FUNC_4(VAR_2, " ");
          for(VAR_6 = 3; VAR_6 < VAR_5; VAR_6++) {
            switch(VAR_4[VAR_6]) {
            case 136:
              FUNC_4(VAR_2, ", ");
              break;
            case 137:
              FUNC_4(VAR_2, " = ");
              break;
            default:
              FUNC_4(VAR_2, "%c", VAR_4[VAR_6]);
              break;
            }
          }
        }
        break;
      default:
        for(VAR_6 = 2; VAR_6 < VAR_5; VAR_6++)
          FUNC_4(VAR_2, " %.2x", VAR_4[VAR_6]);
        break;
      }
    }
    if(VAR_3)
      FUNC_4(VAR_2, "\n");
  }
}
