
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int SubType; int Flags; } ;
typedef TYPE_1__ XINPUT_CAPABILITIES ;


 int VAR_0 ;
__attribute__((used)) static const char* FUNC_0(const XINPUT_CAPABILITIES* VAR_1)
{
    switch (VAR_1->SubType)
    {
        case 128:
            return "XInput Wheel";
        case 134:
            return "XInput Arcade Stick";
        case 131:
            return "XInput Flight Stick";
        case 133:
            return "XInput Dance Pad";
        case 129:
            return "XInput Guitar";
        case 132:
            return "XInput Drum Kit";
        case 130:
        {
            if (VAR_1->Flags & VAR_0)
                return "Wireless Xbox 360 Controller";
            else
                return "Xbox 360 Controller";
        }
    }

    return "Unknown XInput Device";
}
