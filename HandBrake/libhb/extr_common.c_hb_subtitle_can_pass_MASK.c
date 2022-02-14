
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;

int FUNC_1( int VAR_0, int VAR_1 )
{
    switch (VAR_1)
    {
        case 137:
            switch( VAR_0 )
            {
                case 132:
                case 128:
                case 131:
                case 129:
                case 130:
                case 139:
                case 138:
                case 134:
                case 133:
                    return 1;

                default:
                    return 0;
            } break;

        case 136:
            switch( VAR_0 )
            {
                case 128:
                case 131:
                case 129:
                case 130:
                case 139:
                case 138:
                case 134:
                case 133:
                    return 1;

                default:
                    return 0;
            } break;



        case 135:
            return 0;
        default:

            FUNC_0("internal error.  Bad mux %d\n", VAR_1);
            return 0;
    }
}
