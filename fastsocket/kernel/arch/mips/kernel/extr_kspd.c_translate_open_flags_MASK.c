
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sp; unsigned int ap; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static unsigned int FUNC_1(int VAR_1)
{
 int VAR_2;
 unsigned int VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  if( (VAR_1 & VAR_0[VAR_2].sp) ) {
   VAR_3 |= VAR_0[VAR_2].ap;
  }
 }

 return VAR_3;
}
