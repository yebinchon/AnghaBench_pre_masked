
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s_write {TYPE_1__* data608; } ;
struct TYPE_2__ {scalar_t__ channel; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,unsigned char const) ;
 int FUNC_1 (unsigned char const,struct s_write*) ;

__attribute__((used)) static void FUNC_2(const unsigned char VAR_2, struct s_write *VAR_3)
{
    if (VAR_2<0x20 || VAR_3->data608->channel!=VAR_0)
        return;
    if (VAR_1)
        FUNC_0 ("%c",VAR_2);



    FUNC_1 (VAR_2,VAR_3);
}
