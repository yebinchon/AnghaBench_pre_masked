
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* declvar; int declinit; } ;
struct TYPE_6__ {int size; int isstatic; } ;
struct TYPE_5__ {TYPE_2__* ty; int glabel; } ;
typedef TYPE_3__ Node ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void FUNC_3(Node *VAR_1, int VAR_2, int VAR_3) {
    VAR_0;
    FUNC_1(".data %d", VAR_3);
    if (!VAR_1->declvar->ty->isstatic)
        FUNC_2(".global %s", VAR_1->declvar->glabel);
    FUNC_2("%s:", VAR_1->declvar->glabel);
    FUNC_0(VAR_1->declinit, VAR_1->declvar->ty->size, VAR_2, VAR_3);
}
