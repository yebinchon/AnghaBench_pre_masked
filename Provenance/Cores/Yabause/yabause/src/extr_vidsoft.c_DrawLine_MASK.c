
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vdp1cmd_struct ;
typedef int u8 ;
typedef int Vdp1 ;
struct TYPE_3__ {double linenumber; double texturestep; double xredstep; double xgreenstep; double xbluestep; int previousStep; scalar_t__ endcodesdetected; } ;
typedef TYPE_1__ DrawLineData ;


 int VAR_0 ;
 int FUNC_0 (int,int,int,int,int,TYPE_1__*,int ,int *,int *,int *,int *) ;

__attribute__((used)) static int FUNC_1(int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, double VAR_6, double VAR_7, double VAR_8, double VAR_9, double VAR_10, Vdp1* VAR_11, vdp1cmd_struct *VAR_12, u8 * VAR_13, u8* VAR_14)
{
 DrawLineData VAR_15;

 VAR_15.linenumber = VAR_6;
 VAR_15.texturestep = VAR_7;
 VAR_15.xredstep = VAR_8;
 VAR_15.xgreenstep = VAR_9;
 VAR_15.xbluestep = VAR_10;
 VAR_15.endcodesdetected = 0;
 VAR_15.previousStep = 123456789;

   return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, &VAR_15, VAR_0, VAR_11, VAR_12, VAR_13, VAR_14);
}
