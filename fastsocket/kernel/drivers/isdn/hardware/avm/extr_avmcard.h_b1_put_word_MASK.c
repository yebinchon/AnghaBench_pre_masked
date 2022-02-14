
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int,unsigned int) ;

__attribute__((used)) static inline void FUNC_1(unsigned int VAR_0, unsigned int VAR_1)
{
 FUNC_0(VAR_0, VAR_1 & 0xff);
 FUNC_0(VAR_0, (VAR_1 >> 8) & 0xff);
 FUNC_0(VAR_0, (VAR_1 >> 16) & 0xff);
 FUNC_0(VAR_0, (VAR_1 >> 24) & 0xff);
}
