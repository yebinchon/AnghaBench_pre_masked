
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;

__attribute__((used)) static inline unsigned int FUNC_1(unsigned int VAR_0, unsigned int VAR_1)
{


    unsigned int VAR_2 = (VAR_0 & 0x000000ff) + ((VAR_0 & 0x0000ff00) >> 8) + ((VAR_0 & 0x00ff0000) >> 16);
    unsigned int VAR_3 = (VAR_1 & 0x000000ff) + ((VAR_1 & 0x0000ff00) >> 8) + ((VAR_1 & 0x00ff0000) >> 16);

    return (abs((int)(VAR_2)-(int)(VAR_3))) + (FUNC_0((int)(VAR_0 & 0x000000ff)-(int)(VAR_1 & 0x000000ff))) +
        (FUNC_0((int)((VAR_0 & 0x0000ff00) >> 8)-(int)((VAR_1 & 0x0000ff00) >> 8))) +
        (FUNC_0((int)((VAR_0 & 0x00ff0000) >> 16)-(int)((VAR_1 & 0x00ff0000) >> 16)));
}
