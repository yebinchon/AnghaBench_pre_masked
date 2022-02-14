
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;

__attribute__((used)) static inline unsigned FUNC_2(unsigned VAR_0)
{
 unsigned VAR_1;



 VAR_1 = (VAR_0 & 0x03ff0000) >> 16;

 if (FUNC_1(VAR_0)) {

  VAR_1 |= (VAR_0 & 0x00000006) << 14;

  VAR_1 |= (VAR_0 & 0x00000040) << 8;

  VAR_1 |= (VAR_0 & 0x00000780) << 3;
 } else {

  VAR_1 |= (VAR_0 & 0x04000000) >> 12;

  VAR_1 |= (VAR_0 & 0x78000000) >> 17;

  if (FUNC_0(VAR_0))
   VAR_1 |= (VAR_0 & 0x00000003) << 18;
 }

 return VAR_1;
}
