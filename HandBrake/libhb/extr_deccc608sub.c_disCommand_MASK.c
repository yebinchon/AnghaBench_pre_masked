
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s_write {int new_channel; } ;


 int FUNC_0 (unsigned char,struct s_write*) ;
 int FUNC_1 (unsigned char,unsigned char,struct s_write*) ;
 int FUNC_2 (unsigned char,unsigned char,struct s_write*) ;
 int FUNC_3 (unsigned char,unsigned char,struct s_write*) ;
 int FUNC_4 (unsigned char,unsigned char,struct s_write*) ;
 int FUNC_5 (unsigned char,unsigned char,struct s_write*) ;

__attribute__((used)) static int FUNC_6(unsigned char VAR_0, unsigned char VAR_1, struct s_write *VAR_2)
{
    int VAR_3=0;







    VAR_2->new_channel = FUNC_0 (VAR_0,VAR_2);



    if (VAR_0>=0x18 && VAR_0<=0x1f)
        VAR_0=VAR_0-8;

    switch (VAR_0)
    {
        case 0x10:
            if (VAR_1>=0x40 && VAR_1<=0x5f)
                FUNC_4 (VAR_0,VAR_1,VAR_2);
            break;
        case 0x11:
            if (VAR_1>=0x20 && VAR_1<=0x2f)
                FUNC_5 (VAR_0,VAR_1,VAR_2);
            if (VAR_1>=0x30 && VAR_1<=0x3f)
            {
                VAR_3=1;
                FUNC_2 (VAR_0,VAR_1,VAR_2);
            }
            if (VAR_1>=0x40 && VAR_1<=0x7f)
                FUNC_4 (VAR_0,VAR_1,VAR_2);
            break;
        case 0x12:
        case 0x13:
            if (VAR_1>=0x20 && VAR_1<=0x3f)
            {
                VAR_3=FUNC_3 (VAR_0,VAR_1,VAR_2);
            }
            if (VAR_1>=0x40 && VAR_1<=0x7f)
                FUNC_4 (VAR_0,VAR_1,VAR_2);
            break;
        case 0x14:
        case 0x15:
            if (VAR_1>=0x20 && VAR_1<=0x2f)
                FUNC_1 (VAR_0,VAR_1,VAR_2);
            if (VAR_1>=0x40 && VAR_1<=0x7f)
                FUNC_4 (VAR_0,VAR_1,VAR_2);
            break;
        case 0x16:
            if (VAR_1>=0x40 && VAR_1<=0x7f)
                FUNC_4 (VAR_0,VAR_1,VAR_2);
            break;
        case 0x17:
            if (VAR_1>=0x21 && VAR_1<=0x23)
                FUNC_1 (VAR_0,VAR_1,VAR_2);
            if (VAR_1>=0x2e && VAR_1<=0x2f)
                FUNC_5 (VAR_0,VAR_1,VAR_2);
            if (VAR_1>=0x40 && VAR_1<=0x7f)
                FUNC_4 (VAR_0,VAR_1,VAR_2);
            break;
    }
    return VAR_3;
}
