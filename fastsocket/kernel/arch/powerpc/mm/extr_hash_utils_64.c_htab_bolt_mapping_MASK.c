
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int shift; } ;
struct TYPE_3__ {int (* hpte_insert ) (unsigned long,unsigned long,unsigned long,unsigned long,int ,int,int) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,unsigned long,unsigned long,unsigned long,unsigned long,int,int) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_2 (unsigned long,int) ;
 unsigned long FUNC_3 (unsigned long,unsigned int,int) ;
 unsigned long FUNC_4 (unsigned long,unsigned long,int) ;
 unsigned long FUNC_5 (unsigned long) ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int* VAR_6 ;
 TYPE_2__* VAR_7 ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;
 TYPE_1__ VAR_8 ;
 int FUNC_7 (unsigned long,unsigned long,unsigned long,unsigned long,int ,int,int) ;

int FUNC_8(unsigned long VAR_9, unsigned long VAR_10,
        unsigned long VAR_11, unsigned long VAR_12,
        int VAR_13, int VAR_14)
{
 unsigned long VAR_15, VAR_16;
 unsigned int VAR_17, VAR_18;
 int VAR_19 = 0;

 VAR_18 = VAR_7[VAR_13].shift;
 VAR_17 = 1 << VAR_18;

 VAR_12 = FUNC_5(VAR_12);

 FUNC_1("htab_bolt_mapping(%lx..%lx -> %lx (%lx,%d,%d)\n",
     VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);

 for (VAR_15 = VAR_9, VAR_16 = VAR_11; VAR_15 < VAR_10;
      VAR_15 += VAR_17, VAR_16 += VAR_17) {
  unsigned long VAR_20, VAR_21;
  unsigned long VAR_22 = FUNC_2(VAR_15, VAR_14);
  unsigned long VAR_23 = FUNC_4(VAR_15, VAR_22, VAR_14);
  unsigned long VAR_24 = VAR_12;


  if (FUNC_6(VAR_15, VAR_15 + VAR_17))
   VAR_24 &= ~VAR_1;

  VAR_20 = FUNC_3(VAR_23, VAR_18, VAR_14);
  VAR_21 = ((VAR_20 & VAR_4) * VAR_0);

  FUNC_0(!VAR_8.hpte_insert);
  VAR_19 = VAR_8.hpte_insert(VAR_21, VAR_23, VAR_16, VAR_24,
      VAR_2, VAR_13, VAR_14);

  if (VAR_19 < 0)
   break;




 }
 return VAR_19 < 0 ? VAR_19 : 0;
}
