
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct curl_slist {int dummy; } ;
struct TYPE_19__ {int kind; int filename; int name; int mimetype; int encoder; scalar_t__ userheaders; struct TYPE_19__* nextpart; scalar_t__ arg; int easy; int freefunc; int seekfunc; int readfunc; int datasize; int data; } ;
typedef TYPE_1__ curl_mimepart ;
struct TYPE_20__ {TYPE_1__* firstpart; } ;
typedef TYPE_2__ curl_mime ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 struct curl_slist* FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;





 int VAR_4 ;
 TYPE_1__* FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ,size_t) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ,int ,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_8 (TYPE_1__*,struct curl_slist*,int ) ;
 TYPE_2__* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_11 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_12 (TYPE_1__*,int ) ;
 int FUNC_13 (struct curl_slist*) ;

CURLcode FUNC_14(curl_mimepart *VAR_5, const curl_mimepart *VAR_6)
{
  curl_mime *VAR_7;
  curl_mimepart *VAR_8;
  const curl_mimepart *VAR_9;
  CURLcode VAR_10 = VAR_1;

  FUNC_2(VAR_5);


  switch(VAR_6->kind) {
  case 128:
    break;
  case 131:
    VAR_10 = FUNC_4(VAR_5, VAR_6->data, (size_t) VAR_6->datasize);
    break;
  case 130:
    VAR_10 = FUNC_6(VAR_5, VAR_6->data);

    if(VAR_10 == VAR_3)
      VAR_10 = VAR_1;
    break;
  case 132:
    VAR_10 = FUNC_5(VAR_5, VAR_6->datasize, VAR_6->readfunc,
                            VAR_6->seekfunc, VAR_6->freefunc, VAR_6->arg);
    break;
  case 129:


    VAR_7 = FUNC_9(VAR_5->easy);
    VAR_10 = VAR_7? FUNC_11(VAR_5, VAR_7): VAR_2;


    for(VAR_9 = ((curl_mime *) VAR_6->arg)->firstpart; !VAR_10 && VAR_9; VAR_9 = VAR_9->nextpart) {
      VAR_8 = FUNC_3(VAR_7);
      VAR_10 = VAR_8? FUNC_14(VAR_8, VAR_9): VAR_2;
    }
    break;
  default:
    VAR_10 = VAR_0;
    break;
  }


  if(!VAR_10 && VAR_6->userheaders) {
    struct curl_slist *VAR_11 = FUNC_1(VAR_6->userheaders);

    if(!VAR_11)
      VAR_10 = VAR_2;
    else {


      VAR_10 = FUNC_8(VAR_5, VAR_11, VAR_4);
      if(VAR_10)
        FUNC_13(VAR_11);
    }
  }

  if(!VAR_10) {

    VAR_5->encoder = VAR_6->encoder;
    VAR_10 = FUNC_12(VAR_5, VAR_6->mimetype);
  }
  if(!VAR_10)
    VAR_10 = FUNC_10(VAR_5, VAR_6->name);
  if(!VAR_10)
    VAR_10 = FUNC_7(VAR_5, VAR_6->filename);


  if(VAR_10)
    FUNC_0(VAR_5);

  return VAR_10;
}
