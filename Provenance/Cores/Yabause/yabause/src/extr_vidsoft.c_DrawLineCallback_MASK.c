
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vdp1cmd_struct ;
typedef int u8 ;
typedef int Vdp1 ;
struct TYPE_4__ {int b; int g; int r; } ;
struct TYPE_3__ {int texturestep; int previousStep; int endcodesdetected; int linenumber; scalar_t__ xbluestep; scalar_t__ xgreenstep; scalar_t__ xredstep; } ;
typedef TYPE_1__ DrawLineData ;


 scalar_t__ FUNC_0 (int ,int,int *,int *) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (int,int,int *,int *,int *) ;
 int FUNC_2 (int,int,int *,int *,int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(int VAR_2, int VAR_3, int VAR_4, void *VAR_5, Vdp1* VAR_6, vdp1cmd_struct * VAR_7, u8* VAR_8, u8* VAR_9)
{
 int VAR_10;
 DrawLineData *VAR_11 = VAR_5;

 VAR_0.r += VAR_11->xredstep;
 VAR_0.g += VAR_11->xgreenstep;
 VAR_0.b += VAR_11->xbluestep;

 VAR_10 = (int)VAR_4 * VAR_11->texturestep;
 if (FUNC_0(VAR_11->linenumber, VAR_10, VAR_7, VAR_8)) {
  if (VAR_10 != VAR_11->previousStep) {
   VAR_11->previousStep = VAR_10;
   VAR_11->endcodesdetected ++;
  }
 } else if (VAR_1 == 2) {
  FUNC_1(VAR_2, VAR_3, VAR_6, VAR_7, VAR_9);
 } else {
      FUNC_2(VAR_2, VAR_3, VAR_6, VAR_7, VAR_9);
    }

 if (VAR_11->endcodesdetected == 2) return -1;

 return 0;
}
