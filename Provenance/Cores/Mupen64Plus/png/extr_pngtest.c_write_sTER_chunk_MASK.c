
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int png_structp ;
typedef int png_byte ;
struct TYPE_2__ {int sTER_mode; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int*,int*,int) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_2(png_structp VAR_3)
{
   png_byte VAR_4[5] = {115, 84, 69, 82, '\0'};

   if (VAR_2 != 0)
      FUNC_0(VAR_0, "\n stereo mode = %d\n", VAR_1.sTER_mode);

   FUNC_1(VAR_3, VAR_4, &VAR_1.sTER_mode, 1);
}
