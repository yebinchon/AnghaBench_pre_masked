
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ipstr; int fd; } ;
typedef TYPE_1__ HttpContext ;
 int FUNC_0 (char*,TYPE_1__*,int ,int ,int) ;
 char** VAR_0 ;
 int FUNC_1 (TYPE_1__*,int,char*,int,char*) ;

void FUNC_2(HttpContext *VAR_1, int VAR_2, char *VAR_3) {
  int VAR_4 = 500;
  char *VAR_5 = "Internal Server Error";
  switch (VAR_2) {
    case 160:
      VAR_4 = 200;
      VAR_5 = "OK";
      break;
    case 162:
    case 128:
      VAR_4 = 404;
      VAR_5 = "Not Found";
      break;
    case 167:
      VAR_4 = 405;
      VAR_5 = "Method Not Allowed";
      break;
    case 166:
      VAR_4 = 505;
      VAR_5 = "HTTP Version Not Supported";
      break;
    case 168:
      VAR_4 = 406;
      VAR_5 = "Not Acceptable";
      break;
    case 163:
      VAR_4 = 413;
      VAR_5 = "Request Entity Too Large";
      break;
    case 171:
    case 170:
      VAR_4 = 409;
      VAR_5 = "Conflict";
      break;
    case 165:
      VAR_4 = 414;
      VAR_5 = "Request-URI Invalid";
      break;
    case 181:
    case 164:
      VAR_4 = 401;
      VAR_5 = "Unauthorized";
      break;
    case 172:
      VAR_4 = 400;
      VAR_5 = "Bad Request";
      break;
    case 161:
      VAR_4 = 421;
      VAR_5 = "Too many connections";
      break;
    case 176:
    case 182:
      VAR_4 = 507;
      VAR_5 = "Insufficient Storage";
      break;
    case 179:
    case 174:
    case 169:
    case 178:
    case 173:
      VAR_4 = 400;
      VAR_5 = "Bad Request";
      break;
    case 175:
      VAR_4 = 421;
      VAR_5 = "Too many connections";
      break;

    case 159:
    case 158:
    case 148:
    case 147:
    case 146:
    case 143:
    case 142:
    case 144:
    case 145:
    case 131:
    case 130:
    case 129:
    case 139:
    case 138:
    case 137:
    case 134:
    case 136:
    case 135:
    case 132:
    case 133:
    case 141:
    case 140:
    case 157:
    case 156:
    case 155:
    case 152:
    case 154:
    case 153:
    case 150:
    case 151:
    case 180:
    case 177:
    case 149:

    case 184:
    case 183:
      VAR_4 = 400;
      VAR_5 = "Bad Request";
      break;
    default:
      FUNC_0("context:%p, fd:%d, ip:%s, error:%d not recognized", VAR_1, VAR_1->fd, VAR_1->ipstr, VAR_2);
      break;
  }

  if (VAR_3 == ((void*)0)) {
    FUNC_1(VAR_1, VAR_4, VAR_5, VAR_2 + 1000, VAR_0[VAR_2]);
  } else {
    FUNC_1(VAR_1, VAR_4, VAR_5, VAR_2 + 1000, VAR_3);
  }
}
