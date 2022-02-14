
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct connectdata {TYPE_2__* data; } ;
struct IMAP {int query; } ;
struct TYPE_3__ {struct IMAP* protop; } ;
struct TYPE_4__ {TYPE_1__ req; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (struct connectdata*,char*,int ) ;
 int FUNC_2 (struct connectdata*,int ) ;

__attribute__((used)) static CURLcode FUNC_3(struct connectdata *VAR_3)
{
  CURLcode VAR_4 = VAR_0;
  struct IMAP *VAR_5 = VAR_3->data->req.protop;


  if(!VAR_5->query) {
    FUNC_0(VAR_3->data, "Cannot SEARCH without a query string.");
    return VAR_1;
  }


  VAR_4 = FUNC_1(VAR_3, "SEARCH %s", VAR_5->query);

  if(!VAR_4)
    FUNC_2(VAR_3, VAR_2);

  return VAR_4;
}
