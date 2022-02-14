
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int redBits; int greenBits; int blueBits; } ;
typedef int MirPixelFormat ;
typedef TYPE_1__ GLFWvidmode ;
void FUNC_0(GLFWvidmode* VAR_0, const MirPixelFormat VAR_1)
{
    switch (VAR_1)
    {
      case 133:
          VAR_0->redBits = 5;
          VAR_0->greenBits = 6;
          VAR_0->blueBits = 5;
          break;
      case 130:
          VAR_0->redBits = 5;
          VAR_0->greenBits = 5;
          VAR_0->blueBits = 5;
          break;
      case 131:
          VAR_0->redBits = 4;
          VAR_0->greenBits = 4;
          VAR_0->blueBits = 4;
          break;
      case 136:
      case 129:
      case 135:
      case 128:
      case 134:
      case 132:
      default:
          VAR_0->redBits = 8;
          VAR_0->greenBits = 8;
          VAR_0->blueBits = 8;
          break;
    }
}
