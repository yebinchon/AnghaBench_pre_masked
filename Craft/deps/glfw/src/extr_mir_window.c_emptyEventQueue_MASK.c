
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * tqh_first; } ;
struct TYPE_5__ {TYPE_1__ head; } ;
typedef TYPE_2__ EventQueue ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(EventQueue* VAR_2)
{
    return VAR_2->head.tqh_first == ((void*)0) ? VAR_1 : VAR_0;
}
