
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int code_length; int code_address; int commpage_address; } ;
typedef TYPE_1__ commpage_descriptor ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(
    commpage_descriptor *VAR_0 )
{
 FUNC_0(VAR_0->commpage_address,VAR_0->code_address,VAR_0->code_length);
}
