
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ fp; int data; } ;
typedef TYPE_1__ curl_mimepart ;


 scalar_t__ FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(curl_mimepart * VAR_0)
{


  if(VAR_0->fp)
    return 0;
  VAR_0->fp = FUNC_0(VAR_0->data, "rb");
  return VAR_0->fp? 0: -1;
}
