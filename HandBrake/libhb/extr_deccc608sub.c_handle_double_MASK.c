
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s_write {TYPE_1__* data608; } ;
struct TYPE_2__ {scalar_t__ channel; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,unsigned char const,unsigned char const,unsigned char) ;
 int FUNC_1 (unsigned char,struct s_write*) ;

__attribute__((used)) static void FUNC_2(const unsigned char VAR_2, const unsigned char VAR_3,
                          struct s_write *VAR_4)
{
    unsigned char VAR_5;
    if (VAR_4->data608->channel!=VAR_0)
        return;
    if (VAR_3>=0x30 && VAR_3<=0x3f)
    {
        VAR_5=VAR_3 + 0x50;
        if (VAR_1)
            FUNC_0 ("\rDouble: %02X %02X  -->  %c\n",VAR_2,VAR_3,VAR_5);
        FUNC_1(VAR_5,VAR_4);
    }
}
