
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct protection_domain {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 scalar_t__ FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (unsigned long) ;
 int FUNC_3 (int,unsigned long) ;
 unsigned long* FUNC_4 (struct protection_domain*,unsigned long,int,int *,int ) ;
 int FUNC_5 (struct protection_domain*) ;

__attribute__((used)) static int FUNC_6(struct protection_domain *VAR_9,
     unsigned long VAR_10,
     unsigned long VAR_11,
     int VAR_12,
     int VAR_13)
{
 u64 VAR_14, *VAR_15;

 VAR_10 = FUNC_2(VAR_10);
 VAR_11 = FUNC_2(VAR_11);

 FUNC_0(!FUNC_3(VAR_13, VAR_10));
 FUNC_0(!FUNC_3(VAR_13, VAR_11));

 if (!(VAR_12 & VAR_5))
  return -VAR_1;

 VAR_15 = FUNC_4(VAR_9, VAR_10, VAR_13, ((void*)0), VAR_2);

 if (FUNC_1(*VAR_15))
  return -VAR_0;

 VAR_14 = VAR_11 | VAR_8;
 if (VAR_12 & VAR_3)
  VAR_14 |= VAR_6;
 if (VAR_12 & VAR_4)
  VAR_14 |= VAR_7;

 *VAR_15 = VAR_14;

 FUNC_5(VAR_9);

 return 0;
}
