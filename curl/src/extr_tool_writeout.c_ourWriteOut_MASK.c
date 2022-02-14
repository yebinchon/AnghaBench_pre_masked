
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct OutStruct {char const* filename; } ;
struct TYPE_2__ {int id; scalar_t__ name; } ;
typedef int FILE ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;




 int VAR_30 ;
 int VAR_31 ;
 int FUNC_0 (int *,int ,...) ;
 scalar_t__ FUNC_1 (char const*,scalar_t__) ;
 int FUNC_2 (int *,char const*,...) ;
 int FUNC_3 (char const,int *) ;
 int FUNC_4 (char*,int *) ;
 TYPE_1__* VAR_32 ;
 int * VAR_33 ;
 int * VAR_34 ;
 char* FUNC_5 (char const*,char) ;

void FUNC_6(CURL *VAR_35, struct OutStruct *VAR_36, const char *VAR_37)
{
  FILE *VAR_38 = VAR_34;
  const char *VAR_39 = VAR_37;
  char *VAR_40 = ((void*)0);
  long VAR_41;
  double VAR_42;

  while(VAR_39 && *VAR_39) {
    if('%' == *VAR_39 && VAR_39[1]) {
      if('%' == VAR_39[1]) {

        FUNC_3('%', VAR_38);
        VAR_39 += 2;
      }
      else {

        char *VAR_43;
        if('{' == VAR_39[1]) {
          char VAR_44;
          int VAR_45;
          bool VAR_46 = VAR_30;
          VAR_43 = FUNC_5(VAR_39, '}');
          VAR_39 += 2;
          if(!VAR_43) {
            FUNC_4("%{", VAR_38);
            continue;
          }
          VAR_44 = *VAR_43;
          *VAR_43 = 0;
          for(VAR_45 = 0; VAR_32[VAR_45].name; VAR_45++) {
            if(FUNC_1(VAR_39, VAR_32[VAR_45].name)) {
              VAR_46 = VAR_31;
              switch(VAR_32[VAR_45].id) {
              case 155:
                if((VAR_0 ==
                    FUNC_0(VAR_35, VAR_4, &VAR_40))
                   && VAR_40)
                  FUNC_4(VAR_40, VAR_38);
                break;
              case 152:
                if(VAR_0 ==
                   FUNC_0(VAR_35, VAR_21, &VAR_41))
                  FUNC_2(VAR_38, "%03ld", VAR_41);
                break;
              case 151:
                if(VAR_0 ==
                   FUNC_0(VAR_35, VAR_7,
                                     &VAR_41))
                  FUNC_2(VAR_38, "%03ld", VAR_41);
                break;
              case 153:
                if(VAR_0 ==
                   FUNC_0(VAR_35, VAR_6, &VAR_41))
                  FUNC_2(VAR_38, "%ld", VAR_41);
                break;
              case 138:
                if(VAR_0 ==
                   FUNC_0(VAR_35, VAR_20, &VAR_41))
                  FUNC_2(VAR_38, "%ld", VAR_41);
                break;
              case 146:
                if(VAR_0 ==
                   FUNC_0(VAR_35, VAR_12, &VAR_41))
                  FUNC_2(VAR_38, "%ld", VAR_41);
                break;
              case 141:
                if(VAR_0 ==
                   FUNC_0(VAR_35, VAR_17, &VAR_41))
                  FUNC_2(VAR_38, "%ld", VAR_41);
                break;
              case 140:
                if(VAR_0 ==
                   FUNC_0(VAR_35, VAR_18,
                                     &VAR_42))
                  FUNC_2(VAR_38, "%.6f", VAR_42);
                break;
              case 128:
                if(VAR_0 ==
                   FUNC_0(VAR_35, VAR_29, &VAR_42))
                  FUNC_2(VAR_38, "%.6f", VAR_42);
                break;
              case 147:
                if(VAR_0 ==
                   FUNC_0(VAR_35, VAR_11,
                                     &VAR_42))
                  FUNC_2(VAR_38, "%.6f", VAR_42);
                break;
              case 158:
                if(VAR_0 ==
                   FUNC_0(VAR_35, VAR_2, &VAR_42))
                  FUNC_2(VAR_38, "%.6f", VAR_42);
                break;
              case 159:
                if(VAR_0 ==
                   FUNC_0(VAR_35, VAR_1,
                                     &VAR_42))
                  FUNC_2(VAR_38, "%.6f", VAR_42);
                break;
              case 145:
                if(VAR_0 ==
                   FUNC_0(VAR_35, VAR_13,
                                     &VAR_42))
                  FUNC_2(VAR_38, "%.6f", VAR_42);
                break;
              case 131:
                if(VAR_0 ==
                   FUNC_0(VAR_35, VAR_28,
                                     &VAR_42))
                  FUNC_2(VAR_38, "%.6f", VAR_42);
                break;
              case 135:
                if(VAR_0 ==
                   FUNC_0(VAR_35, VAR_24, &VAR_42))
                  FUNC_2(VAR_38, "%.0f", VAR_42);
                break;
              case 136:
                if(VAR_0 ==
                   FUNC_0(VAR_35, VAR_23,
                                     &VAR_42))
                  FUNC_2(VAR_38, "%.0f", VAR_42);
                break;
              case 134:
                if(VAR_0 ==
                   FUNC_0(VAR_35, VAR_25,
                                     &VAR_42))
                  FUNC_2(VAR_38, "%.3f", VAR_42);
                break;
              case 133:
                if(VAR_0 ==
                   FUNC_0(VAR_35, VAR_26, &VAR_42))
                  FUNC_2(VAR_38, "%.3f", VAR_42);
                break;
              case 157:
                if((VAR_0 ==
                    FUNC_0(VAR_35, VAR_3, &VAR_40))
                   && VAR_40)
                  FUNC_4(VAR_40, VAR_38);
                break;
              case 154:
                if((VAR_0 ==
                    FUNC_0(VAR_35, VAR_5, &VAR_40))
                   && VAR_40)
                  FUNC_4(VAR_40, VAR_38);
                break;
              case 139:
                if((VAR_0 ==
                    FUNC_0(VAR_35, VAR_19, &VAR_40))
                   && VAR_40)
                  FUNC_4(VAR_40, VAR_38);
                break;
              case 132:
                if(VAR_0 ==
                   FUNC_0(VAR_35, VAR_27,
                                     &VAR_41))
                  FUNC_2(VAR_38, "%ld", VAR_41);
                break;
              case 142:
                if(VAR_0 ==
                   FUNC_0(VAR_35, VAR_16,
                                     &VAR_41))
                  FUNC_2(VAR_38, "%ld", VAR_41);
                break;
              case 156:
                if(VAR_36->filename)
                  FUNC_2(VAR_38, "%s", VAR_36->filename);
                break;
              case 144:
                if(VAR_0 ==
                   FUNC_0(VAR_35, VAR_14,
                                     &VAR_40))
                  FUNC_2(VAR_38, "%s", VAR_40);
                break;
              case 143:
                if(VAR_0 ==
                   FUNC_0(VAR_35, VAR_15,
                                     &VAR_41))
                  FUNC_2(VAR_38, "%ld", VAR_41);
                break;
              case 149:
                if(VAR_0 ==
                   FUNC_0(VAR_35, VAR_9,
                                     &VAR_40))
                  FUNC_2(VAR_38, "%s", VAR_40);
                break;
              case 148:
                if(VAR_0 ==
                   FUNC_0(VAR_35, VAR_10,
                                     &VAR_41))
                  FUNC_2(VAR_38, "%ld", VAR_41);
                break;
              case 150:
                if(VAR_0 ==
                   FUNC_0(VAR_35, VAR_8,
                                     &VAR_41)) {
                  const char *VAR_47 = "0";
                  switch(VAR_41) {
                  case 163:
                    VAR_47 = "1.0";
                    break;
                  case 162:
                    VAR_47 = "1.1";
                    break;
                  case 161:
                    VAR_47 = "2";
                    break;
                  case 160:
                    VAR_47 = "3";
                    break;
                  }

                  FUNC_2(VAR_38, "%s", VAR_47);
                }
                break;
              case 137:
                if(VAR_0 ==
                   FUNC_0(VAR_35, VAR_22,
                                     &VAR_40))
                  FUNC_2(VAR_38, "%s", VAR_40);
                break;
              case 129:
                VAR_38 = VAR_34;
                break;
              case 130:
                VAR_38 = VAR_33;
                break;
              default:
                break;
              }
              break;
            }
          }
          if(!VAR_46) {
            FUNC_2(VAR_33, "curl: unknown --write-out variable: '%s'\n", VAR_39);
          }
          VAR_39 = VAR_43 + 1;
          *VAR_43 = VAR_44;
        }
        else {

          FUNC_3('%', VAR_38);
          FUNC_3(VAR_39[1], VAR_38);
          VAR_39 += 2;
        }
      }
    }
    else if('\\' == *VAR_39 && VAR_39[1]) {
      switch(VAR_39[1]) {
      case 'r':
        FUNC_3('\r', VAR_38);
        break;
      case 'n':
        FUNC_3('\n', VAR_38);
        break;
      case 't':
        FUNC_3('\t', VAR_38);
        break;
      default:

        FUNC_3(*VAR_39, VAR_38);
        FUNC_3(VAR_39[1], VAR_38);
        break;
      }
      VAR_39 += 2;
    }
    else {
      FUNC_3(*VAR_39, VAR_38);
      VAR_39++;
    }
  }

}
