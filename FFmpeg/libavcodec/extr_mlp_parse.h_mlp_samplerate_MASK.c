
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0(int VAR_0)
{
    if (VAR_0 == 0xF)
        return 0;

    return (VAR_0 & 8 ? 44100 : 48000) << (VAR_0 & 7) ;
}
