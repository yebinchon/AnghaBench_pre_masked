
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {scalar_t__ hwRegPingAddress; scalar_t__ hwRegPongAddress; } ;
struct TYPE_4__ {scalar_t__ hwRegPingAddress; scalar_t__ hwRegPongAddress; } ;
struct vfe_output_path_combo {int cbcrStatusBit; TYPE_2__ cbcrPath; TYPE_1__ yPath; } ;
struct TYPE_6__ {scalar_t__ vfebase; } ;


 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(
 struct vfe_output_path_combo *VAR_2, uint32_t *VAR_3,
 uint32_t *VAR_4)
{
 uint32_t VAR_5;
 uint32_t VAR_6;


 VAR_5 =
  FUNC_1(VAR_1->vfebase + VAR_0);

 FUNC_0("hardware status is 0x%x\n", VAR_5);



 VAR_5 = VAR_5 & (1<<(VAR_2->cbcrStatusBit));


 if (VAR_5 == 0) {



  VAR_6 = FUNC_1(VAR_2->yPath.hwRegPongAddress);

  FUNC_0("pong 1 addr = 0x%x\n", VAR_6);
  *VAR_4++ = VAR_6;

  VAR_6 = FUNC_1(VAR_2->cbcrPath.hwRegPongAddress);

  FUNC_0("pong 2 addr = 0x%x\n", VAR_6);
  *VAR_4 = VAR_6;


  FUNC_2(*VAR_3++, VAR_2->yPath.hwRegPongAddress);
  FUNC_2(*VAR_3, VAR_2->cbcrPath.hwRegPongAddress);
 } else {



  VAR_6 = FUNC_1(VAR_2->yPath.hwRegPingAddress);
  FUNC_0("ping 1 addr = 0x%x\n", VAR_6);
  *VAR_4++ = VAR_6;
  VAR_6 = FUNC_1(VAR_2->cbcrPath.hwRegPingAddress);

  FUNC_0("ping 2 addr = 0x%x\n", VAR_6);
  *VAR_4 = VAR_6;


  FUNC_2(*VAR_3++, VAR_2->yPath.hwRegPingAddress);
  FUNC_0("NextAddress = 0x%x\n", *VAR_3);
  FUNC_2(*VAR_3, VAR_2->cbcrPath.hwRegPingAddress);
 }
}
