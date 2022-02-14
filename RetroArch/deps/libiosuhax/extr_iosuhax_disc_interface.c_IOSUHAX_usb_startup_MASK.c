
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_3(void)
{
    if(!FUNC_2(VAR_0))
        return 0;

    if(VAR_2 < 0)
    {
        int VAR_3 = FUNC_0(VAR_1, "/dev/usb01", &VAR_2);
        if(VAR_3 < 0)
        {
            VAR_3 = FUNC_0(VAR_1, "/dev/usb02", &VAR_2);
            if(VAR_3 < 0)
            {
                FUNC_1(VAR_0);
                VAR_2 = -1;
            }
        }
    }
    return (VAR_2 >= 0);
}
