
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct host_vm_change {scalar_t__ force; } ;
typedef int pte_t ;
typedef int pmd_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (unsigned long,int,scalar_t__,int,struct host_vm_change*) ;
 int FUNC_1 (unsigned long,scalar_t__,int,struct host_vm_change*) ;
 int FUNC_2 (unsigned long,scalar_t__,struct host_vm_change*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int * FUNC_8 (int *,unsigned long) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static inline int FUNC_14(pmd_t *VAR_7, unsigned long VAR_8,
       unsigned long VAR_9,
       struct host_vm_change *VAR_10)
{
 pte_t *VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16 = 0;

 VAR_11 = FUNC_8(VAR_7, VAR_8);
 do {
  if ((VAR_8 >= VAR_3) && (VAR_8 < VAR_2))
   continue;

  VAR_12 = FUNC_10(*VAR_11);
  VAR_13 = FUNC_12(*VAR_11);
  VAR_14 = FUNC_4(*VAR_11);
  if (!FUNC_13(*VAR_11)) {
   VAR_12 = 0;
   VAR_13 = 0;
  } else if (!FUNC_3(*VAR_11))
   VAR_13 = 0;

  VAR_15 = ((VAR_12 ? VAR_5 : 0) | (VAR_13 ? VAR_6 : 0) |
   (VAR_14 ? VAR_4 : 0));
  if (VAR_10->force || FUNC_6(*VAR_11)) {
   if (FUNC_9(*VAR_11))
    VAR_16 = FUNC_0(VAR_8, FUNC_11(*VAR_11) & VAR_0,
            VAR_1, VAR_15, VAR_10);
   else
    VAR_16 = FUNC_2(VAR_8, VAR_1, VAR_10);
  } else if (FUNC_7(*VAR_11))
   VAR_16 = FUNC_1(VAR_8, VAR_1, VAR_15, VAR_10);
  *VAR_11 = FUNC_5(*VAR_11);
 } while (VAR_11++, VAR_8 += VAR_1, ((VAR_8 < VAR_9) && !VAR_16));
 return VAR_16;
}
