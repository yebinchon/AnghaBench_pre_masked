
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct op {int flags; scalar_t__ (* fn ) (unsigned int,unsigned int,unsigned int,scalar_t__) ;} ;


 size_t FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_1 (scalar_t__) ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (unsigned int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct op* VAR_8 ;
 struct op* VAR_9 ;
 int FUNC_4 (char*,unsigned int,scalar_t__,...) ;
 scalar_t__ FUNC_5 (unsigned int,unsigned int,unsigned int,scalar_t__) ;
 unsigned int FUNC_6 (scalar_t__) ;
 unsigned int FUNC_7 (scalar_t__) ;
 unsigned int FUNC_8 (scalar_t__) ;
 unsigned int FUNC_9 (scalar_t__) ;
 unsigned int FUNC_10 (scalar_t__) ;

u32 FUNC_11(u32 VAR_10, u32 VAR_11)
{
 u32 VAR_12 = VAR_10 & VAR_1;
 u32 VAR_13 = 0;
 unsigned int VAR_14;
 unsigned int VAR_15 = FUNC_8(VAR_10);
 unsigned int VAR_16;
 unsigned int VAR_17, VAR_18, VAR_19;
 struct op *VAR_20;

 VAR_19 = (1 + ((VAR_11 & VAR_4) == VAR_4));

 VAR_20 = (VAR_12 == VAR_0) ? &VAR_9[FUNC_0(VAR_10)] : &VAR_8[FUNC_1(VAR_12)];





 if (VAR_20->flags & VAR_6)
  VAR_14 = FUNC_9(VAR_10);
 else
  VAR_14 = FUNC_6(VAR_10);




 if (VAR_20->flags & VAR_7)
  VAR_16 = FUNC_10(VAR_10);
 else
  VAR_16 = FUNC_7(VAR_10);





 if ((VAR_20->flags & VAR_5) || (FUNC_2(VAR_14) == 0))
  VAR_18 = 0;
 else
  VAR_18 = VAR_11 & VAR_3;

 FUNC_4("VFP: vecstride=%u veclen=%u\n", VAR_19,
   (VAR_18 >> VAR_2) + 1);

 if (!VAR_20->fn)
  goto invalid;

 for (VAR_17 = 0; VAR_17 <= VAR_18; VAR_17 += 1 << VAR_2) {
  u32 VAR_21;
  char VAR_22;

  VAR_22 = VAR_20->flags & VAR_6 ? 's' : 'd';
  if (VAR_12 == VAR_0)
   FUNC_4("VFP: itr%d (%c%u) = op[%u] (d%u)\n",
     VAR_17 >> VAR_2,
     VAR_22, VAR_14, VAR_15, VAR_16);
  else
   FUNC_4("VFP: itr%d (%c%u) = (d%u) op[%u] (d%u)\n",
     VAR_17 >> VAR_2,
     VAR_22, VAR_14, VAR_15, FUNC_1(VAR_12), VAR_16);

  VAR_21 = VAR_20->fn(VAR_14, VAR_15, VAR_16, VAR_11);
  FUNC_4("VFP: itr%d: exceptions=%08x\n",
    VAR_17 >> VAR_2, VAR_21);

  VAR_13 |= VAR_21;





  VAR_14 = FUNC_2(VAR_14) + ((FUNC_3(VAR_14) + VAR_19) & 3);
  VAR_15 = FUNC_2(VAR_15) + ((FUNC_3(VAR_15) + VAR_19) & 3);
  if (FUNC_2(VAR_16) != 0)
   VAR_16 = FUNC_2(VAR_16) + ((FUNC_3(VAR_16) + VAR_19) & 3);
 }
 return VAR_13;

 invalid:
 return ~0;
}
