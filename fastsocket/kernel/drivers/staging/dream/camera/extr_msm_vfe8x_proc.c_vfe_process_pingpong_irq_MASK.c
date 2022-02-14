
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef size_t uint16_t ;
struct vfe_output_path {int fragIndex; scalar_t__ hwCurrentFlag; int hwRegPongAddress; int hwRegPingAddress; int * addressBuffer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct vfe_output_path *VAR_2,
 uint8_t VAR_3)
{
 uint16_t VAR_4;
 uint32_t VAR_5;


 VAR_4 = (VAR_2->fragIndex) % (2 * VAR_3);
 VAR_5 = VAR_2->addressBuffer[VAR_4];

 VAR_2->fragIndex = VAR_4 + 1;


 if (VAR_2->hwCurrentFlag == VAR_0) {
  FUNC_0(VAR_5, VAR_2->hwRegPingAddress);
  VAR_2->hwCurrentFlag = VAR_1;

 } else {
  FUNC_0(VAR_5, VAR_2->hwRegPongAddress);
  VAR_2->hwCurrentFlag = VAR_0;
 }
}
