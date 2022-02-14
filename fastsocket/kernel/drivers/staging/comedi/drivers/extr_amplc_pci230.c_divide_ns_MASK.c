
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;



 unsigned int VAR_0 ;


 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (scalar_t__,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_1(uint64_t VAR_2, unsigned int VAR_3,
         unsigned int VAR_4)
{
 uint64_t VAR_5;
 unsigned int VAR_6;

 VAR_5 = VAR_2;
 VAR_6 = FUNC_0(VAR_5, VAR_3);
 VAR_4 &= VAR_0;
 switch (VAR_4) {
 default:
 case 129:
  VAR_5 += (VAR_6 + (VAR_3 / 2)) / VAR_3;
  break;
 case 130:
  break;
 case 128:
  VAR_5 += (VAR_6 + VAR_3 - 1) / VAR_3;
  break;
 }
 return VAR_5 > VAR_1 ? VAR_1 : (unsigned int)VAR_5;
}
