
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocrdma_qp {int cap_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static u32 FUNC_0(struct ocrdma_qp *VAR_10)
{
 u32 VAR_11 = 0;
 if (VAR_10->cap_flags & VAR_6)
  VAR_11 |= VAR_2;
 if (VAR_10->cap_flags & VAR_7)
  VAR_11 |= VAR_3;
 if (VAR_10->cap_flags & VAR_9)
  VAR_11 |= VAR_0;
 if (VAR_10->cap_flags & VAR_8)
  VAR_11 |= VAR_4;
 if (VAR_10->cap_flags & VAR_5)
  VAR_11 |= VAR_1;
 return VAR_11;
}
