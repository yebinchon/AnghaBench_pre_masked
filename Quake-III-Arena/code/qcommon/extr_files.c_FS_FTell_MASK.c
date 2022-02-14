
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t fileHandle_t ;
struct TYPE_4__ {int o; int z; } ;
struct TYPE_5__ {TYPE_1__ file; } ;
struct TYPE_6__ {scalar_t__ zipFile; TYPE_2__ handleFiles; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;

int FUNC_2( fileHandle_t VAR_2 ) {
 int VAR_3;
 if (VAR_0[VAR_2].zipFile == VAR_1) {
  VAR_3 = FUNC_1(VAR_0[VAR_2].handleFiles.file.z);
 } else {
  VAR_3 = FUNC_0(VAR_0[VAR_2].handleFiles.file.o);
 }
 return VAR_3;
}
