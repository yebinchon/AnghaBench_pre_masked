
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serverCommand {int dummy; } ;
typedef int sds ;
struct TYPE_2__ {int orig_commands; int commands; } ;


 struct serverCommand* FUNC_0 (int ,int ) ;
 TYPE_1__ VAR_0 ;

struct serverCommand *FUNC_1(sds VAR_1) {
    struct serverCommand *VAR_2 = FUNC_0(VAR_0.commands, VAR_1);

    if (!VAR_2) VAR_2 = FUNC_0(VAR_0.orig_commands,VAR_1);
    return VAR_2;
}
