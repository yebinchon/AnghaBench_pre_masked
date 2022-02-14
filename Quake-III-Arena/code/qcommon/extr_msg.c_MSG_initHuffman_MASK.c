
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int byte ;
struct TYPE_3__ {int decompressor; int compressor; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;

void FUNC_2() {
 int VAR_4,VAR_5;

 VAR_1 = VAR_3;
 FUNC_0(&VAR_0);
 for(VAR_4=0;VAR_4<256;VAR_4++) {
  for (VAR_5=0;VAR_5<VAR_2[VAR_4];VAR_5++) {
   FUNC_1(&VAR_0.compressor, (byte)VAR_4);
   FUNC_1(&VAR_0.decompressor, (byte)VAR_4);
  }
 }
}
