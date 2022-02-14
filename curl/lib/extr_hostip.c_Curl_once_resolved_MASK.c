
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * dns; } ;
struct connectdata {int data; TYPE_1__ async; int * dns_entry; } ;
typedef scalar_t__ CURLcode ;


 int FUNC_0 (int ,struct connectdata*,int ) ;
 scalar_t__ FUNC_1 (struct connectdata*,int*) ;
 int VAR_0 ;

CURLcode FUNC_2(struct connectdata *VAR_1,
                            bool *VAR_2)
{
  CURLcode VAR_3;

  if(VAR_1->async.dns) {
    VAR_1->dns_entry = VAR_1->async.dns;
    VAR_1->async.dns = ((void*)0);
  }

  VAR_3 = FUNC_1(VAR_1, VAR_2);

  if(VAR_3)


    FUNC_0(VAR_1->data, VAR_1, VAR_0);

  return VAR_3;
}
