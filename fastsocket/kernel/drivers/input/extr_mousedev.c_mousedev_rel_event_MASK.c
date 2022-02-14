
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dx; int dy; int dz; } ;
struct mousedev {TYPE_1__ packet; } ;






__attribute__((used)) static void FUNC_0(struct mousedev *VAR_0,
    unsigned int VAR_1, int VAR_2)
{
 switch (VAR_1) {
 case 129:
  VAR_0->packet.dx += VAR_2;
  break;

 case 128:
  VAR_0->packet.dy -= VAR_2;
  break;

 case 130:
  VAR_0->packet.dz -= VAR_2;
  break;
 }
}
