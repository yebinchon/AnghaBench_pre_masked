
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_9 ;

__attribute__((used)) static unsigned long FUNC_1 (void)
{
 unsigned long VAR_10, VAR_11, VAR_12;







 VAR_10 = FUNC_0(VAR_7 + VAR_6) + FUNC_0(VAR_7 + VAR_5);
 do {
  VAR_11 = VAR_10;
  VAR_12 = FUNC_0(VAR_4 + VAR_2) & (1 << VAR_3);
  VAR_10 = FUNC_0(VAR_7 + VAR_6) + FUNC_0(VAR_7 + VAR_5);
 } while (VAR_10 > VAR_11);


 VAR_10 = (VAR_0 / VAR_1) - VAR_10;


 if (VAR_12)
  VAR_10 += (VAR_0 / VAR_1);


 return (unsigned long)(VAR_10 * (VAR_9 / 1000)) / VAR_8;
}
