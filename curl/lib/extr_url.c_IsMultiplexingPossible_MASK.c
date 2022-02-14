
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int close; int protoconnstart; } ;
struct connectdata {TYPE_2__ bits; TYPE_1__* handler; } ;
struct TYPE_6__ {scalar_t__ httpversion; } ;
struct Curl_easy {TYPE_3__ set; int multi; } ;
struct TYPE_4__ {int protocol; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(const struct Curl_easy *VAR_3,
                                  const struct connectdata *VAR_4)
{
  int VAR_5 = 0;


  if((VAR_4->handler->protocol & VAR_2) &&
     (!VAR_4->bits.protoconnstart || !VAR_4->bits.close)) {

    if(FUNC_0(VAR_3->multi) &&
       (VAR_3->set.httpversion >= VAR_1))

      VAR_5 |= VAR_0;
  }
  return VAR_5;
}
