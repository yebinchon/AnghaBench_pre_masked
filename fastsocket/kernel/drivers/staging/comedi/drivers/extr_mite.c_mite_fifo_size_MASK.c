
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mite_struct {scalar_t__ mite_io_addr; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (scalar_t__) ;

unsigned FUNC_2(struct mite_struct *VAR_0, unsigned VAR_1)
{
 unsigned VAR_2 = FUNC_1(VAR_0->mite_io_addr + FUNC_0(VAR_1));
 unsigned VAR_3 = (VAR_2 >> 16) & 0xff;
 unsigned VAR_4 = VAR_2 & 0xff;
 return VAR_3 + VAR_4;
}
