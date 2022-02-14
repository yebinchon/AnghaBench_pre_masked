
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct imap_conn {char* resptag; int state; } ;
struct TYPE_5__ {struct imap_conn imapc; } ;
struct connectdata {TYPE_3__* data; TYPE_2__ proto; } ;
struct IMAP {char* custom; } ;
struct TYPE_4__ {struct IMAP* protop; } ;
struct TYPE_6__ {TYPE_1__ req; } ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int FUNC_0 (TYPE_3__*,char*) ;
 int FUNC_1 (char*,size_t,char*) ;
 int FUNC_2 (char const*,char*,int) ;
 int FUNC_3 (char*,char*) ;
 size_t FUNC_4 (char const*) ;

__attribute__((used)) static bool FUNC_5(struct connectdata *VAR_5, char *VAR_6, size_t VAR_7,
                           int *VAR_8)
{
  struct IMAP *VAR_9 = VAR_5->data->req.protop;
  struct imap_conn *VAR_10 = &VAR_5->proto.imapc;
  const char *VAR_11 = VAR_10->resptag;
  size_t VAR_12 = FUNC_4(VAR_11);


  if(VAR_7 >= VAR_12 + 1 && !FUNC_2(VAR_11, VAR_6, VAR_12) && VAR_6[VAR_12] == ' ') {
    VAR_6 += VAR_12 + 1;
    VAR_7 -= VAR_12 + 1;

    if(VAR_7 >= 2 && !FUNC_2(VAR_6, "OK", 2))
      *VAR_8 = VAR_2;
    else if(VAR_7 >= 7 && !FUNC_2(VAR_6, "PREAUTH", 7))
      *VAR_8 = VAR_3;
    else
      *VAR_8 = VAR_1;

    return VAR_4;
  }


  if(VAR_7 >= 2 && !FUNC_2("* ", VAR_6, 2)) {
    switch(VAR_10->state) {

      case 132:
        if(!FUNC_1(VAR_6, VAR_7, "CAPABILITY"))
          return VAR_0;
        break;

      case 130:
        if((!VAR_9->custom && !FUNC_1(VAR_6, VAR_7, "LIST")) ||
          (VAR_9->custom && !FUNC_1(VAR_6, VAR_7, VAR_9->custom) &&
           (!FUNC_3(VAR_9->custom, "STORE") ||
            !FUNC_1(VAR_6, VAR_7, "FETCH")) &&
           !FUNC_3(VAR_9->custom, "SELECT") &&
           !FUNC_3(VAR_9->custom, "EXAMINE") &&
           !FUNC_3(VAR_9->custom, "SEARCH") &&
           !FUNC_3(VAR_9->custom, "EXPUNGE") &&
           !FUNC_3(VAR_9->custom, "LSUB") &&
           !FUNC_3(VAR_9->custom, "UID") &&
           !FUNC_3(VAR_9->custom, "NOOP")))
          return VAR_0;
        break;

      case 128:


        break;

      case 131:
        if(!FUNC_1(VAR_6, VAR_7, "FETCH"))
          return VAR_0;
        break;

      case 129:
        if(!FUNC_1(VAR_6, VAR_7, "SEARCH"))
          return VAR_0;
        break;


      default:
        return VAR_0;
    }

    *VAR_8 = '*';
    return VAR_4;
  }





  if(VAR_9 && !VAR_9->custom && ((VAR_7 == 3 && VAR_6[0] == '+') ||
     (VAR_7 >= 2 && !FUNC_2("+ ", VAR_6, 2)))) {
    switch(VAR_10->state) {

      case 133:
      case 134:
        *VAR_8 = '+';
        break;

      default:
        FUNC_0(VAR_5->data, "Unexpected continuation response");
        *VAR_8 = -1;
        break;
    }

    return VAR_4;
  }

  return VAR_0;
}
