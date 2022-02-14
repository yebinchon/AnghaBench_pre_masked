
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int windowDef_t ;
struct TYPE_4__ {int borderSize; double* foreColor; int cinematic; } ;
typedef TYPE_1__ Window ;


 int FUNC_0 (TYPE_1__*,int ,int) ;

void FUNC_1(Window *VAR_0) {
 FUNC_0(VAR_0, 0, sizeof(windowDef_t));
 VAR_0->borderSize = 1;
 VAR_0->foreColor[0] = VAR_0->foreColor[1] = VAR_0->foreColor[2] = VAR_0->foreColor[3] = 1.0;
 VAR_0->cinematic = -1;
}
