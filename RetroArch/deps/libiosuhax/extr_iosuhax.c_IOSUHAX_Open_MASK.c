
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,void*,int ,unsigned int*,int) ;
 int FUNC_2 (char*,int ) ;
 int VAR_2 ;

int FUNC_3(const char *VAR_3)
{
    if(VAR_2 >= 0)
        return VAR_2;

    VAR_2 = FUNC_2((char*)(VAR_3 ? VAR_3 : "/dev/iosuhax"), 0);
    if(VAR_2 >= 0 && VAR_3)
    {
        unsigned int VAR_4 = 0;
        FUNC_1(VAR_2, VAR_0, (void*)0, 0, &VAR_4, 4);
        if(VAR_4 != VAR_1)
        {
            FUNC_0(VAR_2);
            VAR_2 = -1;
        }
    }

    return VAR_2;
}
