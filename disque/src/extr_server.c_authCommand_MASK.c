
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int authenticated; TYPE_1__** argv; } ;
typedef TYPE_2__ client ;
struct TYPE_11__ {int requirepass; } ;
struct TYPE_10__ {int ok; } ;
struct TYPE_8__ {int ptr; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 TYPE_4__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(client *VAR_2) {
    if (!VAR_0.requirepass) {
        FUNC_1(VAR_2,"Client sent AUTH, but no password is set");
    } else if (!FUNC_2(VAR_2->argv[1]->ptr, VAR_0.requirepass)) {
      VAR_2->authenticated = 1;
      FUNC_0(VAR_2,VAR_1.ok);
    } else {
      VAR_2->authenticated = 0;
      FUNC_1(VAR_2,"invalid password");
    }
}
