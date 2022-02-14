
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int len; int cmd; int ext; } ;
struct carl9170_cmd {int data; TYPE_1__ hdr; } ;


 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,int const*,int const) ;
 scalar_t__ FUNC_3 (int const) ;
 int FUNC_4 () ;

void FUNC_5(const uint8_t VAR_0, const uint8_t VAR_1,
        const uint8_t VAR_2, const uint8_t *VAR_3)
{
 struct carl9170_cmd *VAR_4;
 VAR_4 = (struct carl9170_cmd *) FUNC_1();
 if (FUNC_3(VAR_4 == ((void*)0))) {

  FUNC_0("out of msg buffers\n");
  return ;
 }

 VAR_4->hdr.len = VAR_0;
 VAR_4->hdr.cmd = VAR_1;
 VAR_4->hdr.ext = VAR_2;

 FUNC_2(VAR_4->data, VAR_3, VAR_0);
 FUNC_4();
}
