
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int autosync; } ;
struct TYPE_7__ {TYPE_1__ file; } ;
struct TYPE_8__ {scalar_t__ read; TYPE_2__ io; } ;
typedef TYPE_3__ rio ;
typedef int off_t ;
struct TYPE_9__ {scalar_t__ read; } ;


 TYPE_5__ VAR_0 ;
 int FUNC_0 (int) ;

void FUNC_1(rio *VAR_1, off_t VAR_2) {
    FUNC_0(VAR_1->read == VAR_0.read);
    VAR_1->io.file.autosync = VAR_2;
}
