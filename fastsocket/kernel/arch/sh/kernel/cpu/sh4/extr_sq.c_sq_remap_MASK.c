
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sq_mapping {unsigned long addr; unsigned int size; char const* name; unsigned long sq_addr; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_0 (unsigned long) ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct sq_mapping*,unsigned long) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (unsigned int) ;
 int VAR_9 ;
 struct sq_mapping* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,struct sq_mapping*) ;
 scalar_t__ FUNC_6 (char const*) ;
 unsigned long FUNC_7 (int ) ;
 int FUNC_8 (char*,char*,unsigned int,char*,unsigned long,unsigned long) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_9 (struct sq_mapping*) ;
 scalar_t__ FUNC_10 (int) ;
 unsigned long FUNC_11 (int ) ;

unsigned long FUNC_12(unsigned long VAR_12, unsigned int VAR_13,
         const char *VAR_14, unsigned long VAR_15)
{
 struct sq_mapping *VAR_16;
 unsigned long VAR_17;
 unsigned int VAR_18;
 int VAR_19, VAR_20;


 VAR_17 = VAR_12 + VAR_13 - 1;
 if (FUNC_10(!VAR_13 || VAR_17 < VAR_12))
  return -VAR_0;

 if (FUNC_10(VAR_12 < FUNC_11(VAR_9)))
  return -VAR_0;

 VAR_12 &= VAR_6;
 VAR_13 = FUNC_0(VAR_17 + 1) - VAR_12;

 VAR_16 = FUNC_4(VAR_11, VAR_3);
 if (FUNC_10(!VAR_16))
  return -VAR_1;

 VAR_16->addr = VAR_12;
 VAR_16->size = VAR_13;
 VAR_16->name = VAR_14;

 VAR_20 = FUNC_2(VAR_10, 0x04000000 >> VAR_7,
           FUNC_3(VAR_16->size));
 if (FUNC_10(VAR_20 < 0)) {
  VAR_19 = -VAR_2;
  goto out;
 }

 VAR_16->sq_addr = VAR_4 + (VAR_20 << VAR_7);

 VAR_19 = FUNC_1(VAR_16, FUNC_7(VAR_5) | VAR_15);
 if (FUNC_10(VAR_19 != 0))
  goto out;

 VAR_18 = (VAR_13 + (VAR_8 - 1)) >> VAR_7;
 FUNC_8("sqremap: %15s  [%4d page%s]  va 0x%08lx   pa 0x%08lx\n",
  FUNC_6(VAR_16->name) ? VAR_16->name : "???",
  VAR_18, VAR_18 == 1 ? " " : "s",
  VAR_16->sq_addr, VAR_16->addr);

 FUNC_9(VAR_16);

 return VAR_16->sq_addr;

out:
 FUNC_5(VAR_11, VAR_16);
 return VAR_19;
}
