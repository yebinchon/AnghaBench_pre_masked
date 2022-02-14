
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s_write {TYPE_1__* data608; } ;
struct TYPE_2__ {int channel; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(unsigned char VAR_1, struct s_write *VAR_2)
{
    if (VAR_1==0x14)
    {
        if (VAR_0 && VAR_2->data608->channel!=1)
            FUNC_0 ("\nChannel change, now 1\n");
        return 1;
    }
    if (VAR_1==0x1c)
    {
        if (VAR_0 && VAR_2->data608->channel!=2)
            FUNC_0 ("\nChannel change, now 2\n");
        return 2;
    }
    if (VAR_1==0x15)
    {
        if (VAR_0 && VAR_2->data608->channel!=3)
            FUNC_0 ("\nChannel change, now 3\n");
        return 3;
    }
    if (VAR_1==0x1d)
    {
        if (VAR_0 && VAR_2->data608->channel!=4)
            FUNC_0 ("\nChannel change, now 4\n");
        return 4;
    }


    return VAR_2->data608->channel;
}
