
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ boolean_t ;
struct TYPE_3__ {void* maxprot; void* initprot; int segname; } ;
typedef TYPE_1__ KXLDSeg ;


 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int ,int ,int) ;

void
FUNC_1(KXLDSeg *VAR_4, boolean_t VAR_5)
{
    if (VAR_5) {
        if (!FUNC_0(VAR_4->segname, VAR_1, sizeof(VAR_4->segname))) {
            VAR_4->initprot = VAR_2;
            VAR_4->maxprot = VAR_2;
        } else {
            VAR_4->initprot = VAR_0;
            VAR_4->maxprot = VAR_0;
        }
    } else {
        VAR_4->initprot = VAR_3;
        VAR_4->maxprot = VAR_3;
    }
}
