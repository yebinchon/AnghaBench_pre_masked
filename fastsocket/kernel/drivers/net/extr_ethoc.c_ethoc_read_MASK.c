
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ethoc {scalar_t__ iobase; } ;
typedef scalar_t__ loff_t ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_1(struct ethoc *VAR_0, loff_t VAR_1)
{
 return FUNC_0(VAR_0->iobase + VAR_1);
}
