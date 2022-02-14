
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int waveheader_struct ;
typedef int fmt_struct ;
struct TYPE_3__ {int member_1; int member_0; } ;
typedef TYPE_1__ IOCheck_struct ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int,int ) ;
 long FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_1__*,void*,int,int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(void)
{
   if (VAR_1)
   {
      long VAR_2 = FUNC_2(VAR_1);
      IOCheck_struct VAR_3 = { 0, 0 };


      FUNC_1(VAR_1, sizeof(waveheader_struct)-0x8, VAR_0);
      VAR_2 -= 0x4;
      FUNC_3(&VAR_3, (void *)&VAR_2, 1, 4, VAR_1);

      FUNC_1(VAR_1, sizeof(waveheader_struct)+sizeof(fmt_struct)+0x4, VAR_0);
      VAR_2 -= sizeof(waveheader_struct)+sizeof(fmt_struct);
      FUNC_3(&VAR_3, (void *)&VAR_2, 1, 4, VAR_1);
      FUNC_0(VAR_1);
   }
}
