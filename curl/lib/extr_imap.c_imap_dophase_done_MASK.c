
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct connectdata {TYPE_2__* data; } ;
struct IMAP {scalar_t__ transfer; } ;
struct TYPE_3__ {struct IMAP* protop; } ;
struct TYPE_4__ {TYPE_1__ req; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int,int,int ,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static CURLcode FUNC_1(struct connectdata *VAR_3, bool VAR_4)
{
  struct IMAP *VAR_5 = VAR_3->data->req.protop;

  (void)VAR_4;

  if(VAR_5->transfer != VAR_2)

    FUNC_0(VAR_3->data, -1, -1, VAR_1, -1);

  return VAR_0;
}
