
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct connectdata {TYPE_2__* data; } ;
typedef int imapstate ;
struct TYPE_3__ {char* buffer; } ;
struct TYPE_4__ {TYPE_1__ state; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct connectdata*,int ,char*,size_t) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct connectdata*,int ) ;
 size_t FUNC_2 (char*) ;

__attribute__((used)) static CURLcode FUNC_3(struct connectdata *VAR_5,
                                           int VAR_6,
                                           imapstate VAR_7)
{
  CURLcode VAR_8 = VAR_1;
  char *VAR_9 = VAR_5->data->state.buffer;
  size_t VAR_10 = FUNC_2(VAR_9);

  (void)VAR_7;

  if(VAR_6 == '*') {

    VAR_9[VAR_10] = '\n';
    VAR_8 = FUNC_0(VAR_5, VAR_0, VAR_9, VAR_10 + 1);
    VAR_9[VAR_10] = '\0';
  }
  else if(VAR_6 != VAR_3)
    VAR_8 = VAR_2;
  else

    FUNC_1(VAR_5, VAR_4);

  return VAR_8;
}
